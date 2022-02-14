
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {TYPE_2__* priv_data; } ;
struct TYPE_17__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_16__ {int size; int * data; } ;
struct TYPE_15__ {size_t mode; int (* decode_frame ) (TYPE_2__*,int *,float*) ;TYPE_5__* avctx; } ;
struct TYPE_14__ {int bits_per_frame; int frames_per_packet; int subframe_count; } ;
typedef int SiprParameters ;
typedef TYPE_1__ SiprModeParam ;
typedef TYPE_2__ SiprContext ;
typedef int GetBitContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int) ;
 int FUNC_1 (int *,int *,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_3 (int *,int const*,int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (TYPE_2__*,int *,float*) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_6, void *VAR_7,
                             int *VAR_8, AVPacket *VAR_9)
{
    SiprContext *VAR_10 = VAR_6->priv_data;
    AVFrame *VAR_11 = VAR_7;
    const uint8_t *VAR_12=VAR_9->data;
    SiprParameters VAR_13;
    const SiprModeParam *VAR_14 = &VAR_5[VAR_10->mode];
    GetBitContext VAR_15;
    float *VAR_16;
    int VAR_17 = VAR_10->mode == VAR_3 ? VAR_2 : VAR_4;
    int VAR_18, VAR_19;

    VAR_10->avctx = VAR_6;
    if (VAR_9->size < (VAR_14->bits_per_frame >> 3)) {
        FUNC_0(VAR_6, VAR_1,
               "Error processing packet: packet size (%d) too small\n",
               VAR_9->size);
        return VAR_0;
    }


    VAR_11->nb_samples = VAR_14->frames_per_packet * VAR_17 *
                        VAR_14->subframe_count;
    if ((VAR_19 = FUNC_2(VAR_6, VAR_11, 0)) < 0)
        return VAR_19;
    VAR_16 = (float *)VAR_11->data[0];

    FUNC_3(&VAR_15, VAR_12, VAR_14->bits_per_frame);

    for (VAR_18 = 0; VAR_18 < VAR_14->frames_per_packet; VAR_18++) {
        FUNC_1(&VAR_13, &VAR_15, VAR_14);

        VAR_10->decode_frame(VAR_10, &VAR_13, VAR_16);

        VAR_16 += VAR_17 * VAR_14->subframe_count;
    }

    *VAR_8 = 1;

    return VAR_14->bits_per_frame >> 3;
}
