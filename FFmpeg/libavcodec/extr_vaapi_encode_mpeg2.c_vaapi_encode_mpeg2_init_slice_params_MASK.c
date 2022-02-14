
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int quantiser_scale_code; int is_intra_slice; int num_macroblocks; int macroblock_address; } ;
typedef TYPE_1__ VAEncSliceParameterBufferMPEG2 ;
struct TYPE_10__ {int block_size; int block_start; TYPE_1__* codec_slice_params; } ;
typedef TYPE_2__ VAAPIEncodeSlice ;
struct TYPE_11__ {int type; } ;
typedef TYPE_3__ VAAPIEncodePicture ;
struct TYPE_12__ {int quant_i; int quant_p; int quant_b; } ;
typedef TYPE_4__ VAAPIEncodeMPEG2Context ;
struct TYPE_13__ {TYPE_4__* priv_data; } ;
typedef TYPE_5__ AVCodecContext ;






 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0,
                                               VAAPIEncodePicture *VAR_1,
                                               VAAPIEncodeSlice *VAR_2)
{
    VAAPIEncodeMPEG2Context *VAR_3 = VAR_0->priv_data;
    VAEncSliceParameterBufferMPEG2 *VAR_4 = VAR_2->codec_slice_params;
    int VAR_5;

    VAR_4->macroblock_address = VAR_2->block_start;
    VAR_4->num_macroblocks = VAR_2->block_size;

    switch (VAR_1->type) {
    case 129:
    case 130:
        VAR_5 = VAR_3->quant_i;
        break;
    case 128:
        VAR_5 = VAR_3->quant_p;
        break;
    case 131:
        VAR_5 = VAR_3->quant_b;
        break;
    default:
        FUNC_0(0 && "invalid picture type");
    }

    VAR_4->quantiser_scale_code = VAR_5;
    VAR_4->is_intra_slice = (VAR_1->type == 129 ||
                              VAR_1->type == 130);

    return 0;
}
