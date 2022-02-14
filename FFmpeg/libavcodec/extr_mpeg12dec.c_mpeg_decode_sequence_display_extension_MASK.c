
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int debug; void* colorspace; void* color_trc; void* color_primaries; } ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_7__ {TYPE_5__* avctx; int gb; } ;
struct TYPE_8__ {TYPE_1__ pan_scan; TYPE_2__ mpeg_enc_ctx; } ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ Mpeg1Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int,int) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(Mpeg1Context *VAR_2)
{
    MpegEncContext *VAR_3 = &VAR_2->mpeg_enc_ctx;
    int VAR_4, VAR_5, VAR_6;

    FUNC_3(&VAR_3->gb, 3);
    VAR_4 = FUNC_2(&VAR_3->gb);
    if (VAR_4) {
        VAR_3->avctx->color_primaries = FUNC_1(&VAR_3->gb, 8);
        VAR_3->avctx->color_trc = FUNC_1(&VAR_3->gb, 8);
        VAR_3->avctx->colorspace = FUNC_1(&VAR_3->gb, 8);
    }
    VAR_5 = FUNC_1(&VAR_3->gb, 14);
    FUNC_3(&VAR_3->gb, 1);
    VAR_6 = FUNC_1(&VAR_3->gb, 14);


    VAR_2->pan_scan.width = 16 * VAR_5;
    VAR_2->pan_scan.height = 16 * VAR_6;

    if (VAR_3->avctx->debug & VAR_1)
        FUNC_0(VAR_3->avctx, VAR_0, "sde w:%d, h:%d\n", VAR_5, VAR_6);
}
