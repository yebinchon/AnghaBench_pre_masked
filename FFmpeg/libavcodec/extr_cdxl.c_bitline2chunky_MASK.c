
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int bpp; int padded_bits; TYPE_1__* avctx; int video_size; int video; } ;
struct TYPE_4__ {int height; int width; } ;
typedef int GetBitContext ;
typedef TYPE_2__ CDXLVideoContext ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(CDXLVideoContext *VAR_0, int VAR_1, uint8_t *VAR_2)
{
    GetBitContext VAR_3;
    int VAR_4, VAR_5, VAR_6;

    if (FUNC_1(&VAR_3, VAR_0->video, VAR_0->video_size) < 0)
        return;
    for (VAR_5 = 0; VAR_5 < VAR_0->avctx->height; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < VAR_0->bpp; VAR_6++) {
            for (VAR_4 = 0; VAR_4 < VAR_0->avctx->width; VAR_4++)
                VAR_2[VAR_1 * VAR_5 + VAR_4] |= FUNC_0(&VAR_3) << VAR_6;
            FUNC_2(&VAR_3, VAR_0->padded_bits);
        }
    }
}
