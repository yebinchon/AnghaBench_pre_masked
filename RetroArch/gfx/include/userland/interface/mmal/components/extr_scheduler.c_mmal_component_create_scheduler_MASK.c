
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_21__ {unsigned int input_num; unsigned int output_num; int clock_num; int clock; TYPE_7__** output; TYPE_4__** input; TYPE_1__* priv; } ;
struct TYPE_20__ {int buffer_num_min; TYPE_6__* priv; int capabilities; scalar_t__ buffer_num_recommended; } ;
struct TYPE_19__ {TYPE_5__* module; void* pf_parameter_set; int pf_set_format; void* pf_send; void* pf_flush; void* pf_disable; void* pf_enable; } ;
struct TYPE_18__ {void* queue; } ;
struct TYPE_17__ {int buffer_num_min; TYPE_3__* priv; int capabilities; scalar_t__ buffer_num_recommended; } ;
struct TYPE_16__ {TYPE_2__* module; void* pf_parameter_set; int pf_set_format; void* pf_send; void* pf_flush; void* pf_disable; void* pf_enable; } ;
struct TYPE_15__ {int last_ts; void* queue; } ;
struct TYPE_14__ {int (* pf_destroy ) (TYPE_8__*) ;int * module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_MODULE_T ;
typedef TYPE_8__ MMAL_COMPONENT_T ;
typedef int MMAL_COMPONENT_MODULE_T ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_8__*,int ) ;
 void* FUNC_2 (TYPE_8__*,void*,int ,int) ;
 int FUNC_3 (TYPE_8__*,int ,int ,int *) ;
 void* FUNC_4 () ;
 int VAR_10 ;
 int FUNC_5 (TYPE_8__*) ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int * FUNC_7 (int,int,char*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_8(const char *VAR_18, MMAL_COMPONENT_T *VAR_19)
{
   MMAL_COMPONENT_MODULE_T *VAR_20;
   MMAL_STATUS_T VAR_21 = VAR_0;
   int VAR_22 = 0;
   unsigned int VAR_23;


   VAR_19->priv->module = VAR_20 = FUNC_7(1, sizeof(*VAR_20), "mmal module");
   if (!VAR_20)
      return VAR_0;

   VAR_19->priv->pf_destroy = FUNC_5;


   VAR_19->input = FUNC_2(VAR_19, VAR_8,
                                       VAR_3, sizeof(MMAL_PORT_MODULE_T));
   if (!VAR_19->input)
      goto error;
   VAR_19->input_num = VAR_8;
   for (VAR_23 = 0; VAR_23 < VAR_19->input_num; VAR_23++)
   {
      VAR_19->input[VAR_23]->priv->pf_enable = VAR_14;
      VAR_19->input[VAR_23]->priv->pf_disable = VAR_13;
      VAR_19->input[VAR_23]->priv->pf_flush = VAR_15;
      VAR_19->input[VAR_23]->priv->pf_send = VAR_17;
      VAR_19->input[VAR_23]->priv->pf_set_format = VAR_11;
      VAR_19->input[VAR_23]->priv->pf_parameter_set = VAR_16;
      VAR_19->input[VAR_23]->buffer_num_min = 1;
      VAR_19->input[VAR_23]->buffer_num_recommended = 0;
      VAR_19->input[VAR_23]->capabilities = VAR_2;
      VAR_19->input[VAR_23]->priv->module->queue = FUNC_4();
      if (!VAR_19->input[VAR_23]->priv->module->queue)
         goto error;
      VAR_19->input[VAR_23]->priv->module->last_ts = VAR_6;
   }


   if (FUNC_6(VAR_18, ".copy"))
   {
      FUNC_0("disable passthrough on output ports");
      VAR_22 = 1;
   }

   VAR_19->output = FUNC_2(VAR_19, VAR_9,
                                        VAR_4, sizeof(MMAL_PORT_MODULE_T));
   if (!VAR_19->output)
      goto error;
   VAR_19->output_num = VAR_9;
   for (VAR_23 = 0; VAR_23 < VAR_19->output_num; VAR_23++)
   {
      VAR_19->output[VAR_23]->priv->pf_enable = VAR_14;
      VAR_19->output[VAR_23]->priv->pf_disable = VAR_13;
      VAR_19->output[VAR_23]->priv->pf_flush = VAR_15;
      VAR_19->output[VAR_23]->priv->pf_send = VAR_17;
      VAR_19->output[VAR_23]->priv->pf_set_format = VAR_12;
      VAR_19->output[VAR_23]->priv->pf_parameter_set = VAR_16;
      VAR_19->output[VAR_23]->buffer_num_min = 1;
      VAR_19->output[VAR_23]->buffer_num_recommended = 0;
      VAR_19->output[VAR_23]->capabilities = VAR_22 ? 0 : VAR_1;
      VAR_19->output[VAR_23]->priv->module->queue = FUNC_4();
      if (!VAR_19->output[VAR_23]->priv->module->queue)
         goto error;
   }


   VAR_19->clock = FUNC_3(VAR_19, VAR_7, 0, ((void*)0));
   if (!VAR_19->clock)
      goto error;
   VAR_19->clock_num = VAR_7;

   VAR_21 = FUNC_1(VAR_19, VAR_10);
   if (VAR_21 != VAR_5)
      goto error;

   return VAR_5;

error:
   FUNC_5(VAR_19);
   return VAR_21;
}
