
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int coeffs ;
struct TYPE_8__ {int (* rdft_calc ) (TYPE_2__*,float*) ;} ;
struct TYPE_9__ {int (* dct_calc ) (TYPE_3__*,float*) ;} ;
struct TYPE_10__ {int (* dct_calc ) (TYPE_4__*,float*) ;} ;
struct TYPE_11__ {int (* rdft_calc ) (TYPE_5__*,float*) ;} ;
struct TYPE_7__ {size_t denoise_strength; float* cos; float* sin; scalar_t__ denoise_tilt_corr; TYPE_2__ irdft; TYPE_3__ dst; TYPE_4__ dct; TYPE_5__ rdft; } ;
typedef TYPE_1__ WMAVoiceContext ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int) ;
 double VAR_1 ;
 double VAR_2 ;
 int FUNC_1 (float,int,int) ;
 int FUNC_2 (float*,float*,int) ;
 int FUNC_3 (float*,double,float*,int) ;
 int FUNC_4 (float,float) ;
 int FUNC_5 (float) ;
 int FUNC_6 (float*,int ,int) ;
 float FUNC_7 (double,int) ;
 double FUNC_8 (int) ;
 int FUNC_9 (TYPE_5__*,float*) ;
 int FUNC_10 (TYPE_4__*,float*) ;
 int FUNC_11 (TYPE_3__*,float*) ;
 int FUNC_12 (TYPE_2__*,float*) ;
 double FUNC_13 (float*,int) ;
 float** VAR_3 ;
 float* VAR_4 ;

__attribute__((used)) static void FUNC_14(WMAVoiceContext *VAR_5, float *VAR_6,
                                int VAR_7, float *VAR_8, int VAR_9)
{
    float VAR_10, VAR_11 = 15.0, VAR_12 = -15.0;
    float VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18, VAR_19;


    VAR_5->rdft.rdft_calc(&VAR_5->rdft, VAR_6);




    do { float VAR_20 = log10f(VAR_6[1] * VAR_6[1]); VAR_10 = VAR_20; VAR_12 = FUNC_0(VAR_12, VAR_20); VAR_11 = FUNC_0(VAR_11, VAR_20); } while (0);
    for (VAR_18 = 1; VAR_18 < 64; VAR_18++)
        do { float VAR_21 = FUNC_0(VAR_6[VAR_18 * 2] * VAR_6[VAR_18 * 2] + VAR_6[VAR_18 * 2 + 1] * VAR_6[VAR_18 * 2 + 1]); VAR_6[VAR_18] = VAR_21; VAR_12 = FUNC_0(VAR_12, VAR_21); VAR_11 = FUNC_0(VAR_11, VAR_21); } while (0);

    do { float VAR_22 = FUNC_0(VAR_6[0] * VAR_6[0]); VAR_6[0] = VAR_22; VAR_12 = FUNC_0(VAR_12, VAR_22); VAR_11 = FUNC_0(VAR_11, VAR_22); } while (0);

    VAR_16 = VAR_12 - VAR_11;
    VAR_6[64] = VAR_10;






    VAR_13 = 64.0 / VAR_16;
    VAR_15 = VAR_16 * (VAR_7 == VAR_0 ? (5.0 / 13.0) :
                                                          (5.0 / 14.7));
    VAR_14 = VAR_15 * (8.0 * VAR_1 / VAR_2);
    for (VAR_18 = 0; VAR_18 <= 64; VAR_18++) {
        float VAR_23;

        VAR_19 = FUNC_0(0, FUNC_5((VAR_12 - VAR_6[VAR_18]) * VAR_13) - 1);
        VAR_23 = VAR_3[VAR_5->denoise_strength][VAR_19];
        VAR_6[VAR_18] = VAR_14 * VAR_23;


        VAR_19 = (VAR_23 * VAR_15 - 0.0295) * 70.570526123;
        if (VAR_19 > 127) {
            VAR_8[VAR_18] = VAR_4[127] *
                        FUNC_7(1.0331663, VAR_19 - 127);
        } else
            VAR_8[VAR_18] = VAR_4[FUNC_0(0, VAR_19)];
    }





    VAR_5->dct.dct_calc(&VAR_5->dct, VAR_6);
    VAR_5->dst.dct_calc(&VAR_5->dst, VAR_6);


    VAR_19 = 255 + FUNC_1(VAR_6[64], -255, 255);
    VAR_8[0] = VAR_8[0] * VAR_5->cos[VAR_19];
    VAR_19 = 255 + FUNC_1(VAR_6[64] - 2 * VAR_6[63], -255, 255);
    VAR_10 = VAR_8[64] * VAR_5->cos[VAR_19];
    for (VAR_18 = 63;; VAR_18--) {
        VAR_19 = 255 + FUNC_1(-VAR_6[64] - 2 * VAR_6[VAR_18 - 1], -255, 255);
        VAR_8[VAR_18 * 2 + 1] = VAR_8[VAR_18] * VAR_5->sin[VAR_19];
        VAR_8[VAR_18 * 2] = VAR_8[VAR_18] * VAR_5->cos[VAR_19];

        if (!--VAR_18) break;

        VAR_19 = 255 + FUNC_1( VAR_6[64] - 2 * VAR_6[VAR_18 - 1], -255, 255);
        VAR_8[VAR_18 * 2 + 1] = VAR_8[VAR_18] * VAR_5->sin[VAR_19];
        VAR_8[VAR_18 * 2] = VAR_8[VAR_18] * VAR_5->cos[VAR_19];
    }
    VAR_8[1] = VAR_10;


    VAR_5->irdft.rdft_calc(&VAR_5->irdft, VAR_8);


    FUNC_6(&VAR_8[VAR_9], 0, sizeof(VAR_8[0]) * (128 - VAR_9));
    if (VAR_5->denoise_tilt_corr) {
        float VAR_24 = 0;

        VAR_8[VAR_9 - 1] = 0;
        FUNC_3(&VAR_24,
                             -1.8 * FUNC_13(VAR_8, VAR_9 - 1),
                             VAR_8, VAR_9);
    }
    VAR_17 = (1.0 / 64.0) * FUNC_8(1 / FUNC_2(VAR_8, VAR_8,
                                                               VAR_9));
    for (VAR_18 = 0; VAR_18 < VAR_9; VAR_18++)
        VAR_8[VAR_18] *= VAR_17;
}
