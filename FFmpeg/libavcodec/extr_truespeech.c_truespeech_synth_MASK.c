
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int int16_t ;
struct TYPE_3__ {unsigned int* tmp1; unsigned int* filters; unsigned int* tmp2; unsigned int* tmp3; int filtval; } ;
typedef TYPE_1__ TSContext ;


 unsigned int FUNC_0 (int,int,int) ;
 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;

__attribute__((used)) static void FUNC_1(TSContext *VAR_2, int16_t *VAR_3, int VAR_4)
{
    int VAR_5,VAR_6;
    int VAR_7[8];
    int16_t *VAR_8, *VAR_9;

    VAR_8 = VAR_2->tmp1;
    VAR_9 = VAR_2->filters + VAR_4 * 8;
    for(VAR_5 = 0; VAR_5 < 60; VAR_5++){
        int VAR_10 = 0;
        for(VAR_6 = 0; VAR_6 < 8; VAR_6++)
            VAR_10 += VAR_8[VAR_6] * (unsigned)VAR_9[VAR_6];
        VAR_10 = VAR_3[VAR_5] + ((VAR_10 + 0x800) >> 12);
        VAR_3[VAR_5] = FUNC_0(VAR_10, -0x7FFE, 0x7FFE);
        for(VAR_6 = 7; VAR_6 > 0; VAR_6--)
            VAR_8[VAR_6] = VAR_8[VAR_6 - 1];
        VAR_8[0] = VAR_3[VAR_5];
    }

    for(VAR_5 = 0; VAR_5 < 8; VAR_5++)
        VAR_7[VAR_5] = (VAR_0[VAR_5] * VAR_9[VAR_5]) >> 15;

    VAR_8 = VAR_2->tmp2;
    for(VAR_5 = 0; VAR_5 < 60; VAR_5++){
        int VAR_11 = 0;
        for(VAR_6 = 0; VAR_6 < 8; VAR_6++)
            VAR_11 += VAR_8[VAR_6] * VAR_7[VAR_6];
        for(VAR_6 = 7; VAR_6 > 0; VAR_6--)
            VAR_8[VAR_6] = VAR_8[VAR_6 - 1];
        VAR_8[0] = VAR_3[VAR_5];
        VAR_3[VAR_5] += (- VAR_11) >> 12;
    }

    for(VAR_5 = 0; VAR_5 < 8; VAR_5++)
        VAR_7[VAR_5] = (VAR_1[VAR_5] * VAR_9[VAR_5]) >> 15;

    VAR_8 = VAR_2->tmp3;
    for(VAR_5 = 0; VAR_5 < 60; VAR_5++){
        int VAR_12 = VAR_3[VAR_5] * (1 << 12);
        for(VAR_6 = 0; VAR_6 < 8; VAR_6++)
            VAR_12 += VAR_8[VAR_6] * VAR_7[VAR_6];
        for(VAR_6 = 7; VAR_6 > 0; VAR_6--)
            VAR_8[VAR_6] = VAR_8[VAR_6 - 1];
        VAR_8[0] = FUNC_0((VAR_12 + 0x800) >> 12, -0x7FFE, 0x7FFE);

        VAR_12 = ((VAR_8[1] * (VAR_2->filtval - (VAR_2->filtval >> 2))) >> 4) + VAR_12;
        VAR_12 = VAR_12 - (VAR_12 >> 3);
        VAR_3[VAR_5] = FUNC_0((VAR_12 + 0x800) >> 12, -0x7FFE, 0x7FFE);
    }
}
