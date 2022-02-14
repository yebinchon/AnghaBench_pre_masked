
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;

void FUNC_2(uint8_t *VAR_0, ptrdiff_t VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 16; VAR_3++)
        if (FUNC_1(VAR_0 + VAR_3, VAR_1, VAR_2))
            FUNC_0(VAR_0 + VAR_3, VAR_1);
}
