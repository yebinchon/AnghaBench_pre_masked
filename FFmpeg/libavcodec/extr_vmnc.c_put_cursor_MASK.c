
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int cur_w; scalar_t__ width; scalar_t__ cur_x; int cur_h; scalar_t__ height; scalar_t__ cur_y; int bpp2; int* curbits; int* curmask; } ;
typedef TYPE_1__ VmncContext ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, int VAR_1, VmncContext *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10;
    VAR_7 = VAR_2->cur_w;
    if (VAR_2->width < VAR_2->cur_x + VAR_2->cur_w)
        VAR_7 = VAR_2->width - VAR_2->cur_x;
    VAR_8 = VAR_2->cur_h;
    if (VAR_2->height < VAR_2->cur_y + VAR_2->cur_h)
        VAR_8 = VAR_2->height - VAR_2->cur_y;
    VAR_9 = VAR_2->cur_x;
    VAR_10 = VAR_2->cur_y;
    if (VAR_9 < 0) {
        VAR_7 += VAR_9;
        VAR_9 = 0;
    }
    if (VAR_10 < 0) {
        VAR_8 += VAR_10;
        VAR_10 = 0;
    }

    if ((VAR_7 < 1) || (VAR_8 < 1))
        return;
    VAR_0 += VAR_9 * VAR_2->bpp2 + VAR_10 * VAR_1;

    if (VAR_2->bpp2 == 1) {
        uint8_t *VAR_11 = VAR_2->curbits, *VAR_12 = VAR_2->curmask;
        for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
            for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
                VAR_0[VAR_5] = (VAR_0[VAR_5] & VAR_11[VAR_5]) ^ VAR_12[VAR_5];
            VAR_12 += VAR_2->cur_w;
            VAR_11 += VAR_2->cur_w;
            VAR_0 += VAR_1;
        }
    } else if (VAR_2->bpp2 == 2) {
        uint16_t *VAR_13 = (uint16_t*)VAR_2->curbits, *VAR_14 = (uint16_t*)VAR_2->curmask;
        uint16_t *VAR_15;
        for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
            VAR_15 = (uint16_t*)VAR_0;
            for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
                VAR_15[VAR_5] = (VAR_15[VAR_5] & VAR_13[VAR_5]) ^ VAR_14[VAR_5];
            VAR_14 += VAR_2->cur_w;
            VAR_13 += VAR_2->cur_w;
            VAR_0 += VAR_1;
        }
    } else if (VAR_2->bpp2 == 4) {
        uint32_t *VAR_16 = (uint32_t*)VAR_2->curbits, *VAR_17 = (uint32_t*)VAR_2->curmask;
        uint32_t *VAR_18;
        for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
            VAR_18 = (uint32_t*)VAR_0;
            for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
                VAR_18[VAR_5] = (VAR_18[VAR_5] & VAR_16[VAR_5]) ^ VAR_17[VAR_5];
            VAR_17 += VAR_2->cur_w;
            VAR_16 += VAR_2->cur_w;
            VAR_0 += VAR_1;
        }
    }
}
