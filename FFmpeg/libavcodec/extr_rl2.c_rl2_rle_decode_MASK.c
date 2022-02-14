
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int* back_frame; TYPE_1__* avctx; } ;
struct TYPE_4__ {int width; int height; } ;
typedef TYPE_2__ Rl2Context ;


 int FUNC_0 (int*,int const*,int) ;

__attribute__((used)) static void FUNC_1(Rl2Context *VAR_0, const uint8_t *VAR_1, int VAR_2,
                               uint8_t *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6 = VAR_5 % VAR_0->avctx->width;
    int VAR_7 = VAR_5 / VAR_0->avctx->width;
    int VAR_8 = VAR_4 - VAR_0->avctx->width;
    int VAR_9;
    const uint8_t *VAR_10 = VAR_0->back_frame;
    const uint8_t *VAR_11 = VAR_1 + VAR_2;
    const uint8_t *VAR_12 = VAR_3 + VAR_4 * VAR_0->avctx->height;
    uint8_t *VAR_13;


    for (VAR_9 = 0; VAR_9 <= VAR_7; VAR_9++) {
        if (VAR_0->back_frame)
            FUNC_0(VAR_3, VAR_10, VAR_0->avctx->width);
        VAR_3 += VAR_4;
        VAR_10 += VAR_0->avctx->width;
    }
    VAR_10 += VAR_6 - VAR_0->avctx->width;
    VAR_13 = VAR_3 - VAR_8;
    VAR_3 += VAR_6 - VAR_4;


    while (VAR_1 < VAR_11) {
        uint8_t VAR_14 = *VAR_1++;
        int VAR_15 = 1;
        if (VAR_14 >= 0x80) {
            if (VAR_1 >= VAR_11)
                break;
            VAR_15 = *VAR_1++;
            if (!VAR_15)
                break;
        }

        if (VAR_15 >= VAR_12 - VAR_3)
            break;

        if (VAR_0->back_frame)
            VAR_14 |= 0x80;
        else
            VAR_14 &= ~0x80;

        while (VAR_15--) {
            *VAR_3++ = (VAR_14 == 0x80) ? *VAR_10 : VAR_14;
            VAR_10++;
            if (VAR_3 == VAR_13) {
                 VAR_3 += VAR_8;
                 VAR_13 += VAR_4;
                 if (VAR_15 >= VAR_12 - VAR_3)
                     break;
            }
        }
    }


    if (VAR_0->back_frame) {
        while (VAR_3 < VAR_12) {
            FUNC_0(VAR_3, VAR_10, VAR_13 - VAR_3);
            VAR_10 += VAR_13 - VAR_3;
            VAR_3 = VAR_13 + VAR_8;
            VAR_13 += VAR_4;
        }
    }
}
