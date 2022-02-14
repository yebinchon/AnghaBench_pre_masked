
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tilted_lpcs ;
typedef int synth_pf ;
typedef int lpcs ;
struct TYPE_8__ {int (* rdft_calc ) (TYPE_3__*,float*) ;} ;
struct TYPE_9__ {int (* rdft_calc ) (TYPE_4__*,float*) ;} ;
struct TYPE_7__ {float* tilted_lpcs_pf; float* denoise_coeffs_pf; int lsps; int denoise_filter_cache_size; float* denoise_filter_cache; TYPE_3__ irdft; TYPE_4__ rdft; } ;
typedef TYPE_1__ WMAVoiceContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,float*,int,float*,int) ;
 int FUNC_2 (float*,double,float*,int) ;
 int FUNC_3 (float*,float const*,int) ;
 int FUNC_4 (float*,float*,int) ;
 int FUNC_5 (float*,int ,int) ;
 int FUNC_6 (TYPE_4__*,float*) ;
 int FUNC_7 (TYPE_4__*,float*) ;
 int FUNC_8 (TYPE_3__*,float*) ;
 double FUNC_9 (float const*,int) ;

__attribute__((used)) static void FUNC_10(WMAVoiceContext *VAR_1, int VAR_2,
                           float *VAR_3, int VAR_4,
                           const float *VAR_5)
{
    int VAR_6, VAR_7, VAR_8;

    if (VAR_2 != VAR_0) {
        float *VAR_9 = VAR_1->tilted_lpcs_pf,
              *VAR_10 = VAR_1->denoise_coeffs_pf, VAR_11 = 0;

        VAR_9[0] = 1.0;
        FUNC_3(&VAR_9[1], VAR_5, sizeof(VAR_5[0]) * VAR_1->lsps);
        FUNC_5(&VAR_9[VAR_1->lsps + 1], 0,
               sizeof(VAR_9[0]) * (128 - VAR_1->lsps - 1));
        FUNC_2(&VAR_11, 0.7 * FUNC_9(VAR_5, VAR_1->lsps),
                             VAR_9, VAR_1->lsps + 2);





        VAR_6 = FUNC_0(127 - VAR_4, VAR_4 - 1);
        FUNC_1(VAR_1, VAR_9, VAR_2, VAR_10, VAR_6);



        FUNC_5(&VAR_3[VAR_4], 0, sizeof(VAR_3[0]) * (128 - VAR_4));
        VAR_1->rdft.rdft_calc(&VAR_1->rdft, VAR_3);
        VAR_1->rdft.rdft_calc(&VAR_1->rdft, VAR_10);
        VAR_3[0] *= VAR_10[0];
        VAR_3[1] *= VAR_10[1];
        for (VAR_8 = 1; VAR_8 < 64; VAR_8++) {
            float VAR_12 = VAR_3[VAR_8 * 2], VAR_13 = VAR_3[VAR_8 * 2 + 1];
            VAR_3[VAR_8 * 2] = VAR_12 * VAR_10[VAR_8 * 2] - VAR_13 * VAR_10[VAR_8 * 2 + 1];
            VAR_3[VAR_8 * 2 + 1] = VAR_13 * VAR_10[VAR_8 * 2] + VAR_12 * VAR_10[VAR_8 * 2 + 1];
        }
        VAR_1->irdft.rdft_calc(&VAR_1->irdft, VAR_3);
    }


    if (VAR_1->denoise_filter_cache_size) {
        VAR_7 = FUNC_0(VAR_1->denoise_filter_cache_size, VAR_4);
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
            VAR_3[VAR_8] += VAR_1->denoise_filter_cache[VAR_8];
        VAR_1->denoise_filter_cache_size -= VAR_7;
        FUNC_4(VAR_1->denoise_filter_cache, &VAR_1->denoise_filter_cache[VAR_4],
                sizeof(VAR_1->denoise_filter_cache[0]) * VAR_1->denoise_filter_cache_size);
    }


    if (VAR_2 != VAR_0) {
        VAR_7 = FUNC_0(VAR_6, VAR_1->denoise_filter_cache_size);
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
            VAR_1->denoise_filter_cache[VAR_8] += VAR_3[VAR_4 + VAR_8];
        if (VAR_7 < VAR_6) {
            FUNC_3(&VAR_1->denoise_filter_cache[VAR_7], &VAR_3[VAR_4 + VAR_7],
                   sizeof(VAR_1->denoise_filter_cache[0]) * (VAR_6 - VAR_7));
            VAR_1->denoise_filter_cache_size = VAR_6;
        }
    }
}
