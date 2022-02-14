
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int** VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1, int VAR_2[8],
                               int VAR_3, int VAR_4, int VAR_5)
{


    const uint8_t *VAR_6 = VAR_0[VAR_1 >> 3];
    VAR_2[VAR_3] = (VAR_6[2] << 1) + ( VAR_1 & 1);
    VAR_2[VAR_4] = (VAR_6[1] << 1) + ((VAR_1 >> 1) & 1);
    VAR_2[VAR_5] = (VAR_6[0] << 1) + ((VAR_1 >> 2) & 1);
}
