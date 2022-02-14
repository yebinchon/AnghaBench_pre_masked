
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int cursor_x; int cursor_hot_x; int cursor_y; int cursor_hot_y; int cursor_w; int cursor_h; int width; int height; int cursor_stride; int * cursor; } ;
typedef TYPE_1__ G2MContext ;


 int FUNC_0 (int ,int const,int ) ;

__attribute__((used)) static void FUNC_1(G2MContext *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8;
    const uint8_t *VAR_9;

    if (!VAR_0->cursor)
        return;

    VAR_5 = VAR_0->cursor_x - VAR_0->cursor_hot_x;
    VAR_6 = VAR_0->cursor_y - VAR_0->cursor_hot_y;

    VAR_9 = VAR_0->cursor;
    VAR_7 = VAR_0->cursor_w;
    VAR_8 = VAR_0->cursor_h;

    if (VAR_5 + VAR_7 > VAR_0->width)
        VAR_7 = VAR_0->width - VAR_5;
    if (VAR_6 + VAR_8 > VAR_0->height)
        VAR_8 = VAR_0->height - VAR_6;
    if (VAR_5 < 0) {
        VAR_7 += VAR_5;
        VAR_9 += -VAR_5 * 4;
    } else {
        VAR_1 += VAR_5 * 3;
    }

    if (VAR_6 < 0)
        VAR_8 += VAR_6;
    if (VAR_7 < 0 || VAR_8 < 0)
        return;
    if (VAR_6 < 0) {
        VAR_9 += -VAR_6 * VAR_0->cursor_stride;
    } else {
        VAR_1 += VAR_6 * VAR_2;
    }

    for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < VAR_7; VAR_3++) {
            uint8_t VAR_10 = VAR_9[VAR_3 * 4];
            FUNC_0(VAR_1[VAR_3 * 3 + 0], VAR_9[VAR_3 * 4 + 1], VAR_10);
            FUNC_0(VAR_1[VAR_3 * 3 + 1], VAR_9[VAR_3 * 4 + 2], VAR_10);
            FUNC_0(VAR_1[VAR_3 * 3 + 2], VAR_9[VAR_3 * 4 + 3], VAR_10);
        }
        VAR_1 += VAR_2;
        VAR_9 += VAR_0->cursor_stride;
    }
}
