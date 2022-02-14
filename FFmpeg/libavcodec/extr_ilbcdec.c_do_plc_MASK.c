
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
struct TYPE_3__ {int consPLICount; int prevPLI; int* prevResidual; int block_samples; int prevScale; int prevLag; int per_square; int seed; int* prev_lpc; } ;
typedef TYPE_1__ ILBCContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int*,int*,int*,int,int,int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (int*,int*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int*,int*,int,int) ;

__attribute__((used)) static void FUNC_12(int16_t *VAR_5,
                   int16_t *VAR_6,
                   int16_t VAR_7,

                   int16_t *VAR_8,
                   int16_t *VAR_9,
                   int16_t VAR_10,
                   ILBCContext *VAR_11)
{
    int16_t VAR_12, VAR_13;
    int32_t VAR_14, VAR_15, VAR_16, VAR_17 = 0;
    int32_t VAR_18, VAR_19, VAR_20;
    int16_t VAR_21, VAR_22, VAR_23;
    int16_t VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    int16_t VAR_29, VAR_30, VAR_31, VAR_32;
    int16_t VAR_33;
    int16_t VAR_34;
    int32_t VAR_35, VAR_36;
    int16_t VAR_37;
    int16_t VAR_38;
    int16_t VAR_39;
    int16_t VAR_40, VAR_41;
    int16_t VAR_42;
    int32_t VAR_43;
    int16_t VAR_44;
    int16_t VAR_45;
    int16_t VAR_46;
    int VAR_47;
    int16_t VAR_48[VAR_0];


    if (VAR_7 == 1) {

        VAR_11->consPLICount += 1;




        if (VAR_11->prevPLI != 1) {



            VAR_21 = FUNC_8(VAR_11->prevResidual, VAR_11->block_samples);
            VAR_33 = (FUNC_7(VAR_21) << 1) - 25;
            if (VAR_33 < 0) {
                VAR_33 = 0;
            }



            VAR_11->prevScale = VAR_33;



            VAR_25 = VAR_10 - 3;


            VAR_34 = FUNC_1(60, VAR_11->block_samples - (VAR_10 + 3));

            FUNC_5(&VAR_14, &VAR_15, VAR_11->prevResidual, VAR_25, VAR_11->block_samples, VAR_34, VAR_33);


            VAR_32 = FUNC_7(FUNC_0(VAR_14)) - 15;
            VAR_22 = (int16_t) FUNC_3(FUNC_4(VAR_14, -VAR_32), FUNC_4(VAR_14, -VAR_32), 15);

            for (VAR_24 = VAR_10 - 2; VAR_24 <= VAR_10 + 3; VAR_24++) {
                FUNC_5(&VAR_16, &VAR_17, VAR_11->prevResidual, VAR_24, VAR_11->block_samples, VAR_34, VAR_33);




                VAR_29 = FUNC_7(FUNC_0(VAR_16)) - 15;
                VAR_23 = (int16_t) FUNC_3(FUNC_4(VAR_16, -VAR_29), FUNC_4(VAR_16, -VAR_29), 15);

                VAR_30 = FUNC_7(VAR_15) - 15;
                VAR_18 = FUNC_2(FUNC_4(VAR_15, -VAR_30), VAR_23);

                VAR_31 = FUNC_7(VAR_17) - 15;
                VAR_19 = FUNC_2(FUNC_4(VAR_17, -VAR_31), VAR_22);



                if (((VAR_32 << 1) + VAR_31) > ((VAR_29 << 1) + VAR_30)) {
                    VAR_26 = FUNC_1(31, (VAR_32 << 1) + VAR_31 - (VAR_29 << 1) - VAR_30);
                    VAR_27 = 0;
                } else {
                    VAR_26 = 0;
                    VAR_27 = FUNC_1(31, (VAR_29 << 1) + VAR_30 - (VAR_32 << 1) - VAR_31);
                }

                if ((VAR_18 >> VAR_26) > (VAR_19 >> VAR_27)) {

                    VAR_25 = VAR_24;
                    VAR_22 = VAR_23;
                    VAR_14 = VAR_16;
                    VAR_32 = VAR_29;
                    VAR_15 = VAR_17;
                }
            }
            VAR_36 = FUNC_11(&VAR_11->prevResidual[VAR_11->block_samples - VAR_34], &VAR_11->prevResidual[VAR_11->block_samples - VAR_34], VAR_34, VAR_33);

            if ((VAR_36 > 0) && (VAR_17 > 0)) {



                VAR_40 = FUNC_10(VAR_36) - 16;
                VAR_26 = FUNC_4(VAR_36, VAR_40);

                VAR_41 = FUNC_10(VAR_15) - 16;
                VAR_27 = FUNC_4(VAR_15, VAR_41);
                VAR_44 = FUNC_3(VAR_26, VAR_27, 16);




                VAR_42 = VAR_40 + VAR_41 - 1;
                VAR_26 = FUNC_4(VAR_14, (VAR_42 >> 1));
                VAR_27 = FUNC_4(VAR_14, VAR_42 - (VAR_42 >> 1));

                VAR_43 = FUNC_2(VAR_26, VAR_27);
                VAR_39 = FUNC_6(VAR_43, VAR_44);
            } else {
                VAR_39 = 0;
            }
        } else {

            VAR_25 = VAR_11->prevLag;
            VAR_39 = VAR_11->per_square;
        }




        VAR_37 = 32767;

        if (VAR_11->consPLICount * VAR_11->block_samples > 320) {
            VAR_37 = 29491;
        } else if (VAR_11->consPLICount * VAR_11->block_samples > 640) {
            VAR_37 = 22938;
        } else if (VAR_11->consPLICount * VAR_11->block_samples > 960) {
            VAR_37 = 16384;
        } else if (VAR_11->consPLICount * VAR_11->block_samples > 1280) {
            VAR_37 = 0;
        }







        if (VAR_39 > 7868) {
            VAR_45 = 32767;
        } else if (VAR_39 > 839) {

            VAR_47 = 5;
            while ((VAR_39 < VAR_2[VAR_47]) && (VAR_47 > 0)) {
                VAR_47--;
            }

            VAR_35 = VAR_4[VAR_47] + FUNC_3(VAR_3[VAR_47], (VAR_39 - VAR_2[VAR_47]), 11);

            VAR_45 = FUNC_1(VAR_35, 32767);

        } else {
            VAR_45 = 0;
        }


        VAR_46 = VAR_25;
        if (VAR_25 < 80) {
            VAR_46 = 2 * VAR_25;
        }


        VAR_20 = 0;

        for (VAR_12 = 0; VAR_12 < VAR_11->block_samples; VAR_12++) {

            VAR_11->seed = FUNC_2(VAR_11->seed, 31821) + 13849;
            VAR_28 = 53 + (VAR_11->seed & 63);

            VAR_13 = VAR_12 - VAR_28;

            if (VAR_13 < 0) {
                VAR_48[VAR_12] = VAR_11->prevResidual[VAR_11->block_samples + VAR_13];
            } else {
                VAR_48[VAR_12] = VAR_11->prevResidual[VAR_13];
            }


            VAR_13 = VAR_12 - VAR_46;

            if (VAR_13 < 0) {
                VAR_5[VAR_12] = VAR_11->prevResidual[VAR_11->block_samples + VAR_13];
            } else {
                VAR_5[VAR_12] = VAR_5[VAR_13];
            }


            if (VAR_12 < 80) {
                VAR_38 = VAR_37;
            } else if (VAR_12 < 160) {
                VAR_38 = FUNC_3(31130, VAR_37, 15);
            } else {
                VAR_38 = FUNC_3(29491, VAR_37, 15);
            }


            VAR_5[VAR_12] = FUNC_3(VAR_38, (VAR_45 * VAR_5[VAR_12] + (32767 - VAR_45) * VAR_48[VAR_12] + 16384) >> 15, 15);



            VAR_20 += FUNC_3(VAR_5[VAR_12], VAR_5[VAR_12], (VAR_11->prevScale + 1));

        }


        if (VAR_20 < FUNC_4(VAR_11->block_samples * 900, -VAR_11->prevScale - 1)) {
            VAR_20 = 0;
            for (VAR_12 = 0; VAR_12 < VAR_11->block_samples; VAR_12++) {
                VAR_5[VAR_12] = VAR_48[VAR_12];
            }
        }


        FUNC_9(VAR_6, (*VAR_11).prev_lpc, (VAR_1 + 1) * 2);


        VAR_11->prevLag = VAR_25;
        VAR_11->per_square = VAR_39;
    } else {
        FUNC_9(VAR_5, VAR_8, VAR_11->block_samples * 2);
        FUNC_9(VAR_6, VAR_9, (VAR_1 + 1) * 2);
        VAR_11->consPLICount = 0;
    }


    VAR_11->prevPLI = VAR_7;
    FUNC_9(VAR_11->prev_lpc, VAR_6, (VAR_1 + 1) * 2);
    FUNC_9(VAR_11->prevResidual, VAR_5, VAR_11->block_samples * 2);

    return;
}
