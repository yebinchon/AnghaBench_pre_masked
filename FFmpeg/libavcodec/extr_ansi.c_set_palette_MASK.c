
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(uint32_t *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    FUNC_2(VAR_1, VAR_0, 16 * 4);
    VAR_1 += 16;

    for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
        for (VAR_3 = 0; VAR_3 < 6; VAR_3++)
            for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
                *VAR_1++ = 0xFF000000 | (((VAR_2) * 40 + 55) << 16) | (((VAR_3) * 40 + 55) << 8) | ((VAR_4) * 40 + 55);

    for (VAR_3 = 0; VAR_3 < 24; VAR_3++)
        *VAR_1++ = 0xFF000000 | (((VAR_3) * 10 + 8) << 16) | (((VAR_3) * 10 + 8) << 8) | ((VAR_3) * 10 + 8);
}
