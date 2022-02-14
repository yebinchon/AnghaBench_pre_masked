
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int texture; } ;
struct TYPE_12__ {TYPE_5__* hwctx; TYPE_1__* internal; } ;
struct TYPE_11__ {scalar_t__ nb_surfaces_used; } ;
struct TYPE_10__ {scalar_t__ ArraySize; } ;
struct TYPE_9__ {TYPE_3__* priv; } ;
typedef TYPE_2__ D3D11_TEXTURE2D_DESC ;
typedef TYPE_3__ D3D11VAFramesContext ;
typedef TYPE_4__ AVHWFramesContext ;
typedef TYPE_5__ AVD3D11VAFramesContext ;
typedef int AVBufferRef ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int * FUNC_3 (TYPE_4__*) ;
 int * FUNC_4 (int ,int ) ;

__attribute__((used)) static AVBufferRef *FUNC_5(void *VAR_1, int VAR_2)
{
    AVHWFramesContext *VAR_3 = (AVHWFramesContext*)VAR_1;
    D3D11VAFramesContext *VAR_4 = VAR_3->internal->priv;
    AVD3D11VAFramesContext *VAR_5 = VAR_3->hwctx;
    D3D11_TEXTURE2D_DESC VAR_6;

    if (!VAR_5->texture)
        return FUNC_3(VAR_3);

    FUNC_1(VAR_5->texture, &VAR_6);

    if (VAR_4->nb_surfaces_used >= VAR_6.ArraySize) {
        FUNC_2(VAR_3, VAR_0, "Static surface pool size exceeded.\n");
        return ((void*)0);
    }

    FUNC_0(VAR_5->texture);
    return FUNC_4(VAR_5->texture, VAR_4->nb_surfaces_used++);
}
