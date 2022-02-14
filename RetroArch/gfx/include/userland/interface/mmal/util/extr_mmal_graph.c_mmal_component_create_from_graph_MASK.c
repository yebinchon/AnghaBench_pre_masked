
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_16__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_35__ {int name; TYPE_8__* priv; } ;
struct TYPE_34__ {int pf_parameter_set; int pf_parameter_get; } ;
struct TYPE_33__ {int pf_disable; int pf_enable; int (* pf_destroy ) (TYPE_12__*) ;TYPE_11__* module; } ;
struct TYPE_32__ {TYPE_16__* control; } ;
struct TYPE_31__ {void* user_data; int callback; } ;
struct TYPE_30__ {TYPE_3__* priv; } ;
struct TYPE_29__ {scalar_t__ pf_connect; } ;
struct TYPE_28__ {TYPE_1__* priv; } ;
struct TYPE_27__ {scalar_t__ pf_connect; } ;
struct TYPE_26__ {void* userdata; } ;
struct TYPE_25__ {TYPE_10__* priv; } ;
struct TYPE_24__ {unsigned int input_num; unsigned int output_num; unsigned int clock_num; TYPE_9__* control; TYPE_7__* priv; TYPE_13__** clock; TYPE_13__** output; TYPE_13__** input; } ;
struct TYPE_23__ {unsigned int input_num; unsigned int output_num; unsigned int clock_num; unsigned int connection_num; unsigned int component_num; TYPE_6__** component; TYPE_12__* graph_component; TYPE_5__** connection; TYPE_4__** output; TYPE_2__** input; } ;
struct TYPE_22__ {void* pf_payload_free; void* pf_payload_alloc; int * pf_connect; void* pf_parameter_set; void* pf_parameter_get; void* pf_set_format; void* pf_send; void* pf_flush; void* pf_disable; void* pf_enable; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_11__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_12__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_12__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 scalar_t__ FUNC_3 (TYPE_11__*,TYPE_13__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_12__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_16__*,int ) ;
 void* FUNC_6 (TYPE_12__*,unsigned int,int ,int ) ;
 TYPE_13__** FUNC_7 (TYPE_12__*,unsigned int,int ,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_8(const char *VAR_22, MMAL_COMPONENT_T *VAR_23)
{
   MMAL_STATUS_T VAR_24 = VAR_0;

   MMAL_GRAPH_PRIVATE_T *VAR_25 = VAR_23->priv->module;
   unsigned int VAR_26;
   FUNC_1(VAR_22);

   VAR_23->control->priv->pf_parameter_get = VAR_11;
   VAR_23->control->priv->pf_parameter_set = VAR_12;


   if(VAR_25->input_num)
   {
      VAR_23->input = FUNC_6(VAR_23, VAR_25->input_num, VAR_1, 0);
      if(!VAR_23->input)
         goto error;
   }
   VAR_23->input_num = VAR_25->input_num;
   for(VAR_26 = 0; VAR_26 < VAR_23->input_num; VAR_26++)
   {
      VAR_23->input[VAR_26]->priv->pf_enable = VAR_14;
      VAR_23->input[VAR_26]->priv->pf_disable = VAR_13;
      VAR_23->input[VAR_26]->priv->pf_flush = VAR_15;
      VAR_23->input[VAR_26]->priv->pf_send = VAR_21;
      VAR_23->input[VAR_26]->priv->pf_set_format = VAR_16;
      VAR_23->input[VAR_26]->priv->pf_parameter_get = VAR_17;
      VAR_23->input[VAR_26]->priv->pf_parameter_set = VAR_18;
      if (VAR_25->input[VAR_26]->priv->pf_connect && 0 )
         VAR_23->input[VAR_26]->priv->pf_connect = VAR_10;
      VAR_23->input[VAR_26]->priv->pf_payload_alloc = VAR_19;
      VAR_23->input[VAR_26]->priv->pf_payload_free = VAR_20;


      VAR_24 = FUNC_3(VAR_25, VAR_23->input[VAR_26], VAR_4);
      if (VAR_24 != VAR_3)
         goto error;
   }
   if(VAR_25->output_num)
   {
      VAR_23->output = FUNC_6(VAR_23, VAR_25->output_num, VAR_2, 0);
      if(!VAR_23->output)
         goto error;
   }
   VAR_23->output_num = VAR_25->output_num;
   for(VAR_26 = 0; VAR_26 < VAR_23->output_num; VAR_26++)
   {
      VAR_23->output[VAR_26]->priv->pf_enable = VAR_14;
      VAR_23->output[VAR_26]->priv->pf_disable = VAR_13;
      VAR_23->output[VAR_26]->priv->pf_flush = VAR_15;
      VAR_23->output[VAR_26]->priv->pf_send = VAR_21;
      VAR_23->output[VAR_26]->priv->pf_set_format = VAR_16;
      VAR_23->output[VAR_26]->priv->pf_parameter_get = VAR_17;
      VAR_23->output[VAR_26]->priv->pf_parameter_set = VAR_18;
      if (VAR_25->output[VAR_26]->priv->pf_connect && 0 )
         VAR_23->output[VAR_26]->priv->pf_connect = VAR_10;
      VAR_23->output[VAR_26]->priv->pf_payload_alloc = VAR_19;
      VAR_23->output[VAR_26]->priv->pf_payload_free = VAR_20;


      VAR_24 = FUNC_3(VAR_25, VAR_23->output[VAR_26], VAR_4);
      if (VAR_24 != VAR_3)
         goto error;
   }
   if(VAR_25->clock_num)
   {
      VAR_23->clock = FUNC_7(VAR_23, VAR_25->clock_num, 0, ((void*)0));
      if(!VAR_23->clock)
      {
         VAR_24 = VAR_0;
         goto error;
      }
   }
   VAR_23->clock_num = VAR_25->clock_num;
   for(VAR_26 = 0; VAR_26 < VAR_23->clock_num; VAR_26++)
   {
      VAR_23->clock[VAR_26]->priv->pf_enable = VAR_14;
      VAR_23->clock[VAR_26]->priv->pf_disable = VAR_13;
      VAR_23->clock[VAR_26]->priv->pf_flush = VAR_15;
      VAR_23->clock[VAR_26]->priv->pf_send = VAR_21;
      VAR_23->clock[VAR_26]->priv->pf_set_format = VAR_16;
      VAR_23->clock[VAR_26]->priv->pf_parameter_get = VAR_17;
      VAR_23->clock[VAR_26]->priv->pf_parameter_set = VAR_18;
      VAR_23->clock[VAR_26]->priv->pf_connect = ((void*)0);
      VAR_23->clock[VAR_26]->priv->pf_payload_alloc = VAR_19;
      VAR_23->clock[VAR_26]->priv->pf_payload_free = VAR_20;


      VAR_24 = FUNC_3(VAR_25, VAR_23->clock[VAR_26], VAR_4);
      if (VAR_24 != VAR_3)
         goto error;
   }

   VAR_24 = FUNC_4(VAR_23, VAR_9);
   if (VAR_24 != VAR_3)
      goto error;



   for (VAR_26 = 0; VAR_26 < VAR_25->connection_num; VAR_26++)
   {
      VAR_25->connection[VAR_26]->callback = VAR_5;
      VAR_25->connection[VAR_26]->user_data = (void *)VAR_23;
   }


   VAR_23->priv->pf_destroy = FUNC_2;
   VAR_23->priv->pf_enable = VAR_8;
   VAR_23->priv->pf_disable = VAR_7;
   VAR_25->graph_component = VAR_23;


   for (VAR_26 = 0; VAR_26 < VAR_25->component_num; VAR_26++)
   {
      VAR_25->component[VAR_26]->control->userdata = (void *)VAR_23;
      VAR_24 = FUNC_5(VAR_25->component[VAR_26]->control, VAR_6);
      if (VAR_24 != VAR_3)
         FUNC_0("could not enable port %s", VAR_23->control->name);
   }

   return VAR_3;

 error:
   FUNC_2(VAR_23);
   return VAR_24;
}
