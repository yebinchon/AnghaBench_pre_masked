
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_11__ {unsigned int shift; int * state; int order; } ;
struct TYPE_8__ {int (* mlp_filter_channel ) (int *,int const*,int ,int ,unsigned int,int ,int,int *) ;} ;
struct TYPE_10__ {int ** sample_buffer; TYPE_2__ dsp; TYPE_3__* substream; } ;
struct TYPE_9__ {int blocksize; size_t blockpos; int * quant_step_size; TYPE_1__* channel_params; } ;
struct TYPE_7__ {TYPE_5__* filter_params; int ** coeff; } ;
typedef TYPE_3__ SubStream ;
typedef TYPE_4__ MLPDecodeContext ;
typedef TYPE_5__ FilterParams ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int const*,int ,int ,unsigned int,int ,int,int *) ;

__attribute__((used)) static void FUNC_3(MLPDecodeContext *VAR_6, unsigned int VAR_7,
                           unsigned int VAR_8)
{
    SubStream *VAR_9 = &VAR_6->substream[VAR_7];
    const int32_t *VAR_10 = VAR_9->channel_params[VAR_8].coeff[VAR_0];
    int32_t VAR_11[VAR_5][VAR_2 + VAR_3];
    int32_t *VAR_12 = VAR_11[VAR_0] + VAR_2;
    int32_t *VAR_13 = VAR_11[VAR_1] + VAR_2;
    FilterParams *VAR_14 = &VAR_9->channel_params[VAR_8].filter_params[VAR_0];
    FilterParams *VAR_15 = &VAR_9->channel_params[VAR_8].filter_params[VAR_1];
    unsigned int VAR_16 = VAR_14->shift;
    int32_t VAR_17 = FUNC_0(VAR_9->quant_step_size[VAR_8]);

    FUNC_1(VAR_12, VAR_14->state, VAR_3 * sizeof(int32_t));
    FUNC_1(VAR_13, VAR_15->state, VAR_4 * sizeof(int32_t));

    VAR_6->dsp.mlp_filter_channel(VAR_12, VAR_10,
                              VAR_14->order, VAR_15->order,
                              VAR_16, VAR_17, VAR_9->blocksize,
                              &VAR_6->sample_buffer[VAR_9->blockpos][VAR_8]);

    FUNC_1(VAR_14->state, VAR_12 - VAR_9->blocksize, VAR_3 * sizeof(int32_t));
    FUNC_1(VAR_15->state, VAR_13 - VAR_9->blocksize, VAR_4 * sizeof(int32_t));
}
