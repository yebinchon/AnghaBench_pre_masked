
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;

unsigned int FUNC_0(const void *VAR_1, int VAR_2) {


    uint32_t VAR_3 = VAR_0;
    const uint32_t VAR_4 = 0x5bd1e995;
    const int VAR_5 = 24;


    uint32_t VAR_6 = VAR_3 ^ VAR_2;


    const unsigned char *VAR_7 = (const unsigned char *)VAR_1;

    while(VAR_2 >= 4) {
        uint32_t VAR_8 = *(uint32_t*)VAR_7;

        VAR_8 *= VAR_4;
        VAR_8 ^= VAR_8 >> VAR_5;
        VAR_8 *= VAR_4;

        VAR_6 *= VAR_4;
        VAR_6 ^= VAR_8;

        VAR_7 += 4;
        VAR_2 -= 4;
    }


    switch(VAR_2) {
    case 3: VAR_6 ^= VAR_7[2] << 16;
    case 2: VAR_6 ^= VAR_7[1] << 8;
    case 1: VAR_6 ^= VAR_7[0]; VAR_6 *= VAR_4;
    };



    VAR_6 ^= VAR_6 >> 13;
    VAR_6 *= VAR_4;
    VAR_6 ^= VAR_6 >> 15;

    return (unsigned int)VAR_6;
}
