
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; int * drm; scalar_t__ tracks_num; int * tracks; scalar_t__ capabilities; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
struct TYPE_5__ {int * tmp_io; int * pf_control; int * pf_seek; int * pf_write; int * pf_read; int * pf_close; int * module; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(VC_CONTAINER_T *VAR_0)
{
   FUNC_0(VAR_0);

   VAR_0->capabilities = 0;
   VAR_0->tracks = ((void*)0);
   VAR_0->tracks_num = 0;
   VAR_0->drm = ((void*)0);
   VAR_0->priv->module = ((void*)0);
   VAR_0->priv->pf_close = ((void*)0);
   VAR_0->priv->pf_read = ((void*)0);
   VAR_0->priv->pf_write = ((void*)0);
   VAR_0->priv->pf_seek = ((void*)0);
   VAR_0->priv->pf_control = ((void*)0);
   VAR_0->priv->tmp_io = ((void*)0);
}
