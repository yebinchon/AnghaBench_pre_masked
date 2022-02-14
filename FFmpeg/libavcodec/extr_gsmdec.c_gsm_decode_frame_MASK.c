
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_13__ {int block_align; int codec_id; int frame_size; } ;
struct TYPE_12__ {scalar_t__* data; int nb_samples; } ;
struct TYPE_11__ {int size; int * data; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_3__*,int *,int const*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_3__*,int *,int *,int ) ;
 int FUNC_5 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_5, void *VAR_6,
                            int *VAR_7, AVPacket *VAR_8)
{
    AVFrame *VAR_9 = VAR_6;
    int VAR_10;
    GetBitContext VAR_11;
    const uint8_t *VAR_12 = VAR_8->data;
    int VAR_13 = VAR_8->size;
    int16_t *VAR_14;

    if (VAR_13 < VAR_5->block_align) {
        FUNC_0(VAR_5, VAR_1, "Packet is too small\n");
        return VAR_0;
    }


    VAR_9->nb_samples = VAR_5->frame_size;
    if ((VAR_10 = FUNC_1(VAR_5, VAR_9, 0)) < 0)
        return VAR_10;
    VAR_14 = (int16_t *)VAR_9->data[0];

    switch (VAR_5->codec_id) {
    case 129:
        FUNC_5(&VAR_11, VAR_12, VAR_13 * 8);
        if (FUNC_3(&VAR_11, 4) != 0xd)
            FUNC_0(VAR_5, VAR_2, "Missing GSM magic!\n");
        VAR_10 = FUNC_4(VAR_5, VAR_14, &VAR_11, VAR_3);
        if (VAR_10 < 0)
            return VAR_10;
        break;
    case 128:
        VAR_10 = FUNC_2(VAR_5, VAR_14, VAR_12,
                                    (VAR_4 - VAR_5->block_align) / 3);
        if (VAR_10 < 0)
            return VAR_10;
    }

    *VAR_7 = 1;

    return VAR_5->block_align;
}
