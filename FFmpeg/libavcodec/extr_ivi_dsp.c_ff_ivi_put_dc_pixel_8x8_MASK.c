
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int out ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int *,int ,int) ;

void FUNC_1(const int32_t *VAR_0, int16_t *VAR_1, ptrdiff_t VAR_2,
                             int VAR_3)
{
    int VAR_4;

    VAR_1[0] = VAR_0[0];
    FUNC_0(VAR_1 + 1, 0, 7*sizeof(VAR_1[0]));
    VAR_1 += VAR_2;

    for (VAR_4 = 1; VAR_4 < 8; VAR_1 += VAR_2, VAR_4++)
        FUNC_0(VAR_1, 0, 8*sizeof(VAR_1[0]));
}
