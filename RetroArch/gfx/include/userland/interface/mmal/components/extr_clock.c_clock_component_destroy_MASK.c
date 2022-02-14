
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {TYPE_2__* priv; } ;
struct TYPE_13__ {scalar_t__ queue; scalar_t__ free; } ;
struct TYPE_15__ {TYPE_4__ events; } ;
struct TYPE_14__ {int clock_num; TYPE_8__** clock; TYPE_3__* priv; } ;
struct TYPE_12__ {TYPE_6__* module; } ;
struct TYPE_11__ {TYPE_1__* module; } ;
struct TYPE_10__ {TYPE_6__* stream; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_COMPONENT_T ;
typedef TYPE_6__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_8__**,unsigned int) ;
 int FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMAL_COMPONENT_T *VAR_1)
{
   MMAL_COMPONENT_MODULE_T *VAR_2 = VAR_1->priv->module;
   unsigned int VAR_3;

   if (VAR_2->events.free)
      FUNC_0(VAR_2->events.free);

   if (VAR_2->events.queue)
      FUNC_0(VAR_2->events.queue);

   if (VAR_1->clock_num)
   {
      for (VAR_3 = 0; VAR_3 < VAR_1->clock_num; ++VAR_3)
         FUNC_2(VAR_1->clock[VAR_3]->priv->module->stream);

      FUNC_1(VAR_1->clock, VAR_1->clock_num);
   }

   FUNC_2(VAR_2);

   return VAR_0;
}
