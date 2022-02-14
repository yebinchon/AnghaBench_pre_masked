
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_14__ {int buffer; } ;
struct TYPE_13__ {int* linesize; int height; scalar_t__* data; } ;
struct TYPE_12__ {int transparent_color_index; int screen_width; int screen_height; scalar_t__ gce_prev_disposal; int gce_l; int gce_t; int gce_w; int gce_h; scalar_t__ gce_disposal; size_t* idx_line; TYPE_8__ gb; int lzw; int avctx; int * stored_img; int stored_img_size; int bg_color; int stored_bg_color; int trans_color; scalar_t__ has_global_palette; scalar_t__ keyframe; int * global_palette; int * local_palette; } ;
typedef TYPE_1__ GifState ;
typedef TYPE_2__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int **,int *,int) ;
 int FUNC_2 (int ,int ,char*,...) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*,int) ;
 int FUNC_7 (int ,char*,int,int,int,int) ;
 int FUNC_8 (int ,size_t*,int) ;
 int FUNC_9 (int ,int,int ,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *,int,int,int,int,int) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_2__*,int ,int,int,int,int) ;
 int FUNC_14 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_15(GifState *VAR_8, AVFrame *VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    uint32_t *VAR_26, *VAR_27, *VAR_28, *VAR_29, *VAR_30;
    int VAR_31;
    uint8_t *VAR_32;


    if (FUNC_3(&VAR_8->gb) < 9)
        return VAR_0;

    VAR_10 = FUNC_5(&VAR_8->gb);
    VAR_11 = FUNC_5(&VAR_8->gb);
    VAR_12 = FUNC_5(&VAR_8->gb);
    VAR_13 = FUNC_5(&VAR_8->gb);
    VAR_16 = FUNC_4(&VAR_8->gb);
    VAR_18 = VAR_16 & 0x40;
    VAR_19 = VAR_16 & 0x80;
    VAR_14 = (VAR_16 & 0x07) + 1;

    FUNC_7(VAR_8->avctx, "image x=%d y=%d w=%d h=%d\n", VAR_10, VAR_11, VAR_12, VAR_13);

    if (VAR_19) {
        VAR_24 = 1 << VAR_14;

        if (FUNC_3(&VAR_8->gb) < VAR_24 * 3)
            return VAR_0;

        FUNC_14(VAR_8, VAR_8->local_palette, VAR_24);
        VAR_27 = VAR_8->local_palette;
    } else {
        if (!VAR_8->has_global_palette) {
            FUNC_2(VAR_8->avctx, VAR_1, "picture doesn't have either global or local palette.\n");
            return VAR_0;
        }

        VAR_27 = VAR_8->global_palette;
    }

    if (VAR_8->keyframe) {
        if (VAR_8->transparent_color_index == -1 && VAR_8->has_global_palette) {

            FUNC_12(VAR_9, VAR_8->bg_color);
        } else {


            FUNC_12(VAR_9, VAR_8->trans_color);
        }
    }


    if (!VAR_12 || VAR_12 > VAR_8->screen_width) {
        FUNC_2(VAR_8->avctx, VAR_2, "Invalid image width: %d, truncating.\n", VAR_12);
        VAR_12 = VAR_8->screen_width;
    }
    if (VAR_10 >= VAR_8->screen_width) {
        FUNC_2(VAR_8->avctx, VAR_1, "Invalid left position: %d.\n", VAR_10);
        return VAR_0;
    }
    if (!VAR_13 || VAR_13 > VAR_8->screen_height) {
        FUNC_2(VAR_8->avctx, VAR_2, "Invalid image height: %d, truncating.\n", VAR_13);
        VAR_13 = VAR_8->screen_height;
    }
    if (VAR_11 >= VAR_8->screen_height) {
        FUNC_2(VAR_8->avctx, VAR_1, "Invalid top position: %d.\n", VAR_11);
        return VAR_0;
    }
    if (VAR_10 + VAR_12 > VAR_8->screen_width) {

        VAR_17 = VAR_8->screen_width - VAR_10;
        FUNC_2(VAR_8->avctx, VAR_2, "Image too wide by %d, truncating.\n",
               VAR_10 + VAR_12 - VAR_8->screen_width);
    } else {
        VAR_17 = VAR_12;
    }
    if (VAR_11 + VAR_13 > VAR_8->screen_height) {

        FUNC_2(VAR_8->avctx, VAR_2, "Image too high by %d, truncating.\n",
               VAR_11 + VAR_13 - VAR_8->screen_height);
        VAR_13 = VAR_8->screen_height - VAR_11;
    }


    if (VAR_8->gce_prev_disposal == VAR_5) {
        FUNC_13(VAR_9, VAR_8->stored_bg_color, VAR_8->gce_l, VAR_8->gce_t, VAR_8->gce_w, VAR_8->gce_h);
    } else if (VAR_8->gce_prev_disposal == VAR_7) {
        FUNC_11(VAR_8->stored_img, (uint32_t *)VAR_9->data[0],
            VAR_9->linesize[0] / sizeof(uint32_t), VAR_8->gce_l, VAR_8->gce_t, VAR_8->gce_w, VAR_8->gce_h);
    }

    VAR_8->gce_prev_disposal = VAR_8->gce_disposal;

    if (VAR_8->gce_disposal != VAR_6) {
        VAR_8->gce_l = VAR_10; VAR_8->gce_t = VAR_11;
        VAR_8->gce_w = VAR_17; VAR_8->gce_h = VAR_13;

        if (VAR_8->gce_disposal == VAR_5) {
            if (VAR_8->transparent_color_index >= 0)
                VAR_8->stored_bg_color = VAR_8->trans_color;
            else
                VAR_8->stored_bg_color = VAR_8->bg_color;
        } else if (VAR_8->gce_disposal == VAR_7) {
            FUNC_1(&VAR_8->stored_img, &VAR_8->stored_img_size, VAR_9->linesize[0] * VAR_9->height);
            if (!VAR_8->stored_img)
                return FUNC_0(VAR_3);

            FUNC_11((uint32_t *)VAR_9->data[0], VAR_8->stored_img,
                VAR_9->linesize[0] / sizeof(uint32_t), VAR_10, VAR_11, VAR_17, VAR_13);
        }
    }


    if (FUNC_3(&VAR_8->gb) < 2)
        return VAR_0;


    VAR_15 = FUNC_4(&VAR_8->gb);
    if ((VAR_31 = FUNC_9(VAR_8->lzw, VAR_15, VAR_8->gb.buffer,
                                  FUNC_3(&VAR_8->gb), VAR_4)) < 0) {
        FUNC_2(VAR_8->avctx, VAR_1, "LZW init failed\n");
        return VAR_31;
    }


    VAR_23 = VAR_9->linesize[0] / sizeof(uint32_t);
    VAR_30 = (uint32_t *)VAR_9->data[0] + VAR_11 * VAR_23 + VAR_10;
    VAR_26 = VAR_30;
    VAR_21 = 0;
    VAR_22 = 0;
    for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20++) {
        int VAR_33 = FUNC_8(VAR_8->lzw, VAR_8->idx_line, VAR_12);
        if (VAR_33 != VAR_12) {
            if (VAR_33)
                FUNC_2(VAR_8->avctx, VAR_1, "LZW decode failed\n");
            goto decode_tail;
        }

        VAR_29 = VAR_26 + VAR_17;

        for (VAR_28 = VAR_26, VAR_32 = VAR_8->idx_line; VAR_28 < VAR_29; VAR_28++, VAR_32++) {
            if (*VAR_32 != VAR_8->transparent_color_index)
                *VAR_28 = VAR_27[*VAR_32];
        }

        if (VAR_18) {
            switch(VAR_21) {
            default:
            case 0:
            case 1:
                VAR_22 += 8;
                VAR_26 += VAR_23 * 8;
                break;
            case 2:
                VAR_22 += 4;
                VAR_26 += VAR_23 * 4;
                break;
            case 3:
                VAR_22 += 2;
                VAR_26 += VAR_23 * 2;
                break;
            }
            while (VAR_22 >= VAR_13) {
                VAR_22 = 4 >> VAR_21;
                VAR_26 = VAR_30 + VAR_23 * VAR_22;
                VAR_21++;
            }
        } else {
            VAR_26 += VAR_23;
        }
    }

 decode_tail:

    VAR_25 = FUNC_10(VAR_8->lzw);
    FUNC_6(&VAR_8->gb, VAR_25);



    VAR_8->transparent_color_index = -1;
    VAR_8->gce_disposal = VAR_6;

    return 0;
}
