
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int link; int event; int * port; } ;
struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_10__ {TYPE_2__* module; } ;
struct TYPE_8__ {int queue; int free; } ;
struct TYPE_9__ {TYPE_1__ events; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;
typedef int MMAL_CLOCK_EVENT_T ;
typedef TYPE_5__ CLOCK_PORT_EVENT_T ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_COMPONENT_T *VAR_1, MMAL_PORT_T *VAR_2, const MMAL_CLOCK_EVENT_T *VAR_3)
{
   CLOCK_PORT_EVENT_T *VAR_4 = (CLOCK_PORT_EVENT_T*)FUNC_2(VAR_1->priv->module->events.free);
   if (!VAR_4)
   {
      FUNC_0("no event slots available");
      return VAR_0;
   }

   VAR_4->port = VAR_2;
   VAR_4->event = *VAR_3;
   FUNC_3(VAR_1->priv->module->events.queue, &VAR_4->link);

   return FUNC_1(VAR_1);
}
