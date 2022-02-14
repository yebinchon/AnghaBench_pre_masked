
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_4__ {unsigned int drmdata_size; scalar_t__ drmdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int) ;

VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_3,
   VC_CONTAINER_TRACK_T *VAR_4, unsigned int VAR_5 )
{
   FUNC_0(VAR_3);


   if(VAR_5 > 200*1024) return VAR_1;


   if(VAR_5 > VAR_4->priv->drmdata_size)
   {
      VAR_4->priv->drmdata_size = 0;
      if(VAR_4->priv->drmdata) FUNC_1(VAR_4->priv->drmdata);
      VAR_4->priv->drmdata = FUNC_2(VAR_5);
      if(!VAR_4->priv->drmdata) return VAR_0;
      VAR_4->priv->drmdata_size = VAR_5;
   }

   return VAR_2;
}
