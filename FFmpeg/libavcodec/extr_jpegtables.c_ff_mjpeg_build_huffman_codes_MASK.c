
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



void FUNC_0(uint8_t *VAR_0, uint16_t *VAR_1,
                                  const uint8_t *VAR_2,
                                  const uint8_t *VAR_3)
{
    int VAR_4, VAR_5, VAR_6,VAR_7, VAR_8, VAR_9;
    VAR_0[0] = 0;

    VAR_6 = 0;
    VAR_8 = 0;
    for(VAR_4=1;VAR_4<=16;VAR_4++) {
        VAR_7 = VAR_2[VAR_4];
        for(VAR_5=0;VAR_5<VAR_7;VAR_5++) {
            VAR_9 = VAR_3[VAR_6++];
            if (VAR_9 != 0 || VAR_0[VAR_9] == 0) {
                VAR_0[VAR_9] = VAR_4;
                VAR_1[VAR_9] = VAR_8;
            }
            VAR_8++;
        }
        VAR_8 <<= 1;
    }
}
