
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {TYPE_2__* container; } ;
struct TYPE_17__ {TYPE_3__* priv; } ;
struct TYPE_16__ {TYPE_5__* priv; TYPE_7__* component; } ;
struct TYPE_15__ {TYPE_4__* module; } ;
struct TYPE_14__ {unsigned int track; } ;
struct TYPE_13__ {TYPE_8__* module; } ;
struct TYPE_12__ {unsigned int tracks_num; TYPE_1__** tracks; } ;
struct TYPE_11__ {scalar_t__ is_enabled; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef TYPE_7__ MMAL_COMPONENT_T ;
typedef TYPE_8__ MMAL_COMPONENT_MODULE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_2)
{
   MMAL_COMPONENT_T *VAR_3 = VAR_2->component;
   MMAL_COMPONENT_MODULE_T *VAR_4 = VAR_3->priv->module;
   unsigned int VAR_5 = VAR_2->priv->module->track;
   MMAL_STATUS_T VAR_6;

   if(!VAR_4->container || VAR_5 >= VAR_4->container->tracks_num)
      return VAR_0;



   VAR_6 = FUNC_0(VAR_2);
   if(VAR_6 != VAR_1)
      return VAR_6;

   VAR_4->container->tracks[VAR_5]->is_enabled = 0;
   return VAR_1;
}
