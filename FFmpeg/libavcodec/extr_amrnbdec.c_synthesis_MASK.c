
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_8__ {int (* celp_lp_synthesis_filterf ) (float*,float*,float*,int,int ) ;} ;
struct TYPE_7__ {float (* dot_productf ) (float*,float*,int) ;} ;
struct TYPE_6__ {int (* weighted_vector_sumf ) (float*,double*,float const*,double,float,int) ;} ;
struct TYPE_9__ {double* pitch_vector; double* pitch_gain; scalar_t__ cur_frame_mode; TYPE_3__ celpf_ctx; TYPE_2__ celpm_ctx; TYPE_1__ acelpv_ctx; } ;
typedef TYPE_4__ AMRContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (double,double) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 double VAR_4 ;
 scalar_t__ FUNC_1 (float) ;
 int FUNC_2 (float*,float*,float,int) ;
 int FUNC_3 (float*,double*,float const*,double,float,int) ;
 float FUNC_4 (float*,float*,int) ;
 int FUNC_5 (float*,float*,float*,int,int ) ;

__attribute__((used)) static int FUNC_6(AMRContext *VAR_5, float *VAR_6,
                     float VAR_7, const float *VAR_8,
                     float *VAR_9, uint8_t VAR_10)
{
    int VAR_11;
    float VAR_12[VAR_1];



    if (VAR_10)
        for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
            VAR_5->pitch_vector[VAR_11] *= 0.25;

    VAR_5->acelpv_ctx.weighted_vector_sumf(VAR_12, VAR_5->pitch_vector, VAR_8,
                            VAR_5->pitch_gain[4], VAR_7, VAR_1);


    if (VAR_5->pitch_gain[4] > 0.5 && !VAR_10) {
        float VAR_13 = VAR_5->celpm_ctx.dot_productf(VAR_12, VAR_12,
                                                    VAR_1);
        float VAR_14 =
            VAR_5->pitch_gain[4] *
            (VAR_5->cur_frame_mode == VAR_3 ?
                0.25 * FUNC_0(VAR_5->pitch_gain[4], 1.0) :
                0.5 * FUNC_0(VAR_5->pitch_gain[4], VAR_4));

        for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
            VAR_12[VAR_11] += VAR_14 * VAR_5->pitch_vector[VAR_11];

        FUNC_2(VAR_12, VAR_12, VAR_13,
                                                VAR_1);
    }

    VAR_5->celpf_ctx.celp_lp_synthesis_filterf(VAR_9, VAR_6, VAR_12,
                                 VAR_1,
                                 VAR_2);


    for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
        if (FUNC_1(VAR_9[VAR_11]) > VAR_0) {
            return 1;
        }

    return 0;
}
