
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef int FLOAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int* VAR_4 ;
 int FUNC_2 (int*,int *) ;

void FUNC_3(int16_t *VAR_5)
{
    FLOAT VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    FLOAT VAR_14, VAR_15, VAR_16, VAR_17;
    FLOAT VAR_18, VAR_19, VAR_20, VAR_21;
    FLOAT VAR_22[64];
    int VAR_23;

    FUNC_0();

    FUNC_2(VAR_22, VAR_5);

    for (VAR_23=0; VAR_23<8; VAR_23++) {
        VAR_6= VAR_22[8*0 + VAR_23] + VAR_22[8*7 + VAR_23];
        VAR_13= VAR_22[8*0 + VAR_23] - VAR_22[8*7 + VAR_23];
        VAR_7= VAR_22[8*1 + VAR_23] + VAR_22[8*6 + VAR_23];
        VAR_12= VAR_22[8*1 + VAR_23] - VAR_22[8*6 + VAR_23];
        VAR_8= VAR_22[8*2 + VAR_23] + VAR_22[8*5 + VAR_23];
        VAR_11= VAR_22[8*2 + VAR_23] - VAR_22[8*5 + VAR_23];
        VAR_9= VAR_22[8*3 + VAR_23] + VAR_22[8*4 + VAR_23];
        VAR_10= VAR_22[8*3 + VAR_23] - VAR_22[8*4 + VAR_23];

        VAR_14= VAR_6 + VAR_9;
        VAR_17= VAR_6 - VAR_9;
        VAR_15= VAR_7 + VAR_8;
        VAR_16= VAR_7 - VAR_8;

        VAR_5[8*0 + VAR_23]= FUNC_1(VAR_4[8*0 + VAR_23] * (VAR_14 + VAR_15));
        VAR_5[8*4 + VAR_23]= FUNC_1(VAR_4[8*4 + VAR_23] * (VAR_14 - VAR_15));

        VAR_16 += VAR_17;
        VAR_16 *= VAR_0;
        VAR_5[8*2 + VAR_23]= FUNC_1(VAR_4[8*2 + VAR_23] * (VAR_17 + VAR_16));
        VAR_5[8*6 + VAR_23]= FUNC_1(VAR_4[8*6 + VAR_23] * (VAR_17 - VAR_16));

        VAR_10 += VAR_11;
        VAR_11 += VAR_12;
        VAR_12 += VAR_13;

        VAR_18= VAR_10*(VAR_1+VAR_3) - VAR_12*VAR_3;
        VAR_19= VAR_12*(VAR_2-VAR_3) + VAR_10*VAR_3;

        VAR_11*=VAR_0;

        VAR_20= VAR_13 + VAR_11;
        VAR_21= VAR_13 - VAR_11;

        VAR_5[8*5 + VAR_23]= FUNC_1(VAR_4[8*5 + VAR_23] * (VAR_21 + VAR_18));
        VAR_5[8*3 + VAR_23]= FUNC_1(VAR_4[8*3 + VAR_23] * (VAR_21 - VAR_18));
        VAR_5[8*1 + VAR_23]= FUNC_1(VAR_4[8*1 + VAR_23] * (VAR_20 + VAR_19));
        VAR_5[8*7 + VAR_23]= FUNC_1(VAR_4[8*7 + VAR_23] * (VAR_20 - VAR_19));
    }
}
