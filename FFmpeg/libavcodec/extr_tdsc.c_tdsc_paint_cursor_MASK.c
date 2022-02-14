
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int cursor_x; int cursor_hot_x; int cursor_y; int cursor_hot_y; int cursor_w; int cursor_h; int width; int height; int cursor_stride; int * cursor; } ;
typedef TYPE_1__ TDSCContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ,int const,int ) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    TDSCContext *VAR_3 = VAR_0->priv_data;
    const uint8_t *VAR_4 = VAR_3->cursor;
    int VAR_5 = VAR_3->cursor_x - VAR_3->cursor_hot_x;
    int VAR_6 = VAR_3->cursor_y - VAR_3->cursor_hot_y;
    int VAR_7 = VAR_3->cursor_w;
    int VAR_8 = VAR_3->cursor_h;
    int VAR_9, VAR_10;

    if (!VAR_3->cursor)
        return;

    if (VAR_5 + VAR_7 > VAR_3->width)
        VAR_7 = VAR_3->width - VAR_5;
    if (VAR_6 + VAR_8 > VAR_3->height)
        VAR_8 = VAR_3->height - VAR_6;
    if (VAR_5 < 0) {
        VAR_7 += VAR_5;
        VAR_4 += -VAR_5 * 4;
    } else {
        VAR_1 += VAR_5 * 3;
    }
    if (VAR_6 < 0) {
        VAR_8 += VAR_6;
        VAR_4 += -VAR_6 * VAR_3->cursor_stride;
    } else {
        VAR_1 += VAR_6 * VAR_2;
    }
    if (VAR_7 < 0 || VAR_8 < 0)
        return;

    for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
        for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
            uint8_t VAR_11 = VAR_4[VAR_9 * 4];
            FUNC_0(VAR_1[VAR_9 * 3 + 0], VAR_4[VAR_9 * 4 + 1], VAR_11);
            FUNC_0(VAR_1[VAR_9 * 3 + 1], VAR_4[VAR_9 * 4 + 2], VAR_11);
            FUNC_0(VAR_1[VAR_9 * 3 + 2], VAR_4[VAR_9 * 4 + 3], VAR_11);
        }
        VAR_1 += VAR_2;
        VAR_4 += VAR_3->cursor_stride;
    }
}
