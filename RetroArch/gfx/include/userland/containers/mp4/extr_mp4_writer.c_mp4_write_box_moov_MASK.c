
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int tracks_num; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef scalar_t__ VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {unsigned int current_track; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_6__ {TYPE_3__* module; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_3 )
{
   VC_CONTAINER_STATUS_T VAR_4 = VAR_2;
   VC_CONTAINER_MODULE_T *VAR_5 = VAR_3->priv->module;
   unsigned int VAR_6;

   VAR_4 = FUNC_0(VAR_3, VAR_0);
   if(VAR_4 != VAR_2) return VAR_4;

   for(VAR_6 = 0; VAR_6 < VAR_3->tracks_num; VAR_6++)
   {
      VAR_5->current_track = VAR_6;
      VAR_4 = FUNC_0(VAR_3, VAR_1);
      if(VAR_4 != VAR_2) return VAR_4;
   }

   return VAR_4;
}
