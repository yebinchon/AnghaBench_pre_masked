
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ length; } ;
struct TYPE_13__ {TYPE_7__* buffer; } ;
struct TYPE_15__ {TYPE_4__ event; int port; int link; } ;
struct TYPE_14__ {TYPE_3__* priv; } ;
struct TYPE_12__ {TYPE_2__* module; } ;
struct TYPE_10__ {int free; int queue; } ;
struct TYPE_11__ {TYPE_1__ events; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_COMPONENT_T ;
typedef TYPE_6__ CLOCK_PORT_EVENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_7__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMAL_COMPONENT_T *VAR_2, CLOCK_PORT_EVENT_T *VAR_3)
{
   CLOCK_PORT_EVENT_T *VAR_4 = (CLOCK_PORT_EVENT_T*)FUNC_0(VAR_2->priv->module->events.queue);
   if (!VAR_4)
      return VAR_0;

   VAR_3->port = VAR_4->port;
   VAR_3->event = VAR_4->event;
   FUNC_1(VAR_2->priv->module->events.free, &VAR_4->link);

   if (VAR_3->event.buffer)
   {
      VAR_3->event.buffer->length = 0;
      FUNC_2(VAR_3->port, VAR_3->event.buffer);
   }

   return VAR_1;
}
