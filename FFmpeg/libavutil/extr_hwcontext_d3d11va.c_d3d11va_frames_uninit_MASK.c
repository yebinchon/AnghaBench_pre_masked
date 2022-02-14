
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int * texture; } ;
struct TYPE_8__ {TYPE_1__* internal; TYPE_4__* hwctx; } ;
struct TYPE_7__ {int * staging_texture; } ;
struct TYPE_6__ {TYPE_2__* priv; } ;
typedef TYPE_2__ D3D11VAFramesContext ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVD3D11VAFramesContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVHWFramesContext *VAR_0)
{
    AVD3D11VAFramesContext *VAR_1 = VAR_0->hwctx;
    D3D11VAFramesContext *VAR_2 = VAR_0->internal->priv;

    if (VAR_1->texture)
        FUNC_0(VAR_1->texture);
    VAR_1->texture = ((void*)0);

    if (VAR_2->staging_texture)
        FUNC_0(VAR_2->staging_texture);
    VAR_2->staging_texture = ((void*)0);
}
