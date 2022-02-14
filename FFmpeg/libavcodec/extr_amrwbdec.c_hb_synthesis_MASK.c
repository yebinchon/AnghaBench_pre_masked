
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum Mode { ____Placeholder_Mode } Mode ;
struct TYPE_6__ {int (* celp_lp_synthesis_filterf ) (float*,float*,float const*,int ,int) ;} ;
struct TYPE_5__ {int (* weighted_vector_sumf ) (float*,float const*,float const*,scalar_t__,scalar_t__,int) ;} ;
struct TYPE_7__ {int fr_cur_mode; float** lp_coef; TYPE_2__ celpf_ctx; TYPE_1__ acelpv_ctx; } ;
typedef TYPE_3__ AMRWBContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (float*) ;
 int FUNC_1 (double*,float*,int) ;
 int FUNC_2 (double*,float*,int) ;
 scalar_t__* VAR_4 ;
 int FUNC_3 (float*,float*,double,int) ;
 int FUNC_4 (float*,float const*,float const*,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (float*,float*,float const*,int ,int) ;

__attribute__((used)) static void FUNC_6(AMRWBContext *VAR_5, int VAR_6, float *VAR_7,
                         const float *VAR_8, const float *VAR_9, const float *VAR_10)
{
    float VAR_11[VAR_2];
    enum Mode VAR_12 = VAR_5->fr_cur_mode;

    if (VAR_12 == VAR_3) {
        float VAR_13[VAR_2];
        double VAR_14[VAR_2];

        VAR_5->acelpv_ctx.weighted_vector_sumf(VAR_13, VAR_10, VAR_9, VAR_4[VAR_6],
                                1.0 - VAR_4[VAR_6], VAR_1);

        FUNC_0(VAR_13);

        VAR_13[VAR_2 - 1] *= 2.0;
        FUNC_1(VAR_14, VAR_13, VAR_2);
        FUNC_2(VAR_14, VAR_11, VAR_2);

        FUNC_3(VAR_11, VAR_11, 0.9, VAR_2);
    } else {
        FUNC_3(VAR_11, VAR_5->lp_coef[VAR_6], 0.6, VAR_1);
    }

    VAR_5->celpf_ctx.celp_lp_synthesis_filterf(VAR_7, VAR_11, VAR_8, VAR_0,
                                 (VAR_12 == VAR_3) ? VAR_2 : VAR_1);
}
