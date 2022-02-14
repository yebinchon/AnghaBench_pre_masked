
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {void* u; void* v; int y; } ;
typedef TYPE_2__ YuvPixel ;
struct TYPE_14__ {scalar_t__* changes_map; TYPE_1__* avctx; TYPE_2__* vpt; int gradient_scale; } ;
struct TYPE_12__ {int height; int width; } ;
typedef TYPE_3__ MotionPixelsContext ;
typedef int GetBitContext ;


 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (TYPE_3__*,int *,int) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 TYPE_2__ FUNC_6 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(MotionPixelsContext *VAR_0, GetBitContext *VAR_1)
{
    YuvPixel VAR_2;
    int VAR_3, VAR_4;

    FUNC_0(VAR_0->changes_map[0]);

    for (VAR_3 = 0; VAR_3 < VAR_0->avctx->height; ++VAR_3) {
        if (VAR_0->changes_map[VAR_3 * VAR_0->avctx->width] != 0) {
            FUNC_3(VAR_0->gradient_scale, 1, sizeof(VAR_0->gradient_scale));
            VAR_2 = FUNC_6(VAR_0, 0, VAR_3);
        } else {
            VAR_2.y += FUNC_7(VAR_0, 0, FUNC_5(VAR_0, VAR_1));
            VAR_2.y = FUNC_2(VAR_2.y, 5);
            if ((VAR_3 & 3) == 0) {
                VAR_2.v += FUNC_7(VAR_0, 1, FUNC_5(VAR_0, VAR_1));
                VAR_2.v = FUNC_1(VAR_2.v, 5);
                VAR_2.u += FUNC_7(VAR_0, 2, FUNC_5(VAR_0, VAR_1));
                VAR_2.u = FUNC_1(VAR_2.u, 5);
            }
            VAR_0->vpt[VAR_3] = VAR_2;
            FUNC_8(VAR_0, 0, VAR_3, &VAR_2);
        }
    }
    for (VAR_4 = 0; VAR_4 < 2; ++VAR_4)
        for (VAR_3 = VAR_4; VAR_3 < VAR_0->avctx->height; VAR_3 += 2)
            FUNC_4(VAR_0, VAR_1, VAR_3);
}
