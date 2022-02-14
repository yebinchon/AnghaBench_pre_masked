
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* int8_t ;
typedef int int64_t ;
struct TYPE_14__ {int** data; int key_frame; int palette_has_changed; int * linesize; int pict_type; } ;
struct TYPE_13__ {scalar_t__ discard_damaged_percentage; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int size; int data; } ;
struct TYPE_11__ {int video_size; size_t current_frame; int* dirty; int** frame; int frame_size; TYPE_7__* pic; int height; int width; int gb; } ;
typedef TYPE_1__ PAFVideoDecContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,TYPE_7__*) ;
 int FUNC_3 (int*,int ,int*,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (int *,int*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 void* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int FUNC_13 (TYPE_3__*,TYPE_7__*,int ) ;
 int FUNC_14 (int*,int*,int) ;
 int FUNC_15 (int*,void*,int) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_4, void *VAR_5,
                            int *VAR_6, AVPacket *VAR_7)
{
    PAFVideoDecContext *VAR_8 = VAR_4->priv_data;
    uint8_t VAR_9, *VAR_10, *VAR_11;
    int VAR_12, VAR_13, VAR_14;

    if (VAR_7->size < 2)
        return VAR_0;

    FUNC_10(&VAR_8->gb, VAR_7->data, VAR_7->size);

    VAR_9 = FUNC_7(&VAR_8->gb);
    if ((VAR_9 & 0xF) > 4 || (VAR_9 & 0xF) == 3) {
        FUNC_4(VAR_4, "unknown/invalid code");
        return VAR_0;
    }

    if ((VAR_9 & 0xF) == 0 &&
        VAR_8->video_size / 32 - (int64_t)FUNC_8(&VAR_8->gb) > VAR_8->video_size / 32 * (int64_t)VAR_4->discard_damaged_percentage / 100)
        return VAR_0;

    if ((VAR_14 = FUNC_13(VAR_4, VAR_8->pic, 0)) < 0)
        return VAR_14;

    if (VAR_9 & 0x20) {
        FUNC_15(VAR_8->pic->data[1], 0, VAR_1);
        VAR_8->current_frame = 0;
        VAR_8->pic->key_frame = 1;
        VAR_8->pic->pict_type = VAR_2;
    } else {
        VAR_8->pic->key_frame = 0;
        VAR_8->pic->pict_type = VAR_3;
    }

    if (VAR_9 & 0x40) {
        uint32_t *VAR_15 = (uint32_t *)VAR_8->pic->data[1];
        int VAR_16, VAR_17;

        VAR_16 = FUNC_7(&VAR_8->gb);
        VAR_17 = FUNC_7(&VAR_8->gb) + 1;

        if (VAR_16 + VAR_17 > 256)
            return VAR_0;
        if (FUNC_8(&VAR_8->gb) < 3 * VAR_17)
            return VAR_0;

        VAR_15 += VAR_16;
        for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++) {
            unsigned VAR_18, VAR_19, VAR_20;

            VAR_18 = FUNC_9(&VAR_8->gb);
            VAR_18 = VAR_18 << 2 | VAR_18 >> 4;
            VAR_19 = FUNC_9(&VAR_8->gb);
            VAR_19 = VAR_19 << 2 | VAR_19 >> 4;
            VAR_20 = FUNC_9(&VAR_8->gb);
            VAR_20 = VAR_20 << 2 | VAR_20 >> 4;
            *VAR_15++ = (0xFFU << 24) | (VAR_18 << 16) | (VAR_19 << 8) | VAR_20;
        }
        VAR_8->pic->palette_has_changed = 1;
    }

    VAR_8->dirty[VAR_8->current_frame] = 1;
    if (VAR_9 & 0x20)
        for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
            if (VAR_8->dirty[VAR_12])
                FUNC_15(VAR_8->frame[VAR_12], 0, VAR_8->frame_size);
            VAR_8->dirty[VAR_12] = 0;
        }

    switch (VAR_9 & 0x0F) {
    case 0:


        if ((VAR_14 = FUNC_12(VAR_8, VAR_7->data, VAR_9)) < 0)
            return VAR_14;
        break;
    case 1:


        VAR_10 = VAR_8->frame[VAR_8->current_frame];

        FUNC_11(&VAR_8->gb, 2);
        if (FUNC_8(&VAR_8->gb) < VAR_8->video_size)
            return VAR_0;
        FUNC_6(&VAR_8->gb, VAR_10, VAR_8->video_size);
        break;
    case 2:



        VAR_13 = FUNC_7(&VAR_8->gb);
        if (VAR_13 > 3)
            return VAR_0;
        if (VAR_13 != VAR_8->current_frame)
            FUNC_14(VAR_8->frame[VAR_8->current_frame], VAR_8->frame[VAR_13], VAR_8->frame_size);
        break;
    case 4:

        VAR_10 = VAR_8->frame[VAR_8->current_frame];
        VAR_11 = VAR_10 + VAR_8->video_size;

        FUNC_11(&VAR_8->gb, 2);

        while (VAR_10 < VAR_11) {
            int8_t VAR_21;
            int VAR_22;

            if (FUNC_8(&VAR_8->gb) < 2)
                return VAR_0;

            VAR_21 = FUNC_9(&VAR_8->gb);
            VAR_22 = FUNC_0(VAR_21) + 1;

            if (VAR_10 + VAR_22 > VAR_11)
                return VAR_0;
            if (VAR_21 < 0)
                FUNC_15(VAR_10, FUNC_9(&VAR_8->gb), VAR_22);
            else
                FUNC_5(&VAR_8->gb, VAR_10, VAR_22);
            VAR_10 += VAR_22;
        }
        break;
    default:
        FUNC_1(0);
    }

    FUNC_3(VAR_8->pic->data[0], VAR_8->pic->linesize[0],
                        VAR_8->frame[VAR_8->current_frame], VAR_8->width,
                        VAR_8->width, VAR_8->height);

    VAR_8->current_frame = (VAR_8->current_frame + 1) & 3;
    if ((VAR_14 = FUNC_2(VAR_5, VAR_8->pic)) < 0)
        return VAR_14;

    *VAR_6 = 1;

    return VAR_7->size;
}
