
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* avctx; } ;
typedef TYPE_2__ V4L2m2mContext ;
typedef int V4L2Context ;
struct TYPE_4__ {int codec; } ;


 int FUNC_0 (int,int const) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(V4L2Context* VAR_0, int VAR_1, int VAR_2)
{
    V4L2m2mContext *VAR_3 = FUNC_2(VAR_0);
    const int VAR_4 = 0x1000;
    int VAR_5;

    if (VAR_3->avctx && FUNC_1(VAR_3->avctx->codec))
        return ((VAR_1 * VAR_2 * 3 / 2) / 2) + 128;


    VAR_5 = FUNC_0(VAR_2, 32) * FUNC_0(VAR_1, 32) * 3 / 2 / 2;
    return FUNC_0(VAR_5, VAR_4);
}
