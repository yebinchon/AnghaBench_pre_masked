
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int tracks_num; TYPE_6__** tracks; TYPE_1__* priv; } ;
typedef TYPE_4__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_MODULE_T ;
struct TYPE_12__ {TYPE_3__* priv; } ;
struct TYPE_10__ {TYPE_2__* module; } ;
struct TYPE_9__ {int io; } ;
struct TYPE_8__ {int * module; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_3( VC_CONTAINER_T *VAR_1 )
{
   VC_CONTAINER_MODULE_T *VAR_2 = VAR_1->priv->module;
   for (; VAR_1->tracks_num > 0; VAR_1->tracks_num--)
   {
      FUNC_2(VAR_1->tracks[VAR_1->tracks_num-1]->priv->module->io);
      FUNC_1(VAR_1, VAR_1->tracks[VAR_1->tracks_num-1]);
   }
   FUNC_0(VAR_2);
   return VAR_0;
}
