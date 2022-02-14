
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* celp_lp_zero_synthesis_filterf ) (float*,float*,float*,int,int) ;int (* celp_lp_synthesis_filterf ) (float*,float*,float*,int,int) ;} ;
struct TYPE_6__ {float (* dot_productf ) (float*,float*,int) ;} ;
struct TYPE_8__ {float* samples_in; scalar_t__ cur_frame_mode; float* postfilter_mem; int postfilter_agc; int tilt_mem; TYPE_2__ celpf_ctx; TYPE_1__ celpm_ctx; } ;
typedef TYPE_3__ AMRContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (float*,float*,float,int,int ,int *) ;
 float* VAR_5 ;
 float* VAR_6 ;
 float* VAR_7 ;
 int FUNC_1 (int *,int ,float*,int) ;
 int FUNC_2 (float*,float*,int) ;
 float FUNC_3 (float*,float*,int) ;
 int FUNC_4 (float*,float*,float*,int,int) ;
 int FUNC_5 (float*,float*,float*,int,int) ;
 int FUNC_6 (TYPE_3__*,float*,float*) ;

__attribute__((used)) static void FUNC_7(AMRContext *VAR_8, float *VAR_9, float *VAR_10)
{
    int VAR_11;
    float *VAR_12 = VAR_8->samples_in + VAR_2;

    float VAR_13 = VAR_8->celpm_ctx.dot_productf(VAR_12, VAR_12,
                                                           VAR_1);

    float VAR_14[VAR_1 + VAR_2];
    const float *VAR_15, *VAR_16;
    float VAR_17[VAR_2], VAR_18[VAR_2];

    if (VAR_8->cur_frame_mode == VAR_4 || VAR_8->cur_frame_mode == VAR_3) {
        VAR_15 = VAR_6;
        VAR_16 = VAR_7;
    } else {
        VAR_15 = VAR_5;
        VAR_16 = VAR_6;
    }

    for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
         VAR_17[VAR_11] = VAR_9[VAR_11] * VAR_15[VAR_11];
         VAR_18[VAR_11] = VAR_9[VAR_11] * VAR_16[VAR_11];
    }

    FUNC_2(VAR_14, VAR_8->postfilter_mem, sizeof(float) * VAR_2);
    VAR_8->celpf_ctx.celp_lp_synthesis_filterf(VAR_14 + VAR_2, VAR_18, VAR_12,
                                 VAR_1, VAR_2);
    FUNC_2(VAR_8->postfilter_mem, VAR_14 + VAR_1,
           sizeof(float) * VAR_2);

    VAR_8->celpf_ctx.celp_lp_zero_synthesis_filterf(VAR_10, VAR_17,
                                      VAR_14 + VAR_2,
                                      VAR_1, VAR_2);

    FUNC_1(&VAR_8->tilt_mem, FUNC_6(VAR_8, VAR_17, VAR_18), VAR_10,
                         VAR_1);

    FUNC_0(VAR_10, VAR_10, VAR_13, VAR_1,
                             VAR_0, &VAR_8->postfilter_agc);
}
