
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


typedef int uint8_t ;
struct TYPE_17__ {int width; int height; int* frame_buffer; int* palette; TYPE_13__* last_frame; TYPE_9__* avctx; } ;
typedef TYPE_1__ TgvContext ;
struct TYPE_21__ {int width; int height; } ;
struct TYPE_20__ {TYPE_1__* priv_data; } ;
struct TYPE_19__ {int key_frame; int* linesize; int pict_type; scalar_t__* data; } ;
struct TYPE_18__ {int size; int * data; } ;
struct TYPE_16__ {int * data; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int const*) ;
 void* FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_13__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_13__*) ;
 int FUNC_6 (int**) ;
 int FUNC_7 (TYPE_4__*,int ,char*) ;
 int* FUNC_8 (int) ;
 int FUNC_9 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_9__*,int,int) ;
 int VAR_9 ;
 int FUNC_11 (scalar_t__,int*,int) ;
 scalar_t__ FUNC_12 (TYPE_1__*,TYPE_3__*,int const*,int const*) ;
 scalar_t__ FUNC_13 (int const*,int const*,int*,int,int) ;

__attribute__((used)) static int FUNC_14(AVCodecContext *VAR_10,
                            void *VAR_11, int *VAR_12,
                            AVPacket *VAR_13)
{
    const uint8_t *VAR_14 = VAR_13->data;
    int VAR_15 = VAR_13->size;
    TgvContext *VAR_16 = VAR_10->priv_data;
    const uint8_t *VAR_17 = VAR_14 + VAR_15;
    AVFrame *VAR_18 = VAR_11;
    int VAR_19, VAR_20;

    if (VAR_17 - VAR_14 < VAR_7)
        return VAR_0;

    VAR_19 = FUNC_3(&VAR_14[0]);
    VAR_14 += VAR_7;

    if (VAR_19 == VAR_9) {
        int VAR_21, VAR_22;
        if(VAR_17 - VAR_14 < 12) {
            FUNC_7(VAR_10, VAR_4, "truncated header\n");
            return VAR_0;
        }

        VAR_16->width = FUNC_2(&VAR_14[0]);
        VAR_16->height = FUNC_2(&VAR_14[2]);
        if (VAR_16->avctx->width != VAR_16->width || VAR_16->avctx->height != VAR_16->height) {
            FUNC_6(&VAR_16->frame_buffer);
            FUNC_5(VAR_16->last_frame);
            if ((VAR_20 = FUNC_10(VAR_16->avctx, VAR_16->width, VAR_16->height)) < 0)
                return VAR_20;
        }

        VAR_21 = FUNC_2(&VAR_14[6]);
        VAR_14 += 12;
        for(VAR_22 = 0; VAR_22 < VAR_21 && VAR_22 < VAR_1 && VAR_17 - VAR_14 >= 3; VAR_22++) {
            VAR_16->palette[VAR_22] = 0xFFU << 24 | FUNC_1(VAR_14);
            VAR_14 += 3;
        }
        if (VAR_17 - VAR_14 < 5) {
            return VAR_0;
        }
    }

    if ((VAR_20 = FUNC_9(VAR_10, VAR_18, VAR_3)) < 0)
        return VAR_20;

    FUNC_11(VAR_18->data[1], VAR_16->palette, VAR_2);

    if (VAR_19 == VAR_9) {
        int VAR_23;
        VAR_18->key_frame = 1;
        VAR_18->pict_type = VAR_5;

        if (!VAR_16->frame_buffer &&
            !(VAR_16->frame_buffer = FUNC_8(VAR_16->width * VAR_16->height)))
            return FUNC_0(VAR_8);

        if (FUNC_13(VAR_14, VAR_17, VAR_16->frame_buffer, VAR_16->avctx->width, VAR_16->avctx->height) < 0) {
            FUNC_7(VAR_10, VAR_4, "truncated intra frame\n");
            return VAR_0;
        }
        for (VAR_23 = 0; VAR_23 < VAR_16->height; VAR_23++)
            FUNC_11(VAR_18->data[0] + VAR_23 * VAR_18->linesize[0],
                   VAR_16->frame_buffer + VAR_23 * VAR_16->width,
                   VAR_16->width);
    } else {
        if (!VAR_16->last_frame->data[0]) {
            FUNC_7(VAR_10, VAR_4, "inter frame without corresponding intra frame\n");
            return VAR_15;
        }
        VAR_18->key_frame = 0;
        VAR_18->pict_type = VAR_6;
        if (FUNC_12(VAR_16, VAR_18, VAR_14, VAR_17) < 0) {
            FUNC_7(VAR_10, VAR_4, "truncated inter frame\n");
            return VAR_0;
        }
    }

    FUNC_5(VAR_16->last_frame);
    if ((VAR_20 = FUNC_4(VAR_16->last_frame, VAR_18)) < 0)
        return VAR_20;

    *VAR_12 = 1;

    return VAR_15;
}
