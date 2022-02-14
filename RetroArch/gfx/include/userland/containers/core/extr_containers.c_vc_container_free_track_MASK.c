
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
struct TYPE_5__ {TYPE_2__* drmdata; TYPE_2__* extradata; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2( VC_CONTAINER_T *VAR_0, VC_CONTAINER_TRACK_T *VAR_1 )
{
   FUNC_0(VAR_0);
   if(VAR_1)
   {
      if(VAR_1->priv->extradata) FUNC_1(VAR_1->priv->extradata);
      if(VAR_1->priv->drmdata) FUNC_1(VAR_1->priv->drmdata);
      FUNC_1(VAR_1);
   }
}
