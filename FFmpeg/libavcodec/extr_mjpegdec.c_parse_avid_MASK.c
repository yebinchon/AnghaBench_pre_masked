
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int debug; } ;
struct TYPE_4__ {int buggy_avid; int interlace_polarity; TYPE_3__* avctx; } ;
typedef TYPE_1__ MJpegDecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int,int) ;

__attribute__((used)) static void FUNC_1(MJpegDecodeContext *VAR_2, uint8_t *VAR_3, int VAR_4)
{
    VAR_2->buggy_avid = 1;
    if (VAR_4 > 14 && VAR_3[12] == 1)
        VAR_2->interlace_polarity = 1;
    if (VAR_4 > 14 && VAR_3[12] == 2)
        VAR_2->interlace_polarity = 0;
    if (VAR_2->avctx->debug & VAR_1)
        FUNC_0(VAR_2->avctx, VAR_0, "AVID: len:%d %d\n", VAR_4, VAR_4 > 14 ? VAR_3[12] : -1);
}
