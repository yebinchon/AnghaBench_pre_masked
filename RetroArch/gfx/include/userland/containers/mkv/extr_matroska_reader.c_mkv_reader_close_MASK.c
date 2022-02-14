
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {unsigned int tracks_num; TYPE_7__** tracks; TYPE_4__* priv; } ;
typedef TYPE_5__ VC_CONTAINER_T ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_MODULE_T ;
struct TYPE_14__ {TYPE_3__* priv; } ;
struct TYPE_12__ {int * module; } ;
struct TYPE_11__ {TYPE_2__* module; } ;
struct TYPE_10__ {TYPE_1__* encodings; } ;
struct TYPE_9__ {int * data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,TYPE_7__*) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_2(VC_CONTAINER_T *VAR_2)
{
   VC_CONTAINER_MODULE_T *VAR_3 = VAR_2->priv->module;
   unsigned int VAR_4, VAR_5;

   for(VAR_4 = 0; VAR_4 < VAR_2->tracks_num; VAR_4++)
   {
      for(VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
         FUNC_0(VAR_2->tracks[VAR_4]->priv->module->encodings[VAR_5].data);
      FUNC_1(VAR_2, VAR_2->tracks[VAR_4]);
   }
   FUNC_0(VAR_3);
   return VAR_1;
}
