
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ height; int width; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int cursor_hot_x; int cursor_hot_y; int cursor_w; int cursor_h; int cursor_stride; scalar_t__ cursor_y; int* cursor; int gbc; int cursor_x; } ;
typedef TYPE_1__ TDSCContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 int FUNC_3 (int**,int) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_4)
{
    TDSCContext *VAR_5 = VAR_4->priv_data;
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    uint8_t *VAR_11;

    VAR_5->cursor_hot_x = FUNC_6(&VAR_5->gbc);
    VAR_5->cursor_hot_y = FUNC_6(&VAR_5->gbc);
    VAR_5->cursor_w = FUNC_6(&VAR_5->gbc);
    VAR_5->cursor_h = FUNC_6(&VAR_5->gbc);

    VAR_5->cursor_stride = FUNC_0(VAR_5->cursor_w, 32) * 4;
    VAR_10 = FUNC_7(&VAR_5->gbc);

    if (VAR_5->cursor_x >= VAR_4->width || VAR_5->cursor_y >= VAR_4->height) {
        FUNC_2(VAR_4, VAR_2,
               "Invalid cursor position (%d.%d outside %dx%d).\n",
               VAR_5->cursor_x, VAR_5->cursor_y, VAR_4->width, VAR_4->height);
        return VAR_0;
    }
    if (VAR_5->cursor_w < 1 || VAR_5->cursor_w > 256 ||
        VAR_5->cursor_h < 1 || VAR_5->cursor_h > 256) {
        FUNC_2(VAR_4, VAR_2,
               "Invalid cursor dimensions %dx%d.\n",
               VAR_5->cursor_w, VAR_5->cursor_h);
        return VAR_0;
    }
    if (VAR_5->cursor_hot_x > VAR_5->cursor_w ||
        VAR_5->cursor_hot_y > VAR_5->cursor_h) {
        FUNC_2(VAR_4, VAR_3, "Invalid hotspot position %d.%d.\n",
               VAR_5->cursor_hot_x, VAR_5->cursor_hot_y);
        VAR_5->cursor_hot_x = FUNC_1(VAR_5->cursor_hot_x, VAR_5->cursor_w - 1);
        VAR_5->cursor_hot_y = FUNC_1(VAR_5->cursor_hot_y, VAR_5->cursor_h - 1);
    }

    VAR_9 = FUNC_3(&VAR_5->cursor, VAR_5->cursor_stride * VAR_5->cursor_h);
    if (VAR_9 < 0) {
        FUNC_2(VAR_4, VAR_2, "Cannot allocate cursor buffer.\n");
        return VAR_9;
    }

    VAR_11 = VAR_5->cursor;

    switch (VAR_10) {
    case 129:
        for (VAR_7 = 0; VAR_7 < VAR_5->cursor_h; VAR_7++) {
            for (VAR_6 = 0; VAR_6 < VAR_5->cursor_w; VAR_6 += 32) {
                uint32_t VAR_12 = FUNC_5(&VAR_5->gbc);
                for (VAR_8 = 0; VAR_8 < 32; VAR_8++) {
                    VAR_11[0] = !!(VAR_12 & 0x80000000);
                    VAR_11 += 4;
                    VAR_12 <<= 1;
                }
            }
            VAR_11 += VAR_5->cursor_stride - VAR_5->cursor_w * 4;
        }

        VAR_11 = VAR_5->cursor;
        for (VAR_7 = 0; VAR_7 < VAR_5->cursor_h; VAR_7++) {
            for (VAR_6 = 0; VAR_6 < VAR_5->cursor_w; VAR_6 += 32) {
                uint32_t VAR_13 = FUNC_5(&VAR_5->gbc);
                for (VAR_8 = 0; VAR_8 < 32; VAR_8++) {
                    int VAR_14 = !!(VAR_13 & 0x80000000);
                    switch (VAR_11[0] * 2 + VAR_14) {
                    case 0:
                        VAR_11[0] = 0xFF;
                        VAR_11[1] = 0x00;
                        VAR_11[2] = 0x00;
                        VAR_11[3] = 0x00;
                        break;
                    case 1:
                        VAR_11[0] = 0xFF;
                        VAR_11[1] = 0xFF;
                        VAR_11[2] = 0xFF;
                        VAR_11[3] = 0xFF;
                        break;
                    default:
                        VAR_11[0] = 0x00;
                        VAR_11[1] = 0x00;
                        VAR_11[2] = 0x00;
                        VAR_11[3] = 0x00;
                    }
                    VAR_11 += 4;
                    VAR_13 <<= 1;
                }
            }
            VAR_11 += VAR_5->cursor_stride - VAR_5->cursor_w * 4;
        }
        break;
    case 130:
    case 128:

        FUNC_8(&VAR_5->gbc,
                         VAR_5->cursor_h * (FUNC_0(VAR_5->cursor_w, 32) >> 3));
        if (VAR_10 & 8) {
            for (VAR_7 = 0; VAR_7 < VAR_5->cursor_h; VAR_7++) {
                for (VAR_6 = 0; VAR_6 < VAR_5->cursor_w; VAR_6++) {
                    int VAR_15 = FUNC_5(&VAR_5->gbc);
                    *VAR_11++ = VAR_15 >> 24;
                    *VAR_11++ = VAR_15 >> 16;
                    *VAR_11++ = VAR_15 >> 8;
                    *VAR_11++ = VAR_15 >> 0;
                }
                VAR_11 += VAR_5->cursor_stride - VAR_5->cursor_w * 4;
            }
        } else {
            for (VAR_7 = 0; VAR_7 < VAR_5->cursor_h; VAR_7++) {
                for (VAR_6 = 0; VAR_6 < VAR_5->cursor_w; VAR_6++) {
                    int VAR_16 = FUNC_5(&VAR_5->gbc);
                    *VAR_11++ = VAR_16 >> 0;
                    *VAR_11++ = VAR_16 >> 24;
                    *VAR_11++ = VAR_16 >> 16;
                    *VAR_11++ = VAR_16 >> 8;
                }
                VAR_11 += VAR_5->cursor_stride - VAR_5->cursor_w * 4;
            }
        }
        break;
    default:
        FUNC_4(VAR_4, "Cursor format %08x", VAR_10);
        return VAR_1;
    }

    return 0;
}
