
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (size_t*,int) ;
 size_t* VAR_0 ;
 size_t* VAR_1 ;

__attribute__((used)) static void FUNC_1(uint8_t VAR_2[4], uint32_t VAR_3[4], int VAR_4)
{
    uint8_t VAR_5[4];
    if (VAR_4 == 4) {
        FUNC_0(VAR_5, VAR_3[3]);
        VAR_2[0] = VAR_1[VAR_2[0]] ^ VAR_5[0];
        VAR_2[1] = VAR_0[VAR_2[1]] ^ VAR_5[1];
        VAR_2[2] = VAR_0[VAR_2[2]] ^ VAR_5[2];
        VAR_2[3] = VAR_1[VAR_2[3]] ^ VAR_5[3];
    }
    if (VAR_4 >= 3) {
        FUNC_0(VAR_5, VAR_3[2]);
        VAR_2[0] = VAR_1[VAR_2[0]] ^ VAR_5[0];
        VAR_2[1] = VAR_1[VAR_2[1]] ^ VAR_5[1];
        VAR_2[2] = VAR_0[VAR_2[2]] ^ VAR_5[2];
        VAR_2[3] = VAR_0[VAR_2[3]] ^ VAR_5[3];
    }
    FUNC_0(VAR_5, VAR_3[1]);
    VAR_2[0] = VAR_1[VAR_0[VAR_0[VAR_2[0]] ^ VAR_5[0]] ^ (VAR_3[0] & 0xff)];
    VAR_2[1] = VAR_0[VAR_0[VAR_1[VAR_2[1]] ^ VAR_5[1]] ^ ((VAR_3[0] >> 8) & 0xff)];
    VAR_2[2] = VAR_1[VAR_1[VAR_0[VAR_2[2]] ^ VAR_5[2]] ^ ((VAR_3[0] >> 16) & 0xff)];
    VAR_2[3] = VAR_0[VAR_1[VAR_1[VAR_2[3]] ^ VAR_5[3]] ^ (VAR_3[0] >> 24)];
}
