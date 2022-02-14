
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_13__ {int block_align; int frame_size; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_11__ {int size; int * data; } ;
struct TYPE_10__ {int state; } ;
typedef TYPE_1__ LibGSMDecodeContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_4, void *VAR_5,
                               int *VAR_6, AVPacket *VAR_7)
{
    int VAR_8, VAR_9;
    LibGSMDecodeContext *VAR_10 = VAR_4->priv_data;
    AVFrame *VAR_11 = VAR_5;
    uint8_t *VAR_12 = VAR_7->data;
    int VAR_13 = VAR_7->size;
    int16_t *VAR_14;

    if (VAR_13 < VAR_4->block_align) {
        FUNC_0(VAR_4, VAR_1, "Packet is too small\n");
        return VAR_0;
    }


    VAR_11->nb_samples = VAR_4->frame_size;
    if ((VAR_9 = FUNC_1(VAR_4, VAR_11, 0)) < 0)
        return VAR_9;
    VAR_14 = (int16_t *)VAR_11->data[0];

    for (VAR_8 = 0; VAR_8 < VAR_4->frame_size / VAR_3; VAR_8++) {
        if ((VAR_9 = FUNC_2(VAR_10->state, VAR_12, VAR_14)) < 0)
            return -1;
        VAR_12 += VAR_2;
        VAR_14 += VAR_3;
    }

    *VAR_6 = 1;

    return VAR_4->block_align;
}
