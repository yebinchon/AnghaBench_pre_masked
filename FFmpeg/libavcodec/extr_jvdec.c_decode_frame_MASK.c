
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_16__ {int* linesize; int key_frame; int palette_has_changed; scalar_t__* data; int pict_type; } ;
struct TYPE_15__ {int height; int width; TYPE_1__* priv_data; } ;
struct TYPE_14__ {int* data; int size; } ;
struct TYPE_13__ {int* palette; int palette_has_changed; TYPE_5__* frame; int bdsp; } ;
typedef TYPE_1__ JvContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (void*,TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*,int ,char*,...) ;
 int FUNC_5 (int *,scalar_t__,int,int *) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (scalar_t__,int*,int ) ;
 int FUNC_10 (scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_7, void *VAR_8, int *VAR_9,
                        AVPacket *VAR_10)
{
    JvContext *VAR_11 = VAR_7->priv_data;
    const uint8_t *VAR_12 = VAR_10->data;
    const uint8_t *VAR_13 = VAR_12 + VAR_10->size;
    int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

    if (VAR_10->size < 6)
        return VAR_0;

    VAR_14 = FUNC_1(VAR_12);
    VAR_15 = VAR_12[4];
    VAR_12 += 5;

    if (VAR_14) {
        if (VAR_14 < 0 || VAR_14 > VAR_10->size - 5) {
            FUNC_4(VAR_7, VAR_4, "video size %d invalid\n", VAR_14);
            return VAR_0;
        }

        if (VAR_15 == 0 || VAR_15 == 1) {
            GetBitContext VAR_19;
            FUNC_8(&VAR_19, VAR_12, 8 * VAR_14);

            if ((VAR_18 = FUNC_7(VAR_7, VAR_11->frame, 0)) < 0)
                return VAR_18;

            if (VAR_7->height/8 * (VAR_7->width/8) > 4 * VAR_14) {
                FUNC_4(VAR_7, VAR_4, "Insufficient input data for dimensions\n");
                return VAR_0;
            }

            for (VAR_17 = 0; VAR_17 < VAR_7->height; VAR_17 += 8)
                for (VAR_16 = 0; VAR_16 < VAR_7->width; VAR_16 += 8)
                    FUNC_5(&VAR_19,
                              VAR_11->frame->data[0] + VAR_17 * VAR_11->frame->linesize[0] + VAR_16,
                              VAR_11->frame->linesize[0], &VAR_11->bdsp);

            VAR_12 += VAR_14;
        } else if (VAR_15 == 2) {
            int VAR_20 = *VAR_12++;

            FUNC_3(VAR_11->frame);
            if ((VAR_18 = FUNC_6(VAR_7, VAR_11->frame, VAR_3)) < 0)
                return VAR_18;

            for (VAR_17 = 0; VAR_17 < VAR_7->height; VAR_17++)
                FUNC_10(VAR_11->frame->data[0] + VAR_17 * VAR_11->frame->linesize[0],
                       VAR_20, VAR_7->width);
        } else {
            FUNC_4(VAR_7, VAR_5,
                   "unsupported frame type %i\n", VAR_15);
            return VAR_0;
        }
    }

    if (VAR_13 - VAR_12 >= VAR_1 * 3) {
        for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
            uint32_t VAR_21 = FUNC_0(VAR_12);
            VAR_11->palette[VAR_16] = 0xFFU << 24 | VAR_21 << 2 | ((VAR_21 >> 4) & 0x30303);
            VAR_12 += 3;
        }
        VAR_11->palette_has_changed = 1;
    }

    if (VAR_14) {
        VAR_11->frame->key_frame = 1;
        VAR_11->frame->pict_type = VAR_6;
        VAR_11->frame->palette_has_changed = VAR_11->palette_has_changed;
        VAR_11->palette_has_changed = 0;
        FUNC_9(VAR_11->frame->data[1], VAR_11->palette, VAR_2);

        if ((VAR_18 = FUNC_2(VAR_8, VAR_11->frame)) < 0)
            return VAR_18;
        *VAR_9 = 1;
    }

    return VAR_10->size;
}
