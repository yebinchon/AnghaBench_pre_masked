
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv; TYPE_1__* format; } ;
typedef TYPE_3__ VC_CONTAINER_TRACK_T ;
typedef int VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_6__ {unsigned int extradata_size; scalar_t__ extradata; } ;
struct TYPE_5__ {scalar_t__ extradata; } ;


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


   if(VAR_5 > 100*1024) return VAR_1;


   if(VAR_5 > VAR_4->priv->extradata_size)
   {
      VAR_4->priv->extradata_size = 0;
      if(VAR_4->priv->extradata) FUNC_1(VAR_4->priv->extradata);
      VAR_4->priv->extradata = FUNC_2(VAR_5);
      VAR_4->format->extradata = VAR_4->priv->extradata;
      if(!VAR_4->priv->extradata) return VAR_0;
      VAR_4->priv->extradata_size = VAR_5;
   }
   VAR_4->format->extradata = VAR_4->priv->extradata;

   return VAR_2;
}
