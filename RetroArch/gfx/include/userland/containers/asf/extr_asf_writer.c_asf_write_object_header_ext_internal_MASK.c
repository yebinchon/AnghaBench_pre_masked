
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tracks_num; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_8__ {scalar_t__ current_track; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_6__ {TYPE_3__* module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1( VC_CONTAINER_T *VAR_2 )
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_2->priv->module;
   VC_CONTAINER_STATUS_T VAR_4 = VAR_1;

   for(VAR_3->current_track = 0; VAR_3->current_track < VAR_2->tracks_num;
       VAR_3->current_track++)
   {
      VAR_4 = FUNC_0(VAR_2, VAR_0);
   }

   return VAR_4;
}
