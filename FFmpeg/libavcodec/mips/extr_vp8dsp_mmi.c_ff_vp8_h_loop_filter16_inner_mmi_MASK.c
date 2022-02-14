
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int,int,int) ;

void FUNC_4(uint8_t *VAR_0, ptrdiff_t VAR_1,
        int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
        if (FUNC_3(VAR_0 + VAR_5 * VAR_1, 1, VAR_2, VAR_3)) {
            int VAR_6 = FUNC_0(VAR_0 + VAR_5 * VAR_1, 1, VAR_4);
            if (VAR_6)
                FUNC_1(VAR_0 + VAR_5 * VAR_1, 1);
            else
                FUNC_2(VAR_0 + VAR_5 * VAR_1, 1);
        }
}
