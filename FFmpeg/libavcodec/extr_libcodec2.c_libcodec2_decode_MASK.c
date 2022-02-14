
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_12__ {int block_align; int frame_size; TYPE_1__* priv_data; } ;
struct TYPE_11__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_10__ {int size; int * data; } ;
struct TYPE_9__ {int codec; } ;
typedef TYPE_1__ LibCodec2Context ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, void *VAR_1,
                            int *VAR_2, AVPacket *VAR_3)
{
    LibCodec2Context *VAR_4 = VAR_0->priv_data;
    AVFrame *VAR_5 = VAR_1;
    int VAR_6, VAR_7, VAR_8;
    uint8_t *VAR_9;
    int16_t *VAR_10;

    VAR_7 = VAR_3->size / VAR_0->block_align;
    VAR_5->nb_samples = VAR_0->frame_size * VAR_7;

    VAR_6 = FUNC_1(VAR_0, VAR_5, 0);
    if (VAR_6 < 0) {
        return VAR_6;
    }

    VAR_9 = VAR_3->data;
    VAR_10 = (int16_t *)VAR_5->data[0];

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        FUNC_0(VAR_4->codec, VAR_10, VAR_9);
        VAR_9 += VAR_0->block_align;
        VAR_10 += VAR_0->frame_size;
    }

    *VAR_2 = VAR_7 > 0;
    return VAR_7 * VAR_0->block_align;
}
