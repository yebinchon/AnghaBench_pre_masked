
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_19__ {unsigned int input_num; unsigned int output_num; TYPE_7__** output; TYPE_4__** input; TYPE_1__* priv; } ;
struct TYPE_18__ {int buffer_num_min; TYPE_6__* priv; int capabilities; scalar_t__ buffer_num_recommended; } ;
struct TYPE_17__ {TYPE_5__* module; void* pf_parameter_set; void* pf_set_format; void* pf_send; void* pf_flush; void* pf_disable; void* pf_enable; } ;
struct TYPE_16__ {void* queue; } ;
struct TYPE_15__ {int buffer_num_min; TYPE_3__* priv; scalar_t__ buffer_num_recommended; } ;
struct TYPE_14__ {TYPE_2__* module; void* pf_parameter_set; void* pf_set_format; void* pf_send; void* pf_flush; void* pf_disable; void* pf_enable; } ;
struct TYPE_13__ {void* queue; } ;
struct TYPE_12__ {int (* pf_destroy ) (TYPE_8__*) ;int * module; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_MODULE_T ;
typedef TYPE_8__ MMAL_COMPONENT_T ;
typedef int MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int *,int ,int) ;
 void* FUNC_2 (TYPE_8__*,void*,int ,int) ;
 void* FUNC_3 () ;
 int FUNC_4 (TYPE_8__*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int * FUNC_5 (int,char*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_6(const char *VAR_12, MMAL_COMPONENT_T *VAR_13)
{
   MMAL_COMPONENT_MODULE_T *VAR_14;
   MMAL_STATUS_T VAR_15 = VAR_0;
   unsigned int VAR_16;
   FUNC_0(VAR_12);


   VAR_13->priv->module = VAR_14 = FUNC_5(sizeof(*VAR_14), "mmal module");
   if (!VAR_14)
      return VAR_0;
   FUNC_1(VAR_14, 0, sizeof(*VAR_14));

   VAR_13->priv->pf_destroy = FUNC_4;


   VAR_13->input = FUNC_2(VAR_13, VAR_5,
                                       VAR_2, sizeof(MMAL_PORT_MODULE_T));
   if(!VAR_13->input)
      goto error;
   VAR_13->input_num = VAR_5;
   for(VAR_16 = 0; VAR_16 < VAR_13->input_num; VAR_16++)
   {
      VAR_13->input[VAR_16]->priv->pf_enable = VAR_7;
      VAR_13->input[VAR_16]->priv->pf_disable = VAR_6;
      VAR_13->input[VAR_16]->priv->pf_flush = VAR_8;
      VAR_13->input[VAR_16]->priv->pf_send = VAR_11;
      VAR_13->input[VAR_16]->priv->pf_set_format = VAR_9;
      VAR_13->input[VAR_16]->priv->pf_parameter_set = VAR_10;
      VAR_13->input[VAR_16]->buffer_num_min = 1;
      VAR_13->input[VAR_16]->buffer_num_recommended = 0;
      VAR_13->input[VAR_16]->priv->module->queue = FUNC_3();
      if(!VAR_13->input[VAR_16]->priv->module->queue)
         goto error;
   }

   VAR_13->output = FUNC_2(VAR_13, VAR_5,
                                        VAR_3, sizeof(MMAL_PORT_MODULE_T));
   if(!VAR_13->output)
      goto error;
   VAR_13->output_num = VAR_5;
   for(VAR_16 = 0; VAR_16 < VAR_13->output_num; VAR_16++)
   {
      VAR_13->output[VAR_16]->priv->pf_enable = VAR_7;
      VAR_13->output[VAR_16]->priv->pf_disable = VAR_6;
      VAR_13->output[VAR_16]->priv->pf_flush = VAR_8;
      VAR_13->output[VAR_16]->priv->pf_send = VAR_11;
      VAR_13->output[VAR_16]->priv->pf_set_format = VAR_9;
      VAR_13->output[VAR_16]->priv->pf_parameter_set = VAR_10;
      VAR_13->output[VAR_16]->buffer_num_min = 1;
      VAR_13->output[VAR_16]->buffer_num_recommended = 0;
      VAR_13->output[VAR_16]->capabilities = VAR_1;
      VAR_13->output[VAR_16]->priv->module->queue = FUNC_3();
      if(!VAR_13->output[VAR_16]->priv->module->queue)
         goto error;
   }

   return VAR_4;

 error:
   FUNC_4(VAR_13);
   return VAR_15;
}
