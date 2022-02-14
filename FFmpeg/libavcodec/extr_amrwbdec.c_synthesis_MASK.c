
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* celp_lp_synthesis_filterf ) (float*,float*,float*,int,int ) ;} ;
struct TYPE_7__ {float (* dot_productf ) (float*,float*,int) ;} ;
struct TYPE_6__ {int (* weighted_vector_sumf ) (float*,float*,float const*,double,float,int) ;} ;
struct TYPE_9__ {float* pitch_vector; double* pitch_gain; scalar_t__ fr_cur_mode; TYPE_3__ celpf_ctx; TYPE_2__ celpm_ctx; TYPE_1__ acelpv_ctx; } ;
typedef TYPE_4__ AMRWBContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (float*,float*,float,int) ;
 int FUNC_1 (float*,float*,float const*,double,float,int) ;
 float FUNC_2 (float*,float*,int) ;
 int FUNC_3 (float*,float*,float*,int,int ) ;

__attribute__((used)) static void FUNC_4(AMRWBContext *VAR_3, float *VAR_4, float *VAR_5,
                      float VAR_6, const float *VAR_7,
                      float *VAR_8)
{
    VAR_3->acelpv_ctx.weighted_vector_sumf(VAR_5, VAR_3->pitch_vector, VAR_7,
                            VAR_3->pitch_gain[0], VAR_6, VAR_0);


    if (VAR_3->pitch_gain[0] > 0.5 && VAR_3->fr_cur_mode <= VAR_2) {
        int VAR_9;
        float VAR_10 = VAR_3->celpm_ctx.dot_productf(VAR_5, VAR_5,
                                                    VAR_0);



        float VAR_11 = 0.25 * VAR_3->pitch_gain[0] * VAR_3->pitch_gain[0];

        for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
            VAR_5[VAR_9] += VAR_11 * VAR_3->pitch_vector[VAR_9];

        FUNC_0(VAR_5, VAR_5,
                                                VAR_10, VAR_0);
    }

    VAR_3->celpf_ctx.celp_lp_synthesis_filterf(VAR_8, VAR_4, VAR_5,
                                 VAR_0, VAR_1);
}
