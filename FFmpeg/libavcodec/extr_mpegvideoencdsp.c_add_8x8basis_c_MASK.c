
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(int16_t VAR_2[64], int16_t VAR_3[64], int VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < 8 * 8; VAR_5++)
        VAR_2[VAR_5] += (VAR_3[VAR_5] * VAR_4 +
                   (1 << (VAR_0 - VAR_1 - 1))) >>
                  (VAR_0 - VAR_1);
}
