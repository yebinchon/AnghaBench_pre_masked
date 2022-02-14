
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_TRACK_T ;
struct TYPE_13__ {int tracks_num; TYPE_4__** tracks; TYPE_3__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_MODULE_T ;
struct TYPE_11__ {int * module; } ;
struct TYPE_10__ {TYPE_1__* module; } ;
struct TYPE_9__ {scalar_t__ io; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;

   for (; VAR_1->tracks_num > 0; VAR_1->tracks_num--)
   {
      VC_CONTAINER_TRACK_T *VAR_3 = VAR_1->tracks[VAR_1->tracks_num-1];
      if (VAR_3->priv->module->io)
         FUNC_2(VAR_3->priv->module->io);
      FUNC_1(VAR_1, VAR_3);
   }

   FUNC_0(VAR_2);
   return VAR_0;
}
