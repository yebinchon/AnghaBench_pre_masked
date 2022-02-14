
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ mvX; scalar_t__ mvY; int pal_stride; int rgb_stride; int * rgb_pic; int * pal_pic; int * last_rgb_pic; int * last_pal_pic; TYPE_1__* avctx; } ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_2__ MSS12Context ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(MSS12Context const *VAR_0,
                               int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    if (VAR_1 + VAR_0->mvX < 0 || VAR_1 + VAR_0->mvX + VAR_3 > VAR_0->avctx->width ||
        VAR_2 + VAR_0->mvY < 0 || VAR_2 + VAR_0->mvY + VAR_4 > VAR_0->avctx->height ||
        !VAR_0->rgb_pic)
        return -1;
    else {
        uint8_t *VAR_5 = VAR_0->pal_pic + VAR_1 + VAR_2 * VAR_0->pal_stride;
        uint8_t *VAR_6 = VAR_0->rgb_pic + VAR_1 * 3 + VAR_2 * VAR_0->rgb_stride;
        uint8_t *VAR_7;
        uint8_t *VAR_8;
        int VAR_9;
        VAR_1 += VAR_0->mvX;
        VAR_2 += VAR_0->mvY;
        if (VAR_0->last_rgb_pic) {
            VAR_7 = VAR_0->last_pal_pic + VAR_1 + VAR_2 * VAR_0->pal_stride;
            VAR_8 = VAR_0->last_rgb_pic + VAR_1 * 3 + VAR_2 * VAR_0->rgb_stride;
        } else {
            VAR_7 = VAR_0->pal_pic + VAR_1 + VAR_2 * VAR_0->pal_stride;
            VAR_8 = VAR_0->rgb_pic + VAR_1 * 3 + VAR_2 * VAR_0->rgb_stride;
        }
        for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
            FUNC_0(VAR_5, VAR_7, VAR_3);
            FUNC_0(VAR_6, VAR_8, VAR_3 * 3);
            VAR_5 += VAR_0->pal_stride;
            VAR_7 += VAR_0->pal_stride;
            VAR_6 += VAR_0->rgb_stride;
            VAR_8 += VAR_0->rgb_stride;
        }
    }
    return 0;
}
