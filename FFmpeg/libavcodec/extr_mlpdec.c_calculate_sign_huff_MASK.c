
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_7__ {int huff_lsbs; int codebook; int huff_offset; } ;
struct TYPE_6__ {TYPE_1__* substream; } ;
struct TYPE_5__ {int* quant_step_size; TYPE_3__* channel_params; } ;
typedef TYPE_1__ SubStream ;
typedef TYPE_2__ MLPDecodeContext ;
typedef TYPE_3__ ChannelParams ;



__attribute__((used)) static inline int32_t FUNC_0(MLPDecodeContext *VAR_0,
                                          unsigned int VAR_1, unsigned int VAR_2)
{
    SubStream *VAR_3 = &VAR_0->substream[VAR_1];
    ChannelParams *VAR_4 = &VAR_3->channel_params[VAR_2];
    int VAR_5 = VAR_4->huff_lsbs - VAR_3->quant_step_size[VAR_2];
    int VAR_6 = VAR_5 + (VAR_4->codebook ? 2 - VAR_4->codebook : -1);
    int32_t VAR_7 = VAR_4->huff_offset;

    if (VAR_4->codebook > 0)
        VAR_7 -= 7 << VAR_5;

    if (VAR_6 >= 0)
        VAR_7 -= 1 << VAR_6;

    return VAR_7;
}
