
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {int size; int bits_per_subpacket; int bits_per_subpdiv; int ch_idx; scalar_t__ num_channels; int joint_stereo; } ;
struct TYPE_15__ {int block_align; TYPE_1__* priv_data; } ;
struct TYPE_14__ {scalar_t__ extended_data; int nb_samples; } ;
struct TYPE_13__ {int* data; int size; } ;
struct TYPE_12__ {int discarded_packets; int num_subpackets; int gb; TYPE_8__* subpacket; int samples_per_channel; } ;
typedef TYPE_1__ COOKContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,char*,...) ;
 int FUNC_1 (TYPE_1__*,TYPE_8__*,int const*,float**) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2, void *VAR_3,
                             int *VAR_4, AVPacket *VAR_5)
{
    AVFrame *VAR_6 = VAR_3;
    const uint8_t *VAR_7 = VAR_5->data;
    int VAR_8 = VAR_5->size;
    COOKContext *VAR_9 = VAR_2->priv_data;
    float **VAR_10 = ((void*)0);
    int VAR_11, VAR_12;
    int VAR_13 = 0;
    int VAR_14 = 0;

    if (VAR_8 < VAR_2->block_align)
        return VAR_8;


    if (VAR_9->discarded_packets >= 2) {
        VAR_6->nb_samples = VAR_9->samples_per_channel;
        if ((VAR_12 = FUNC_2(VAR_2, VAR_6, 0)) < 0)
            return VAR_12;
        VAR_10 = (float **)VAR_6->extended_data;
    }


    VAR_9->subpacket[0].size = VAR_2->block_align;

    for (VAR_11 = 1; VAR_11 < VAR_9->num_subpackets; VAR_11++) {
        VAR_9->subpacket[VAR_11].size = 2 * VAR_7[VAR_2->block_align - VAR_9->num_subpackets + VAR_11];
        VAR_9->subpacket[0].size -= VAR_9->subpacket[VAR_11].size + 1;
        if (VAR_9->subpacket[0].size < 0) {
            FUNC_0(VAR_2, VAR_1,
                   "frame subpacket size total > avctx->block_align!\n");
            return VAR_0;
        }
    }


    for (VAR_11 = 0; VAR_11 < VAR_9->num_subpackets; VAR_11++) {
        VAR_9->subpacket[VAR_11].bits_per_subpacket = (VAR_9->subpacket[VAR_11].size * 8) >>
                                              VAR_9->subpacket[VAR_11].bits_per_subpdiv;
        VAR_9->subpacket[VAR_11].ch_idx = VAR_14;
        FUNC_0(VAR_2, VAR_1,
               "subpacket[%i] size %i js %i %i block_align %i\n",
               VAR_11, VAR_9->subpacket[VAR_11].size, VAR_9->subpacket[VAR_11].joint_stereo, VAR_13,
               VAR_2->block_align);

        if ((VAR_12 = FUNC_1(VAR_9, &VAR_9->subpacket[VAR_11], VAR_7 + VAR_13, VAR_10)) < 0)
            return VAR_12;
        VAR_13 += VAR_9->subpacket[VAR_11].size;
        VAR_14 += VAR_9->subpacket[VAR_11].num_channels;
        FUNC_0(VAR_2, VAR_1, "subpacket[%i] %i %i\n",
               VAR_11, VAR_9->subpacket[VAR_11].size * 8, FUNC_3(&VAR_9->gb));
    }


    if (VAR_9->discarded_packets < 2) {
        VAR_9->discarded_packets++;
        *VAR_4 = 0;
        return VAR_2->block_align;
    }

    *VAR_4 = 1;

    return VAR_2->block_align;
}
