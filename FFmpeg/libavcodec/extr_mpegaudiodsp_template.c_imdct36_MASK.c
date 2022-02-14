
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SUINTFLOAT ;
typedef int INTFLOAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_9 ;
 int FUNC_2 (int,int) ;
 int * VAR_10 ;
 int* VAR_11 ;

__attribute__((used)) static void FUNC_3(INTFLOAT *VAR_12, INTFLOAT *VAR_13, SUINTFLOAT *VAR_14, INTFLOAT *VAR_15)
{
    int VAR_16, VAR_17;
    SUINTFLOAT VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    SUINTFLOAT VAR_26[18], *VAR_27, *VAR_28;

    for (VAR_16 = 17; VAR_16 >= 1; VAR_16--)
        VAR_14[VAR_16] += VAR_14[VAR_16-1];
    for (VAR_16 = 17; VAR_16 >= 3; VAR_16 -= 2)
        VAR_14[VAR_16] += VAR_14[VAR_16-2];

    for (VAR_17 = 0; VAR_17 < 2; VAR_17++) {
        VAR_27 = VAR_26 + VAR_17;
        VAR_28 = VAR_14 + VAR_17;

        VAR_20 = VAR_28[2*4] + VAR_28[2*8] - VAR_28[2*2];

        VAR_21 = VAR_28[2*0] + FUNC_2(VAR_28[2*6],1);
        VAR_19 = VAR_28[2*0] - VAR_28[2*6];
        VAR_27[ 6] = VAR_19 - FUNC_2(VAR_20,1);
        VAR_27[16] = VAR_19 + VAR_20;

        VAR_18 = FUNC_0(VAR_28[2*2] + VAR_28[2*4] , VAR_1, 2);
        VAR_19 = FUNC_0(VAR_28[2*4] - VAR_28[2*8] , -2*VAR_6, 1);
        VAR_20 = FUNC_0(VAR_28[2*2] + VAR_28[2*8] , -VAR_3, 2);

        VAR_27[10] = VAR_21 - VAR_18 - VAR_20;
        VAR_27[ 2] = VAR_21 + VAR_18 + VAR_19;
        VAR_27[14] = VAR_21 + VAR_20 - VAR_19;

        VAR_27[ 4] = FUNC_0(VAR_28[2*5] + VAR_28[2*7] - VAR_28[2*1], -VAR_2, 2);
        VAR_20 = FUNC_0(VAR_28[2*1] + VAR_28[2*5], VAR_0, 2);
        VAR_21 = FUNC_0(VAR_28[2*5] - VAR_28[2*7], -2*VAR_5, 1);
        VAR_18 = FUNC_0(VAR_28[2*3], VAR_2, 2);

        VAR_19 = FUNC_0(VAR_28[2*1] + VAR_28[2*7], -VAR_4, 2);

        VAR_27[ 0] = VAR_20 + VAR_21 + VAR_18;
        VAR_27[12] = VAR_20 + VAR_19 - VAR_18;
        VAR_27[ 8] = VAR_21 - VAR_19 - VAR_18;
    }

    VAR_16 = 0;
    for (VAR_17 = 0; VAR_17 < 4; VAR_17++) {
        VAR_18 = VAR_26[VAR_16];
        VAR_19 = VAR_26[VAR_16 + 2];
        VAR_22 = VAR_19 + VAR_18;
        VAR_24 = VAR_19 - VAR_18;

        VAR_20 = VAR_26[VAR_16 + 1];
        VAR_21 = VAR_26[VAR_16 + 3];
        VAR_23 = FUNC_0(VAR_21 + VAR_20, VAR_11[ VAR_17], 2);
        VAR_25 = FUNC_1(VAR_21 - VAR_20, VAR_10 [8 - VAR_17], VAR_7);

        VAR_18 = VAR_22 + VAR_23;
        VAR_19 = VAR_22 - VAR_23;
        VAR_12[(9 + VAR_17) * VAR_9] = FUNC_0(VAR_19, VAR_15[ 9 + VAR_17], 1) + VAR_13[4*(9 + VAR_17)];
        VAR_12[(8 - VAR_17) * VAR_9] = FUNC_0(VAR_19, VAR_15[ 8 - VAR_17], 1) + VAR_13[4*(8 - VAR_17)];
        VAR_13[4 * ( 9 + VAR_17 )] = FUNC_0(VAR_18, VAR_15[VAR_8/2 + 9 + VAR_17], 1);
        VAR_13[4 * ( 8 - VAR_17 )] = FUNC_0(VAR_18, VAR_15[VAR_8/2 + 8 - VAR_17], 1);

        VAR_18 = VAR_24 + VAR_25;
        VAR_19 = VAR_24 - VAR_25;
        VAR_12[(9 + 8 - VAR_17) * VAR_9] = FUNC_0(VAR_19, VAR_15[ 9 + 8 - VAR_17], 1) + VAR_13[4*(9 + 8 - VAR_17)];
        VAR_12[ VAR_17 * VAR_9] = FUNC_0(VAR_19, VAR_15[ VAR_17], 1) + VAR_13[4*( VAR_17)];
        VAR_13[4 * ( 9 + 8 - VAR_17 )] = FUNC_0(VAR_18, VAR_15[VAR_8/2 + 9 + 8 - VAR_17], 1);
        VAR_13[4 * ( VAR_17 )] = FUNC_0(VAR_18, VAR_15[VAR_8/2 + VAR_17], 1);
        VAR_16 += 4;
    }

    VAR_22 = VAR_26[16];
    VAR_23 = FUNC_0(VAR_26[17], VAR_11[4], 2);
    VAR_18 = VAR_22 + VAR_23;
    VAR_19 = VAR_22 - VAR_23;
    VAR_12[(9 + 4) * VAR_9] = FUNC_0(VAR_19, VAR_15[ 9 + 4], 1) + VAR_13[4*(9 + 4)];
    VAR_12[(8 - 4) * VAR_9] = FUNC_0(VAR_19, VAR_15[ 8 - 4], 1) + VAR_13[4*(8 - 4)];
    VAR_13[4 * ( 9 + 4 )] = FUNC_0(VAR_18, VAR_15[VAR_8/2 + 9 + 4], 1);
    VAR_13[4 * ( 8 - 4 )] = FUNC_0(VAR_18, VAR_15[VAR_8/2 + 8 - 4], 1);
}
