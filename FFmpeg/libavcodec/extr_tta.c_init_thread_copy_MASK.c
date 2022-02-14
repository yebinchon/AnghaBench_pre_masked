
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {TYPE_2__* avctx; } ;
typedef TYPE_1__ TTAContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0)
{
    TTAContext *VAR_1 = VAR_0->priv_data;
    VAR_1->avctx = VAR_0;
    return FUNC_0(VAR_0);
}
