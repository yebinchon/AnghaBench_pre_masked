
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_21__ {scalar_t__ min; scalar_t__ max; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_20__ {TYPE_1__* filter_params; } ;
struct TYPE_19__ {int blocksize; scalar_t__* quant_step_size; } ;
struct TYPE_18__ {TYPE_6__** cur_best_offset; int num_channels; scalar_t__* sample_buffer; TYPE_5__* cur_channel_params; TYPE_2__* cur_restart_header; TYPE_4__* cur_decoding_params; } ;
struct TYPE_17__ {unsigned int max_channel; } ;
struct TYPE_16__ {int order; } ;
typedef TYPE_2__ RestartHeader ;
typedef TYPE_3__ MLPEncodeContext ;
typedef TYPE_4__ DecodingParams ;
typedef TYPE_5__ ChannelParams ;
typedef TYPE_6__ BestOffset ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (TYPE_3__*,unsigned int,int,scalar_t__,scalar_t__,scalar_t__,TYPE_6__*,int) ;
 int FUNC_2 (TYPE_3__*,unsigned int,int,scalar_t__,scalar_t__,int,TYPE_6__*) ;
 int FUNC_3 (TYPE_3__*,unsigned int,scalar_t__,scalar_t__,TYPE_6__*) ;
 int FUNC_4 (TYPE_3__*,unsigned int,int,scalar_t__,scalar_t__,TYPE_6__*) ;

__attribute__((used)) static void FUNC_5(MLPEncodeContext *VAR_7)
{
    DecodingParams *VAR_8 = VAR_7->cur_decoding_params;
    RestartHeader *VAR_9 = VAR_7->cur_restart_header;
    unsigned int VAR_10;

    for (VAR_10 = 0; VAR_10 <= VAR_9->max_channel; VAR_10++) {
        ChannelParams *VAR_11 = &VAR_7->cur_channel_params[VAR_10];
        int32_t *VAR_12 = VAR_7->sample_buffer + VAR_10;
        int32_t VAR_13 = VAR_3, VAR_14 = VAR_4;
        int VAR_15 = !VAR_11->filter_params[VAR_0].order;
        int VAR_16 = 0;
        int VAR_17 = 0;
        int VAR_18;


        for (VAR_18 = 0; VAR_18 < VAR_8->blocksize; VAR_18++) {
            int32_t VAR_19 = *VAR_12 >> VAR_8->quant_step_size[VAR_10];
            if (VAR_19 < VAR_13)
                VAR_13 = VAR_19;
            if (VAR_19 > VAR_14)
                VAR_14 = VAR_19;
            VAR_16 += VAR_19;
            VAR_12 += VAR_7->num_channels;
        }
        VAR_16 /= VAR_8->blocksize;



        if (VAR_15) {
            FUNC_3(VAR_7, VAR_10, VAR_13, VAR_14, &VAR_7->cur_best_offset[VAR_10][0]);
            VAR_17 = FUNC_0(VAR_16, VAR_2, VAR_1);
        } else {
            FUNC_4(VAR_7, VAR_10, VAR_17, VAR_13, VAR_14, &VAR_7->cur_best_offset[VAR_10][0]);
        }

        for (VAR_18 = 1; VAR_18 < VAR_6; VAR_18++) {
            BestOffset VAR_20 = { 0, VAR_5, 0, 0, 0, };
            int16_t VAR_21;

            FUNC_2(VAR_7, VAR_10, VAR_18 - 1,
                                 VAR_13, VAR_14, VAR_17,
                                 &VAR_20);

            if (VAR_15) {
                VAR_21 = VAR_20.max;

                FUNC_1(VAR_7, VAR_10, VAR_18 - 1, VAR_20.min - 1,
                            VAR_13, VAR_14, &VAR_20, 0);
                FUNC_1(VAR_7, VAR_10, VAR_18 - 1, VAR_21 + 1,
                            VAR_13, VAR_14, &VAR_20, 1);
            }

            VAR_7->cur_best_offset[VAR_10][VAR_18] = VAR_20;
        }
    }
}
