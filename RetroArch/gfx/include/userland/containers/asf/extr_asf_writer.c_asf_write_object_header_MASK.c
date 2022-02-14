
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ tracks_num; TYPE_1__* priv; } ;
typedef TYPE_2__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_10__ {scalar_t__ current_track; } ;
typedef TYPE_3__ VC_CONTAINER_MODULE_T ;
struct TYPE_8__ {TYPE_3__* module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_4 )
{
   VC_CONTAINER_STATUS_T VAR_5 = VAR_3;
   VC_CONTAINER_MODULE_T *VAR_6 = VAR_4->priv->module;

   FUNC_0(VAR_4, 0, "Number of Header Objects");
   FUNC_1(VAR_4, 0, "Reserved1");
   FUNC_1(VAR_4, 0, "Reserved2");

   VAR_5 = FUNC_2(VAR_4, VAR_0);
   VAR_5 = FUNC_2(VAR_4, VAR_1);

   for(VAR_6->current_track = 0; VAR_6->current_track < VAR_4->tracks_num;
       VAR_6->current_track++)
   {
      VAR_5 = FUNC_2(VAR_4, VAR_2);
   }





   return VAR_5;
}
