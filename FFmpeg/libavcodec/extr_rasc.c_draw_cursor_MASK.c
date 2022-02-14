
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ width; scalar_t__ height; scalar_t__ pix_fmt; TYPE_2__* priv_data; } ;
struct TYPE_6__ {int* cursor; scalar_t__ cursor_x; scalar_t__ cursor_y; int cursor_w; scalar_t__ cursor_h; TYPE_1__* frame; } ;
struct TYPE_5__ {int** data; int* linesize; } ;
typedef TYPE_2__ RASCContext ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_4)
{
    RASCContext *VAR_5 = VAR_4->priv_data;
    uint8_t *VAR_6, *VAR_7;

    if (!VAR_5->cursor)
        return;

    if (VAR_5->cursor_x >= VAR_4->width || VAR_5->cursor_y >= VAR_4->height)
        return;

    if (VAR_5->cursor_x + VAR_5->cursor_w > VAR_4->width ||
        VAR_5->cursor_y + VAR_5->cursor_h > VAR_4->height)
        return;

    if (VAR_4->pix_fmt == VAR_1) {
        VAR_7 = VAR_5->frame->data[1];
        for (int VAR_8 = 0; VAR_8 < VAR_5->cursor_h; VAR_8++) {
            for (int VAR_9 = 0; VAR_9 < VAR_5->cursor_w; VAR_9++) {
                int VAR_10 = VAR_5->cursor[3 * VAR_5->cursor_w * (VAR_5->cursor_h - VAR_8 - 1) + 3 * VAR_9 + 0];
                int VAR_11 = VAR_5->cursor[3 * VAR_5->cursor_w * (VAR_5->cursor_h - VAR_8 - 1) + 3 * VAR_9 + 1];
                int VAR_12 = VAR_5->cursor[3 * VAR_5->cursor_w * (VAR_5->cursor_h - VAR_8 - 1) + 3 * VAR_9 + 2];
                int VAR_13 = VAR_3;
                int VAR_14 = 0;
                int VAR_15;

                if (VAR_10 == VAR_5->cursor[0] && VAR_11 == VAR_5->cursor[1] && VAR_12 == VAR_5->cursor[2])
                    continue;

                VAR_6 = VAR_5->frame->data[0] + VAR_5->frame->linesize[0] * (VAR_5->cursor_y + VAR_8) + (VAR_5->cursor_x + VAR_9);
                for (int VAR_16 = 0; VAR_16 < 256; VAR_16++) {
                    int VAR_17 = VAR_7[VAR_16 * 4 + 0];
                    int VAR_18 = VAR_7[VAR_16 * 4 + 1];
                    int VAR_19 = VAR_7[VAR_16 * 4 + 2];

                    VAR_15 = FUNC_1(VAR_10 - VAR_17) + FUNC_1(VAR_11 - VAR_18) + FUNC_1(VAR_12 - VAR_19);
                    if (VAR_15 < VAR_13) {
                        VAR_13 = VAR_15;
                        VAR_14 = VAR_16;
                    }
                }
                VAR_6[0] = VAR_14;
            }
        }
    } else if (VAR_4->pix_fmt == VAR_2) {
        for (int VAR_20 = 0; VAR_20 < VAR_5->cursor_h; VAR_20++) {
            for (int VAR_21 = 0; VAR_21 < VAR_5->cursor_w; VAR_21++) {
                int VAR_22 = VAR_5->cursor[3 * VAR_5->cursor_w * (VAR_5->cursor_h - VAR_20 - 1) + 3 * VAR_21 + 0];
                int VAR_23 = VAR_5->cursor[3 * VAR_5->cursor_w * (VAR_5->cursor_h - VAR_20 - 1) + 3 * VAR_21 + 1];
                int VAR_24 = VAR_5->cursor[3 * VAR_5->cursor_w * (VAR_5->cursor_h - VAR_20 - 1) + 3 * VAR_21 + 2];

                if (VAR_22 == VAR_5->cursor[0] && VAR_23 == VAR_5->cursor[1] && VAR_24 == VAR_5->cursor[2])
                    continue;

                VAR_22 >>= 3; VAR_23 >>=3; VAR_24 >>= 3;
                VAR_6 = VAR_5->frame->data[0] + VAR_5->frame->linesize[0] * (VAR_5->cursor_y + VAR_20) + 2 * (VAR_5->cursor_x + VAR_21);
                FUNC_0(VAR_6, VAR_22 | VAR_23 << 5 | VAR_24 << 10);
            }
        }
    } else if (VAR_4->pix_fmt == VAR_0) {
        for (int VAR_25 = 0; VAR_25 < VAR_5->cursor_h; VAR_25++) {
            for (int VAR_26 = 0; VAR_26 < VAR_5->cursor_w; VAR_26++) {
                int VAR_27 = VAR_5->cursor[3 * VAR_5->cursor_w * (VAR_5->cursor_h - VAR_25 - 1) + 3 * VAR_26 + 0];
                int VAR_28 = VAR_5->cursor[3 * VAR_5->cursor_w * (VAR_5->cursor_h - VAR_25 - 1) + 3 * VAR_26 + 1];
                int VAR_29 = VAR_5->cursor[3 * VAR_5->cursor_w * (VAR_5->cursor_h - VAR_25 - 1) + 3 * VAR_26 + 2];

                if (VAR_27 == VAR_5->cursor[0] && VAR_28 == VAR_5->cursor[1] && VAR_29 == VAR_5->cursor[2])
                    continue;

                VAR_6 = VAR_5->frame->data[0] + VAR_5->frame->linesize[0] * (VAR_5->cursor_y + VAR_25) + 4 * (VAR_5->cursor_x + VAR_26);
                VAR_6[0] = VAR_29;
                VAR_6[1] = VAR_28;
                VAR_6[2] = VAR_27;
            }
        }
    }
}
