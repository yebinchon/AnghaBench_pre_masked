
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* avctx; } ;
struct TYPE_4__ {void* colorspace; void* color_trc; void* color_primaries; int color_range; } ;
typedef TYPE_2__ MpegEncContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(MpegEncContext *VAR_4, GetBitContext *VAR_5)
{
    int VAR_6;
    int VAR_7 = FUNC_1(VAR_5);

    if (VAR_7) {
        FUNC_2(VAR_5, 4+3);
    }
    VAR_6 = FUNC_0(VAR_5, 4);

    if (VAR_6 == VAR_3 ||
        VAR_6 == VAR_2) {
        int VAR_8 = FUNC_1(VAR_5);
        if (VAR_8) {
            int VAR_9, VAR_10;
            FUNC_2(VAR_5, 3);
            VAR_9 = FUNC_1(VAR_5);
            VAR_10 = FUNC_1(VAR_5);

            VAR_4->avctx->color_range = VAR_9 ? VAR_0 : VAR_1;

            if (VAR_10) {
                VAR_4->avctx->color_primaries = FUNC_0(VAR_5, 8);
                VAR_4->avctx->color_trc = FUNC_0(VAR_5, 8);
                VAR_4->avctx->colorspace = FUNC_0(VAR_5, 8);
            }
        }
    }

    return 0;
}
