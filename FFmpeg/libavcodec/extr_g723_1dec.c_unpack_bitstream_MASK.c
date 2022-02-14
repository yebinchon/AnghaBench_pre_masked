
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int* lsp_index; scalar_t__ cur_rate; int* pitch_lag; TYPE_1__* subframe; int cur_frame_type; } ;
struct TYPE_4__ {int amp_index; int ad_cb_lag; int dirac_train; int ad_cb_gain; int pulse_pos; int pulse_sign; void* grid_index; } ;
typedef int GetBitContext ;
typedef TYPE_2__ G723_1_ChannelContext ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(G723_1_ChannelContext *VAR_9, const uint8_t *VAR_10,
                            int VAR_11)
{
    GetBitContext VAR_12;
    int VAR_13;
    int VAR_14, VAR_15, VAR_16;
    int VAR_17;

    VAR_17 = FUNC_3(&VAR_12, VAR_10, VAR_11);
    if (VAR_17 < 0)
        return VAR_17;


    VAR_15 = FUNC_1(&VAR_12, 2);

    if (VAR_15 == 3) {
        VAR_9->cur_frame_type = VAR_8;
        return 0;
    }


    VAR_9->lsp_index[2] = FUNC_1(&VAR_12, 8);
    VAR_9->lsp_index[1] = FUNC_1(&VAR_12, 8);
    VAR_9->lsp_index[0] = FUNC_1(&VAR_12, 8);

    if (VAR_15 == 2) {
        VAR_9->cur_frame_type = VAR_5;
        VAR_9->subframe[0].amp_index = FUNC_1(&VAR_12, 6);
        return 0;
    }


    VAR_9->cur_rate = VAR_15 ? VAR_3 : VAR_4;
    VAR_9->cur_frame_type = VAR_0;

    VAR_9->pitch_lag[0] = FUNC_1(&VAR_12, 7);
    if (VAR_9->pitch_lag[0] > 123)
        return -1;
    VAR_9->pitch_lag[0] += VAR_2;
    VAR_9->subframe[1].ad_cb_lag = FUNC_1(&VAR_12, 2);

    VAR_9->pitch_lag[1] = FUNC_1(&VAR_12, 7);
    if (VAR_9->pitch_lag[1] > 123)
        return -1;
    VAR_9->pitch_lag[1] += VAR_2;
    VAR_9->subframe[3].ad_cb_lag = FUNC_1(&VAR_12, 2);
    VAR_9->subframe[0].ad_cb_lag = 1;
    VAR_9->subframe[2].ad_cb_lag = 1;

    for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {

        VAR_14 = FUNC_1(&VAR_12, 12);
        VAR_13 = 170;
        VAR_9->subframe[VAR_16].dirac_train = 0;
        if (VAR_9->cur_rate == VAR_4 && VAR_9->pitch_lag[VAR_16 >> 1] < VAR_7 - 2) {
            VAR_9->subframe[VAR_16].dirac_train = VAR_14 >> 11;
            VAR_14 &= 0x7FF;
            VAR_13 = 85;
        }
        VAR_9->subframe[VAR_16].ad_cb_gain = FUNC_0(VAR_14, VAR_1);
        if (VAR_9->subframe[VAR_16].ad_cb_gain < VAR_13) {
            VAR_9->subframe[VAR_16].amp_index = VAR_14 - VAR_9->subframe[VAR_16].ad_cb_gain *
                                       VAR_1;
        } else {
            return -1;
        }
    }

    VAR_9->subframe[0].grid_index = FUNC_2(&VAR_12);
    VAR_9->subframe[1].grid_index = FUNC_2(&VAR_12);
    VAR_9->subframe[2].grid_index = FUNC_2(&VAR_12);
    VAR_9->subframe[3].grid_index = FUNC_2(&VAR_12);

    if (VAR_9->cur_rate == VAR_4) {
        FUNC_4(&VAR_12);


        VAR_14 = FUNC_1(&VAR_12, 13);
        VAR_9->subframe[0].pulse_pos = VAR_14 / 810;

        VAR_14 -= VAR_9->subframe[0].pulse_pos * 810;
        VAR_9->subframe[1].pulse_pos = FUNC_0(VAR_14, 90);

        VAR_14 -= VAR_9->subframe[1].pulse_pos * 90;
        VAR_9->subframe[2].pulse_pos = FUNC_0(VAR_14, 9);
        VAR_9->subframe[3].pulse_pos = VAR_14 - VAR_9->subframe[2].pulse_pos * 9;

        VAR_9->subframe[0].pulse_pos = (VAR_9->subframe[0].pulse_pos << 16) +
                                   FUNC_1(&VAR_12, 16);
        VAR_9->subframe[1].pulse_pos = (VAR_9->subframe[1].pulse_pos << 14) +
                                   FUNC_1(&VAR_12, 14);
        VAR_9->subframe[2].pulse_pos = (VAR_9->subframe[2].pulse_pos << 16) +
                                   FUNC_1(&VAR_12, 16);
        VAR_9->subframe[3].pulse_pos = (VAR_9->subframe[3].pulse_pos << 14) +
                                   FUNC_1(&VAR_12, 14);

        VAR_9->subframe[0].pulse_sign = FUNC_1(&VAR_12, 6);
        VAR_9->subframe[1].pulse_sign = FUNC_1(&VAR_12, 5);
        VAR_9->subframe[2].pulse_sign = FUNC_1(&VAR_12, 6);
        VAR_9->subframe[3].pulse_sign = FUNC_1(&VAR_12, 5);
    } else {
        VAR_9->subframe[0].pulse_pos = FUNC_1(&VAR_12, 12);
        VAR_9->subframe[1].pulse_pos = FUNC_1(&VAR_12, 12);
        VAR_9->subframe[2].pulse_pos = FUNC_1(&VAR_12, 12);
        VAR_9->subframe[3].pulse_pos = FUNC_1(&VAR_12, 12);

        VAR_9->subframe[0].pulse_sign = FUNC_1(&VAR_12, 4);
        VAR_9->subframe[1].pulse_sign = FUNC_1(&VAR_12, 4);
        VAR_9->subframe[2].pulse_sign = FUNC_1(&VAR_12, 4);
        VAR_9->subframe[3].pulse_sign = FUNC_1(&VAR_12, 4);
    }

    return 0;
}
