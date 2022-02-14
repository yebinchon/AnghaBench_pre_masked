
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_15__ {TYPE_1__* f; } ;
struct TYPE_14__ {int pix_fmt; } ;
struct TYPE_13__ {size_t** data; } ;
struct TYPE_12__ {scalar_t__ blend_op; int image_linesize; int height; scalar_t__ last_dispose_op; size_t last_y_offset; size_t last_h; int bpp; int last_x_offset; int last_w; size_t y_offset; size_t cur_h; size_t x_offset; int cur_w; int* palette; TYPE_8__ previous_picture; TYPE_8__ last_picture; } ;
struct TYPE_11__ {size_t** data; } ;
typedef TYPE_2__ PNGDecContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;



 int VAR_5 ;
 size_t FUNC_1 (size_t) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (size_t*) ;
 int FUNC_4 (int) ;
 size_t* FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_4__*,char*,...) ;
 int FUNC_7 (TYPE_8__*,int ,int ) ;
 int FUNC_8 (TYPE_8__*,int ,int ) ;
 int FUNC_9 (size_t*,size_t*,int) ;
 int FUNC_10 (size_t*,int ,int) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_7, PNGDecContext *VAR_8,
                               AVFrame *VAR_9)
{
    size_t VAR_10, VAR_11;
    uint8_t *VAR_12;

    if (VAR_8->blend_op == VAR_0 &&
        VAR_7->pix_fmt != 128 &&
        VAR_7->pix_fmt != 130 &&
        VAR_7->pix_fmt != 129) {
        FUNC_6(VAR_7, "Blending with pixel format %s",
                              FUNC_4(VAR_7->pix_fmt));
        return VAR_4;
    }

    VAR_12 = FUNC_5(VAR_8->image_linesize, VAR_8->height);
    if (!VAR_12)
        return FUNC_0(VAR_5);



    if (VAR_8->last_dispose_op != VAR_3) {
        FUNC_7(&VAR_8->last_picture, VAR_6, 0);
        FUNC_9(VAR_12, VAR_8->last_picture.f->data[0], VAR_8->image_linesize * VAR_8->height);

        if (VAR_8->last_dispose_op == VAR_2)
            for (VAR_11 = VAR_8->last_y_offset; VAR_11 < VAR_8->last_y_offset + VAR_8->last_h; ++VAR_11)
                FUNC_10(VAR_12 + VAR_8->image_linesize * VAR_11 + VAR_8->bpp * VAR_8->last_x_offset, 0, VAR_8->bpp * VAR_8->last_w);

        FUNC_9(VAR_8->previous_picture.f->data[0], VAR_12, VAR_8->image_linesize * VAR_8->height);
        FUNC_8(&VAR_8->previous_picture, VAR_6, 0);
    } else {
        FUNC_7(&VAR_8->previous_picture, VAR_6, 0);
        FUNC_9(VAR_12, VAR_8->previous_picture.f->data[0], VAR_8->image_linesize * VAR_8->height);
    }


    if (VAR_8->blend_op == VAR_1) {
        for (VAR_11 = VAR_8->y_offset; VAR_11 < VAR_8->y_offset + VAR_8->cur_h; ++VAR_11) {
            size_t VAR_13 = VAR_8->image_linesize * VAR_11 + VAR_8->bpp * VAR_8->x_offset;
            FUNC_9(VAR_12 + VAR_13, VAR_9->data[0] + VAR_13, VAR_8->bpp * VAR_8->cur_w);
        }
    } else {
        for (VAR_11 = VAR_8->y_offset; VAR_11 < VAR_8->y_offset + VAR_8->cur_h; ++VAR_11) {
            uint8_t *VAR_14 = VAR_9->data[0] + VAR_8->image_linesize * VAR_11 + VAR_8->bpp * VAR_8->x_offset;
            uint8_t *VAR_15 = VAR_12 + VAR_8->image_linesize * VAR_11 + VAR_8->bpp * VAR_8->x_offset;
            for (VAR_10 = VAR_8->x_offset; VAR_10 < VAR_8->x_offset + VAR_8->cur_w; ++VAR_10, VAR_14 += VAR_8->bpp, VAR_15 += VAR_8->bpp) {
                size_t VAR_16;
                uint8_t VAR_17, VAR_18, VAR_19;
                uint8_t VAR_20[10];





                switch (VAR_7->pix_fmt) {
                case 128:
                    VAR_17 = VAR_14[3];
                    VAR_18 = VAR_15[3];
                    break;

                case 130:
                    VAR_17 = VAR_14[1];
                    VAR_18 = VAR_15[1];
                    break;

                case 129:
                    VAR_17 = VAR_8->palette[VAR_14[0]] >> 24;
                    VAR_18 = VAR_8->palette[VAR_15[0]] >> 24;
                    break;
                }

                if (VAR_17 == 0)
                    continue;

                if (VAR_17 == 255) {
                    FUNC_9(VAR_15, VAR_14, VAR_8->bpp);
                    continue;
                }

                if (VAR_7->pix_fmt == 129) {

                    FUNC_6(VAR_7, "Alpha blending palette samples");
                    VAR_15[0] = VAR_14[0];
                    continue;
                }

                VAR_19 = VAR_17 + FUNC_1((255 - VAR_17) * VAR_18);

                FUNC_2(VAR_8->bpp <= 10);

                for (VAR_16 = 0; VAR_16 < VAR_8->bpp - 1; ++VAR_16) {
                    if (VAR_19 == 0) {
                        VAR_20[VAR_16] = 0;
                    } else if (VAR_18 == 255) {
                        VAR_20[VAR_16] = FUNC_1(VAR_17 * VAR_14[VAR_16] + (255 - VAR_17) * VAR_15[VAR_16]);
                    } else {
                        VAR_20[VAR_16] = (255 * VAR_17 * VAR_14[VAR_16] + (255 - VAR_17) * VAR_18 * VAR_15[VAR_16]) / (255 * VAR_19);
                    }
                }
                VAR_20[VAR_16] = VAR_19;
                FUNC_9(VAR_15, VAR_20, VAR_8->bpp);
            }
        }
    }


    FUNC_9(VAR_9->data[0], VAR_12, VAR_8->image_linesize * VAR_8->height);
    FUNC_3(VAR_12);

    return 0;
}
