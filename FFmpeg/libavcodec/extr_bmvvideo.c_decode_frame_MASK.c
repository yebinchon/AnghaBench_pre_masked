
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
struct TYPE_13__ {int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int** data; int palette_has_changed; int * linesize; } ;
struct TYPE_11__ {scalar_t__ data; int size; } ;
struct TYPE_10__ {scalar_t__ stream; int* pal; int* frame; } ;
typedef TYPE_1__ BMVDecContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int*,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_6 (int*,int*,int ) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_9, void *VAR_10, int *VAR_11,
                        AVPacket *VAR_12)
{
    BMVDecContext * const VAR_13 = VAR_9->priv_data;
    AVFrame *VAR_14 = VAR_10;
    int VAR_15, VAR_16;
    int VAR_17, VAR_18;
    uint8_t *VAR_19, *VAR_20;

    VAR_13->stream = VAR_12->data;
    VAR_15 = FUNC_2(&VAR_13->stream);
    if (VAR_15 & VAR_3) {
        int VAR_21 = FUNC_2(&VAR_13->stream);
        if (VAR_12->size < VAR_21 * 65 + 2) {
            FUNC_0(VAR_9, VAR_2, "Audio data doesn't fit in frame\n");
            return VAR_0;
        }
        VAR_13->stream += VAR_21 * 65;
    }
    if (VAR_15 & VAR_4) {
        int VAR_22 = (VAR_15 & VAR_7) ? 8 : 10;
        if (VAR_13->stream - VAR_12->data + VAR_22 > VAR_12->size) {
            FUNC_0(VAR_9, VAR_2, "Command data doesn't fit in frame\n");
            return VAR_0;
        }
        VAR_13->stream += VAR_22;
    }
    if (VAR_15 & VAR_6) {
        if (VAR_13->stream - VAR_12->data > VAR_12->size - 768) {
            FUNC_0(VAR_9, VAR_2, "Palette data doesn't fit in frame\n");
            return VAR_0;
        }
        for (VAR_17 = 0; VAR_17 < 256; VAR_17++)
            VAR_13->pal[VAR_17] = 0xFFU << 24 | FUNC_1(&VAR_13->stream);
    }
    if (VAR_15 & VAR_8) {
        if (VAR_13->stream - VAR_12->data > VAR_12->size - 2) {
            FUNC_0(VAR_9, VAR_2, "Screen offset data doesn't fit in frame\n");
            return VAR_0;
        }
        VAR_16 = (int16_t)FUNC_3(&VAR_13->stream);
    } else if ((VAR_15 & VAR_5) == VAR_5) {
        VAR_16 = -640;
    } else {
        VAR_16 = 0;
    }

    if ((VAR_18 = FUNC_5(VAR_9, VAR_14, 0)) < 0)
        return VAR_18;

    if (FUNC_4(VAR_13->stream, VAR_12->size - (VAR_13->stream - VAR_12->data), VAR_13->frame, VAR_16)) {
        FUNC_0(VAR_9, VAR_2, "Error decoding frame data\n");
        return VAR_0;
    }

    FUNC_6(VAR_14->data[1], VAR_13->pal, VAR_1);
    VAR_14->palette_has_changed = VAR_15 & VAR_6;

    VAR_20 = VAR_14->data[0];
    VAR_19 = VAR_13->frame;

    for (VAR_17 = 0; VAR_17 < VAR_9->height; VAR_17++) {
        FUNC_6(VAR_20, VAR_19, VAR_9->width);
        VAR_19 += VAR_9->width;
        VAR_20 += VAR_14->linesize[0];
    }

    *VAR_11 = 1;


    return VAR_12->size;
}
