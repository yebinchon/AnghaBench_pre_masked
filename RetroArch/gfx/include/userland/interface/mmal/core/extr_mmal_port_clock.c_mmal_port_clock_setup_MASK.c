
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* user_data; } ;
struct TYPE_9__ {TYPE_5__* clock; int queue; int event_cb; } ;
struct TYPE_8__ {int buffer_size; int buffer_size_min; int capabilities; TYPE_1__* priv; void* buffer_num_recommended; void* buffer_num_min; int name; } ;
struct TYPE_7__ {int pf_payload_free; int pf_payload_alloc; int pf_connect; int pf_parameter_get; int pf_parameter_set; int pf_flush; int pf_send; int pf_disable; int pf_enable; int pf_set_format; TYPE_3__* clock; scalar_t__ module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PORT_CLOCK_T ;
typedef int MMAL_PORT_CLOCK_EVENT_CB ;
typedef int MMAL_CLOCK_EVENT_T ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_5__**) ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_PORT_T *VAR_14, unsigned int VAR_15,
                                           MMAL_PORT_CLOCK_EVENT_CB VAR_16)
{
   MMAL_STATUS_T VAR_17;

   VAR_14->priv->clock = (MMAL_PORT_CLOCK_T*)((char*)(VAR_14->priv->module) + VAR_15);

   VAR_17 = FUNC_1(&VAR_14->priv->clock->clock);
   if (VAR_17 != VAR_3)
   {
      FUNC_0("failed to create clock module on port %s (%s)",
                VAR_14->name, FUNC_4(VAR_17));
      return VAR_17;
   }
   VAR_14->priv->clock->clock->user_data = VAR_14;

   VAR_14->buffer_size = sizeof(MMAL_CLOCK_EVENT_T);
   VAR_14->buffer_size_min = sizeof(MMAL_CLOCK_EVENT_T);
   VAR_14->buffer_num_min = VAR_2;
   VAR_14->buffer_num_recommended = VAR_2;

   VAR_14->priv->clock->event_cb = VAR_16;
   VAR_14->priv->clock->queue = FUNC_3();
   if (!VAR_14->priv->clock->queue)
   {
      FUNC_2(VAR_14->priv->clock->clock);
      return VAR_0;
   }

   VAR_14->priv->pf_set_format = VAR_13;
   VAR_14->priv->pf_enable = VAR_6;
   VAR_14->priv->pf_disable = VAR_5;
   VAR_14->priv->pf_send = VAR_12;
   VAR_14->priv->pf_flush = VAR_7;
   VAR_14->priv->pf_parameter_set = VAR_9;
   VAR_14->priv->pf_parameter_get = VAR_8;
   VAR_14->priv->pf_connect = VAR_4;






   return VAR_17;
}
