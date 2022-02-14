
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ lsb_bits; int offset; } ;
struct TYPE_22__ {unsigned int codebook; scalar_t__ huff_lsbs; int huff_offset; } ;
struct TYPE_21__ {scalar_t__* quant_step_size; } ;
struct TYPE_20__ {unsigned int number_of_subblocks; TYPE_7__*** best_offset; TYPE_1__* avctx; TYPE_6__* seq_channel_params; TYPE_2__* cur_restart_header; TYPE_5__* cur_decoding_params; } ;
struct TYPE_19__ {char* path; int bitcount; } ;
struct TYPE_18__ {unsigned int min_channel; unsigned int max_channel; } ;
struct TYPE_17__ {unsigned int channels; } ;
typedef TYPE_2__ RestartHeader ;
typedef TYPE_3__ PathCounter ;
typedef TYPE_4__ MLPEncodeContext ;
typedef TYPE_5__ DecodingParams ;
typedef TYPE_6__ ChannelParams ;
typedef TYPE_7__ BestOffset ;


 void* VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (TYPE_4__*,unsigned int,TYPE_3__*,unsigned int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*,TYPE_7__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,int) ;
 int * VAR_3 ;
 TYPE_7__* VAR_4 ;

__attribute__((used)) static void FUNC_5(MLPEncodeContext *VAR_5)
{
    DecodingParams *VAR_6 = VAR_5->cur_decoding_params;
    RestartHeader *VAR_7 = VAR_5->cur_restart_header;
    unsigned int VAR_8;

    for (VAR_8 = VAR_7->min_channel; VAR_8 <= VAR_7->max_channel; VAR_8++) {
        BestOffset *VAR_9, *VAR_10 = VAR_4;
        PathCounter VAR_11[VAR_1 + 1];
        unsigned int VAR_12;
        unsigned int VAR_13;
        char *VAR_14;

        FUNC_2(VAR_11);

        for (VAR_13 = 0; VAR_13 < VAR_5->number_of_subblocks; VAR_13++) {
            unsigned int VAR_15 = VAR_0;
            unsigned int VAR_16;

            VAR_9 = VAR_5->best_offset[VAR_13][VAR_8];

            for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
                int VAR_17 = VAR_0;
                int VAR_18;

                for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
                    PathCounter *VAR_19 = &VAR_11[VAR_16];
                    PathCounter *VAR_20;
                    int VAR_21;



                    if (VAR_18) {
                        VAR_20 = &VAR_11[VAR_1];
                    } else {
                        if (FUNC_3(&VAR_10[VAR_16], &VAR_9[VAR_16]))
                            continue;
                        else
                            VAR_20 = &VAR_11[VAR_16];
                    }

                    VAR_21 = FUNC_1(VAR_5, VAR_8, VAR_20, VAR_16);

                    if (VAR_21 < VAR_15) {
                        VAR_15 = VAR_21;
                        VAR_12 = VAR_16;
                    }

                    if (VAR_21 < VAR_17) {
                        VAR_17 = VAR_21;
                        if (VAR_20 != VAR_19)
                            FUNC_4(VAR_19, VAR_20, sizeof(PathCounter));
                        FUNC_0(VAR_19->path, VAR_3[VAR_16], sizeof(VAR_19->path));
                        VAR_19->bitcount = VAR_21;
                    }
                }
            }

            VAR_10 = VAR_9;

            FUNC_4(&VAR_11[VAR_1], &VAR_11[VAR_12], sizeof(PathCounter));
        }

        VAR_14 = VAR_11[VAR_1].path + 1;


        for (VAR_13 = 0; VAR_13 < VAR_5->number_of_subblocks; VAR_13++) {
            ChannelParams *VAR_22 = VAR_5->seq_channel_params + VAR_13*(VAR_5->avctx->channels) + VAR_8;

            VAR_12 = *VAR_14++ - VAR_2;
            VAR_9 = &VAR_5->best_offset[VAR_13][VAR_8][VAR_12];

            VAR_22->huff_offset = VAR_9->offset;
            VAR_22->huff_lsbs = VAR_9->lsb_bits + VAR_6->quant_step_size[VAR_8];
            VAR_22->codebook = VAR_12;
        }
    }
}
