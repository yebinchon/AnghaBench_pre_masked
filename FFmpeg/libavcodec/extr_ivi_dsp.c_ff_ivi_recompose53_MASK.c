
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t ptrdiff_t ;
typedef int int32_t ;
struct TYPE_5__ {int height; int width; TYPE_1__* bands; } ;
struct TYPE_4__ {size_t pitch; short* buf; } ;
typedef TYPE_2__ IVIPlaneDesc ;


 int FUNC_0 (int) ;

void FUNC_1(const IVIPlaneDesc *VAR_0, uint8_t *VAR_1,
                        const ptrdiff_t VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    int32_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    int32_t VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    int32_t VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
    ptrdiff_t VAR_33, VAR_34;
    const short *VAR_35, *VAR_36, *VAR_37, *VAR_38;
    const int VAR_39 = 4;


    VAR_33 = VAR_0->bands[0].pitch;


    VAR_34 = 0;


    VAR_35 = VAR_0->bands[0].buf;
    VAR_36 = VAR_0->bands[1].buf;
    VAR_37 = VAR_0->bands[2].buf;
    VAR_38 = VAR_0->bands[3].buf;

    for (VAR_4 = 0; VAR_4 < VAR_0->height; VAR_4 += 2) {

        if (VAR_4+2 >= VAR_0->height)
            VAR_33= 0;

        if (VAR_39 > 0) {
            VAR_13 = VAR_35[0];
            VAR_14 = VAR_35[VAR_33];
        }

        if (VAR_39 > 1) {
            VAR_15 = VAR_36[VAR_34];
            VAR_16 = VAR_36[0];
            VAR_17 = VAR_15 - VAR_16*6 + VAR_36[VAR_33];
        }

        if (VAR_39 > 2) {
            VAR_19 = VAR_37[0];
            VAR_20 = VAR_19;
            VAR_22 = VAR_37[VAR_33];
            VAR_23 = VAR_22;
        }

        if (VAR_39 > 3) {
            VAR_25 = VAR_38[VAR_34];
            VAR_26 = VAR_25;
            VAR_28 = VAR_38[0];
            VAR_29 = VAR_28;
            VAR_31 = VAR_25 - VAR_28*6 + VAR_38[VAR_33];
            VAR_32 = VAR_31;
        }

        for (VAR_3 = 0, VAR_5 = 0; VAR_3 < VAR_0->width; VAR_3+=2, VAR_5++) {
            if (VAR_3+2 >= VAR_0->width) {
                VAR_35 --;
                VAR_36 --;
                VAR_37 --;
                VAR_38 --;
            }



            VAR_18 = VAR_19;
            VAR_19 = VAR_20;
            VAR_21 = VAR_22;
            VAR_22 = VAR_23;
            VAR_24 = VAR_25;
            VAR_25 = VAR_26;
            VAR_27 = VAR_28;
            VAR_28 = VAR_29;
            VAR_30 = VAR_31;
            VAR_31 = VAR_32;

            VAR_6 = VAR_7 = VAR_8 = VAR_9 = 0;


            if (VAR_39 > 0) {
                VAR_10 = VAR_13;
                VAR_12 = VAR_14;
                VAR_13 = VAR_35[VAR_5+1];
                VAR_14 = VAR_35[VAR_33+VAR_5+1];
                VAR_11 = VAR_10 + VAR_13;

                VAR_6 = VAR_10 * 16;
                VAR_7 = VAR_11 * 8;
                VAR_8 = (VAR_10 + VAR_12) * 8;
                VAR_9 = (VAR_11 + VAR_12 + VAR_14) * 4;
            }


            if (VAR_39 > 1) {
                VAR_10 = VAR_16;
                VAR_11 = VAR_15;
                VAR_16 = VAR_36[VAR_5+1];
                VAR_15 = VAR_36[VAR_34+VAR_5+1];

                VAR_12 = VAR_11 - VAR_10*6 + VAR_17;
                VAR_17 = VAR_15 - VAR_16*6 + VAR_36[VAR_33+VAR_5+1];

                VAR_6 += (VAR_10 + VAR_11) * 8;
                VAR_7 += (VAR_10 + VAR_11 + VAR_15 + VAR_16) * 4;
                VAR_8 += VAR_12 * 4;
                VAR_9 += (VAR_12 + VAR_17) * 2;
            }


            if (VAR_39 > 2) {
                VAR_20 = VAR_37[VAR_5+1];
                VAR_23 = VAR_37[VAR_33+VAR_5+1];

                VAR_10 = VAR_18 + VAR_19;
                VAR_11 = VAR_18 - VAR_19*6 + VAR_20;

                VAR_6 += VAR_10 * 8;
                VAR_7 += VAR_11 * 4;
                VAR_8 += (VAR_10 + VAR_21 + VAR_22) * 4;
                VAR_9 += (VAR_11 + VAR_21 - VAR_22*6 + VAR_23) * 2;
            }


            if (VAR_39 > 3) {
                VAR_29 = VAR_38[VAR_5+1];
                VAR_26 = VAR_38[VAR_34+VAR_5+1];

                VAR_10 = VAR_24 + VAR_27;
                VAR_11 = VAR_25 + VAR_28;
                VAR_12 = VAR_26 + VAR_29;

                VAR_32 = VAR_26 - VAR_29*6 + VAR_38[VAR_33+VAR_5+1];

                VAR_6 += (VAR_10 + VAR_11) * 4;
                VAR_7 += (VAR_10 - VAR_11*6 + VAR_12) * 2;
                VAR_8 += (VAR_30 + VAR_31) * 2;
                VAR_9 += VAR_30 - VAR_31*6 + VAR_32;
            }


            VAR_1[VAR_3] = FUNC_0((VAR_6 >> 6) + 128);
            VAR_1[VAR_3+1] = FUNC_0((VAR_7 >> 6) + 128);
            VAR_1[VAR_2+VAR_3] = FUNC_0((VAR_8 >> 6) + 128);
            VAR_1[VAR_2+VAR_3+1] = FUNC_0((VAR_9 >> 6) + 128);
        }

        VAR_1 += VAR_2 << 1;

        VAR_34 = -VAR_33;

        VAR_35 += VAR_33 + 1;
        VAR_36 += VAR_33 + 1;
        VAR_37 += VAR_33 + 1;
        VAR_38 += VAR_33 + 1;
    }
}
