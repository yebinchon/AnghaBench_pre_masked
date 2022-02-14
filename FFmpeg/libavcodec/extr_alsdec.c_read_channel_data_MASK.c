
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int channels; } ;
struct TYPE_7__ {unsigned int master_channel; scalar_t__ time_diff_index; void* time_diff_sign; void** weighting; void* time_diff_flag; void* stop_flag; } ;
struct TYPE_6__ {TYPE_5__* avctx; scalar_t__ ltp_lag_length; int gb; } ;
typedef int GetBitContext ;
typedef TYPE_1__ ALSDecContext ;
typedef TYPE_2__ ALSChannelData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int,int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_5__*,int ,char*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 void* FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(ALSDecContext *VAR_2, ALSChannelData *VAR_3, int VAR_4)
{
    GetBitContext *VAR_5 = &VAR_2->gb;
    ALSChannelData *VAR_6 = VAR_3;
    unsigned int VAR_7 = VAR_2->avctx->channels;
    int VAR_8 = 0;

    while (VAR_8 < VAR_7 && !(VAR_6->stop_flag = FUNC_5(VAR_5))) {
        VAR_6->master_channel = FUNC_6(VAR_5, FUNC_2(VAR_7));

        if (VAR_6->master_channel >= VAR_7) {
            FUNC_3(VAR_2->avctx, VAR_1, "Invalid master channel.\n");
            return VAR_0;
        }

        if (VAR_6->master_channel != VAR_4) {
            VAR_6->time_diff_flag = FUNC_5(VAR_5);
            VAR_6->weighting[0] = FUNC_1(VAR_5, 1, 16);
            VAR_6->weighting[1] = FUNC_1(VAR_5, 2, 14);
            VAR_6->weighting[2] = FUNC_1(VAR_5, 1, 16);

            if (VAR_6->time_diff_flag) {
                VAR_6->weighting[3] = FUNC_1(VAR_5, 1, 16);
                VAR_6->weighting[4] = FUNC_1(VAR_5, 1, 16);
                VAR_6->weighting[5] = FUNC_1(VAR_5, 1, 16);

                VAR_6->time_diff_sign = FUNC_5(VAR_5);
                VAR_6->time_diff_index = FUNC_4(VAR_5, VAR_2->ltp_lag_length - 3) + 3;
            }
        }

        VAR_6++;
        VAR_8++;
    }

    if (VAR_8 == VAR_7) {
        FUNC_3(VAR_2->avctx, VAR_1, "Damaged channel data.\n");
        return VAR_0;
    }

    FUNC_0(VAR_5);
    return 0;
}
