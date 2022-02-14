
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum Mode { ____Placeholder_Mode } Mode ;
struct TYPE_6__ {int (* acelp_interpolatef ) (float*,float*,int ,int,int,int ,int) ;} ;
struct TYPE_8__ {float* excitation; int fr_cur_mode; int pitch_lag_int; float* pitch_vector; TYPE_1__ acelpf_ctx; int base_pitch_lag; } ;
struct TYPE_7__ {scalar_t__ ltp; int adap; } ;
typedef TYPE_2__ AMRWBSubFrame ;
typedef TYPE_3__ AMRWBContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int*,int ,int *,int const) ;
 int FUNC_1 (int*,int*,int ,int *,int const,int) ;
 int FUNC_2 (float*,float*,int) ;
 int FUNC_3 (float*,float*,int ,int,int,int ,int) ;

__attribute__((used)) static void FUNC_4(AMRWBContext *VAR_4,
                                const AMRWBSubFrame *VAR_5,
                                const int VAR_6)
{
    int VAR_7, VAR_8;
    int VAR_9;
    float *VAR_10 = VAR_4->excitation;
    enum Mode VAR_11 = VAR_4->fr_cur_mode;

    if (VAR_11 <= VAR_2) {
        FUNC_1(&VAR_7, &VAR_8, VAR_5->adap,
                              &VAR_4->base_pitch_lag, VAR_6, VAR_11);
    } else
        FUNC_0(&VAR_7, &VAR_8, VAR_5->adap,
                              &VAR_4->base_pitch_lag, VAR_6);

    VAR_4->pitch_lag_int = VAR_7;
    VAR_7 += VAR_8 > 0;



    VAR_4->acelpf_ctx.acelp_interpolatef(VAR_10,
                          VAR_10 + 1 - VAR_7,
                          VAR_3, 4,
                          VAR_8 + (VAR_8 > 0 ? 0 : 4),
                          VAR_1, VAR_0 + 1);



    if (VAR_5->ltp) {
        FUNC_2(VAR_4->pitch_vector, VAR_10, VAR_0 * sizeof(float));
    } else {
        for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
            VAR_4->pitch_vector[VAR_9] = 0.18 * VAR_10[VAR_9 - 1] + 0.64 * VAR_10[VAR_9] +
                                   0.18 * VAR_10[VAR_9 + 1];
        FUNC_2(VAR_10, VAR_4->pitch_vector, VAR_0 * sizeof(float));
    }
}
