
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum Mode { ____Placeholder_Mode } Mode ;
struct TYPE_6__ {int (* acelp_interpolatef ) (scalar_t__,scalar_t__,int ,int,int,int,int) ;} ;
struct TYPE_8__ {int cur_frame_mode; int pitch_lag_int; scalar_t__ excitation; int pitch_vector; TYPE_1__ acelpf_ctx; } ;
struct TYPE_7__ {int p_lag; } ;
typedef TYPE_2__ AMRNBSubframe ;
typedef TYPE_3__ AMRContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int*,int ,int,int const) ;
 int VAR_6 ;
 int FUNC_1 (int*,int*,int ,int,int const,int,int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_4(AMRContext *VAR_7,
                                const AMRNBSubframe *VAR_8,
                                const int VAR_9)
{
    int VAR_10, VAR_11;
    enum Mode VAR_12 = VAR_7->cur_frame_mode;

    if (VAR_7->cur_frame_mode == VAR_1) {
        FUNC_0(&VAR_10, &VAR_11,
                             VAR_8->p_lag, VAR_7->pitch_lag_int,
                             VAR_9);
    } else {
        FUNC_1(&VAR_10, &VAR_11,
                            VAR_8->p_lag,
                            VAR_7->pitch_lag_int, VAR_9,
                            VAR_12 != VAR_2 && VAR_12 != VAR_3,
                            VAR_12 <= VAR_4 ? 4 : (VAR_12 == VAR_5 ? 5 : 6));
        VAR_11 *= 2;
    }

    VAR_7->pitch_lag_int = VAR_10;

    VAR_10 += VAR_11 > 0;



    VAR_7->acelpf_ctx.acelp_interpolatef(VAR_7->excitation,
                          VAR_7->excitation + 1 - VAR_10,
                          VAR_6, 6,
                          VAR_11 + 6 - 6*(VAR_11 > 0),
                          10, VAR_0);

    FUNC_2(VAR_7->pitch_vector, VAR_7->excitation, VAR_0 * sizeof(float));
}
