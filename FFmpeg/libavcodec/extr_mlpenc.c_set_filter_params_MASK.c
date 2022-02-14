
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_9__ {int ** coeff; TYPE_2__* filter_params; } ;
struct TYPE_8__ {int order; int shift; } ;
struct TYPE_7__ {int substream_info; unsigned int number_of_samples; int * lpc_sample_buffer; int lpc_ctx; int num_channels; TYPE_3__* cur_channel_params; int * sample_buffer; } ;
typedef TYPE_1__ MLPEncodeContext ;
typedef TYPE_2__ FilterParams ;
typedef TYPE_3__ ChannelParams ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_1 (int *,int *,unsigned int,int ,int const,int,int **,int*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(MLPEncodeContext *VAR_10,
                              unsigned int VAR_11, unsigned int VAR_12,
                              int VAR_13)
{
    ChannelParams *VAR_14 = &VAR_10->cur_channel_params[VAR_11];
    FilterParams *VAR_15 = &VAR_14->filter_params[VAR_12];

    if ((VAR_12 == VAR_2 && VAR_10->substream_info & VAR_9) ||
        VAR_13) {
        VAR_15->order = 0;
    } else if (VAR_12 == VAR_2) {
        VAR_15->order = 0;
    } else if (VAR_12 == VAR_1) {
        const int VAR_16 = (VAR_10->substream_info & VAR_9)
                              ? 4 : VAR_4;
        int32_t *VAR_17 = VAR_10->sample_buffer + VAR_11;
        int32_t VAR_18[VAR_3][VAR_3];
        int32_t *VAR_19 = VAR_10->lpc_sample_buffer;
        int32_t *VAR_20 = VAR_10->cur_channel_params[VAR_11].coeff[VAR_12];
        int VAR_21[VAR_4];
        unsigned int VAR_22;
        int VAR_23;

        for (VAR_22 = 0; VAR_22 < VAR_10->number_of_samples; VAR_22++) {
            *VAR_19++ = *VAR_17;
            VAR_17 += VAR_10->num_channels;
        }

        VAR_23 = FUNC_1(&VAR_10->lpc_ctx, VAR_10->lpc_sample_buffer,
                                  VAR_10->number_of_samples, VAR_6,
                                  VAR_16, 11, VAR_18, VAR_21, VAR_0, 0,
                                  VAR_8, VAR_7,
                                  VAR_5, VAR_7);

        VAR_15->order = VAR_23;
        VAR_15->shift = VAR_21[VAR_23-1];

        for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++)
            VAR_20[VAR_22] = VAR_18[VAR_23-1][VAR_22];

        FUNC_0(VAR_10, VAR_15, VAR_20);
    }
}
