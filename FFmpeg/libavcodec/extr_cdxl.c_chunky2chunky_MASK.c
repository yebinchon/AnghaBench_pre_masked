
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* avctx; int video_size; int video; } ;
struct TYPE_4__ {int height; int width; } ;
typedef int GetByteContext ;
typedef TYPE_2__ CDXLVideoContext ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(CDXLVideoContext *VAR_0, int VAR_1, uint8_t *VAR_2)
{
    GetByteContext VAR_3;
    int VAR_4;

    FUNC_1(&VAR_3, VAR_0->video, VAR_0->video_size);
    for (VAR_4 = 0; VAR_4 < VAR_0->avctx->height; VAR_4++) {
        FUNC_0(&VAR_3, VAR_2 + VAR_1 * VAR_4, VAR_0->avctx->width * 3);
    }
}
