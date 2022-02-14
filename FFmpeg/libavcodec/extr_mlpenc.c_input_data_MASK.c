
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* avctx; } ;
struct TYPE_5__ {scalar_t__ sample_fmt; } ;
typedef TYPE_2__ MLPEncodeContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,void*,int) ;

__attribute__((used)) static void FUNC_1(MLPEncodeContext *VAR_1, void *VAR_2)
{
    if (VAR_1->avctx->sample_fmt == VAR_0)
        FUNC_0(VAR_1, VAR_2, 1);
    else
        FUNC_0(VAR_1, VAR_2, 0);
}
