
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ huff_offset; scalar_t__ codebook; scalar_t__ huff_lsbs; } ;
struct TYPE_13__ {scalar_t__* shift; } ;
struct TYPE_15__ {scalar_t__ param_presence_flags; scalar_t__ blocksize; scalar_t__* quant_step_size; TYPE_2__ matrix_params; } ;
struct TYPE_14__ {TYPE_5__* cur_channel_params; TYPE_5__* prev_channel_params; TYPE_1__* cur_restart_header; TYPE_4__* cur_decoding_params; TYPE_4__* prev_decoding_params; } ;
struct TYPE_12__ {unsigned int max_matrix_channel; unsigned int max_channel; unsigned int min_channel; } ;
typedef TYPE_1__ RestartHeader ;
typedef TYPE_2__ MatrixParams ;
typedef TYPE_3__ MLPEncodeContext ;
typedef TYPE_4__ DecodingParams ;
typedef TYPE_5__ ChannelParams ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(MLPEncodeContext *VAR_10)
{
    DecodingParams *VAR_11 = VAR_10->prev_decoding_params;
    DecodingParams *VAR_12 = VAR_10->cur_decoding_params;
    MatrixParams *VAR_13 = &VAR_11->matrix_params;
    MatrixParams *VAR_14 = &VAR_12->matrix_params;
    RestartHeader *VAR_15 = VAR_10->cur_restart_header;
    unsigned int VAR_16;
    int VAR_17 = 0;

    if (VAR_11->param_presence_flags != VAR_12->param_presence_flags)
        VAR_17 |= VAR_8;

    if (VAR_11->blocksize != VAR_12->blocksize)
        VAR_17 |= VAR_2;

    if (FUNC_1(VAR_10, VAR_13, VAR_14))
        VAR_17 |= VAR_6;

    for (VAR_16 = 0; VAR_16 <= VAR_15->max_matrix_channel; VAR_16++)
        if (VAR_13->shift[VAR_16] != VAR_14->shift[VAR_16]) {
            VAR_17 |= VAR_7;
            break;
        }

    for (VAR_16 = 0; VAR_16 <= VAR_15->max_channel; VAR_16++)
        if (VAR_11->quant_step_size[VAR_16] != VAR_12->quant_step_size[VAR_16]) {
            VAR_17 |= VAR_9;
            break;
        }

    for (VAR_16 = VAR_15->min_channel; VAR_16 <= VAR_15->max_channel; VAR_16++) {
        ChannelParams *VAR_18 = &VAR_10->prev_channel_params[VAR_16];
        ChannelParams *VAR_19 = &VAR_10->cur_channel_params[VAR_16];

        if (!(VAR_17 & VAR_3) &&
            FUNC_0(VAR_18, VAR_19, VAR_0))
            VAR_17 |= VAR_3;

        if (!(VAR_17 & VAR_5) &&
            FUNC_0(VAR_18, VAR_19, VAR_1))
            VAR_17 |= VAR_5;

        if (VAR_18->huff_offset != VAR_19->huff_offset)
            VAR_17 |= VAR_4;

        if (VAR_18->codebook != VAR_19->codebook ||
            VAR_18->huff_lsbs != VAR_19->huff_lsbs )
            VAR_17 |= 0x1;
    }

    return VAR_17;
}
