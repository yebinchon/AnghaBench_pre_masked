
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int codebook; int huff_lsbs; int huff_offset; } ;
struct TYPE_10__ {int * shift; } ;
struct TYPE_12__ {int param_presence_flags; int blocksize; int* quant_step_size; TYPE_2__ matrix_params; } ;
struct TYPE_11__ {TYPE_5__* cur_channel_params; TYPE_1__* cur_restart_header; TYPE_4__* cur_decoding_params; } ;
struct TYPE_9__ {unsigned int max_matrix_channel; unsigned int max_channel; unsigned int min_channel; } ;
typedef TYPE_1__ RestartHeader ;
typedef int PutBitContext ;
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
 int VAR_10 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (TYPE_3__*,int *,unsigned int,int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_4(MLPEncodeContext *VAR_11, PutBitContext *VAR_12,
                                  int VAR_13)
{
    DecodingParams *VAR_14 = VAR_11->cur_decoding_params;
    RestartHeader *VAR_15 = VAR_11->cur_restart_header;
    MatrixParams *VAR_16 = &VAR_14->matrix_params;
    unsigned int VAR_17;

    if (VAR_14->param_presence_flags != VAR_2 &&
        VAR_13 & VAR_9) {
        FUNC_0(VAR_12, 1, 1);
        FUNC_0(VAR_12, 8, VAR_14->param_presence_flags);
    } else {
        FUNC_0(VAR_12, 1, 0);
    }

    if (VAR_14->param_presence_flags & VAR_3) {
        if (VAR_13 & VAR_3) {
            FUNC_0(VAR_12, 1, 1);
            FUNC_0(VAR_12, 9, VAR_14->blocksize);
        } else {
            FUNC_0(VAR_12, 1, 0);
        }
    }

    if (VAR_14->param_presence_flags & VAR_7) {
        if (VAR_13 & VAR_7) {
            FUNC_0(VAR_12, 1, 1);
            FUNC_3(VAR_11, VAR_12);
        } else {
            FUNC_0(VAR_12, 1, 0);
        }
    }

    if (VAR_14->param_presence_flags & VAR_8) {
        if (VAR_13 & VAR_8) {
            FUNC_0(VAR_12, 1, 1);
            for (VAR_17 = 0; VAR_17 <= VAR_15->max_matrix_channel; VAR_17++)
                FUNC_1(VAR_12, 4, VAR_16->shift[VAR_17]);
        } else {
            FUNC_0(VAR_12, 1, 0);
        }
    }

    if (VAR_14->param_presence_flags & VAR_10) {
        if (VAR_13 & VAR_10) {
            FUNC_0(VAR_12, 1, 1);
            for (VAR_17 = 0; VAR_17 <= VAR_15->max_channel; VAR_17++)
                FUNC_0(VAR_12, 4, VAR_14->quant_step_size[VAR_17]);
        } else {
            FUNC_0(VAR_12, 1, 0);
        }
    }

    for (VAR_17 = VAR_15->min_channel; VAR_17 <= VAR_15->max_channel; VAR_17++) {
        ChannelParams *VAR_18 = &VAR_11->cur_channel_params[VAR_17];

        if (VAR_14->param_presence_flags & 0xF) {
            FUNC_0(VAR_12, 1, 1);

            if (VAR_14->param_presence_flags & VAR_4) {
                if (VAR_13 & VAR_4) {
                    FUNC_0(VAR_12, 1, 1);
                    FUNC_2(VAR_11, VAR_12, VAR_17, VAR_0);
                } else {
                    FUNC_0(VAR_12, 1, 0);
                }
            }

            if (VAR_14->param_presence_flags & VAR_6) {
                if (VAR_13 & VAR_6) {
                    FUNC_0(VAR_12, 1, 1);
                    FUNC_2(VAR_11, VAR_12, VAR_17, VAR_1);
                } else {
                    FUNC_0(VAR_12, 1, 0);
                }
            }

            if (VAR_14->param_presence_flags & VAR_5) {
                if (VAR_13 & VAR_5) {
                    FUNC_0 (VAR_12, 1, 1);
                    FUNC_1(VAR_12, 15, VAR_18->huff_offset);
                } else {
                    FUNC_0(VAR_12, 1, 0);
                }
            }

            FUNC_0(VAR_12, 2, VAR_18->codebook );
            FUNC_0(VAR_12, 5, VAR_18->huff_lsbs);
        } else {
            FUNC_0(VAR_12, 1, 0);
        }
    }
}
