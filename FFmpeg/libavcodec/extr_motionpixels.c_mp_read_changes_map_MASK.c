
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int* changes_map; TYPE_2__* frame; TYPE_1__* avctx; int offset_bits_len; } ;
struct TYPE_6__ {int* linesize; int ** data; } ;
struct TYPE_5__ {int width; int height; } ;
typedef TYPE_3__ MotionPixelsContext ;
typedef int GetBitContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(MotionPixelsContext *VAR_0, GetBitContext *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    uint16_t *VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9 = 0, VAR_10, VAR_11, VAR_12;

    while (VAR_2--) {
        VAR_6 = FUNC_2(VAR_1, VAR_0->offset_bits_len);
        VAR_7 = FUNC_1(VAR_1, VAR_3) + 1;
        VAR_8 = FUNC_1(VAR_1, VAR_3) + 1;
        if (VAR_4)
            VAR_9 = FUNC_1(VAR_1, 15);
        VAR_10 = VAR_6 % VAR_0->avctx->width;
        VAR_11 = VAR_6 / VAR_0->avctx->width;
        if (VAR_11 >= VAR_0->avctx->height)
            continue;
        VAR_7 = FUNC_0(VAR_7, VAR_0->avctx->width - VAR_10);
        VAR_8 = FUNC_0(VAR_8, VAR_0->avctx->height - VAR_11);
        VAR_5 = (uint16_t *)&VAR_0->frame->data[0][VAR_11 * VAR_0->frame->linesize[0] + VAR_10 * 2];
        while (VAR_8--) {
            VAR_0->changes_map[VAR_6] = VAR_7;
            if (VAR_4)
                for (VAR_12 = 0; VAR_12 < VAR_7; ++VAR_12)
                    VAR_5[VAR_12] = VAR_9;
            VAR_6 += VAR_0->avctx->width;
            VAR_5 += VAR_0->frame->linesize[0] / 2;
        }
    }
}
