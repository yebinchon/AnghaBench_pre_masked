
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int format; TYPE_1__* avctx; } ;
struct TYPE_7__ {int height; } ;
typedef TYPE_2__ CDXLVideoContext ;





 int FUNC_0 (TYPE_2__*,int,int *) ;
 int FUNC_1 (TYPE_2__*,int,int *) ;
 int FUNC_2 (TYPE_2__*,int,int *) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(CDXLVideoContext *VAR_0, int VAR_1, uint8_t *VAR_2)
{
    FUNC_3(VAR_2, 0, VAR_1 * VAR_0->avctx->height);

    switch (VAR_0->format) {
    case 129:
        FUNC_1(VAR_0, VAR_1, VAR_2);
        break;
    case 130:
        FUNC_0(VAR_0, VAR_1, VAR_2);
        break;
    case 128:
        FUNC_2(VAR_0, VAR_1, VAR_2);
        break;
    }
}
