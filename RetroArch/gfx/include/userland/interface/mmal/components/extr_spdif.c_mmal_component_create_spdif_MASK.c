
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_27__ {int channels; int bits_per_sample; } ;
struct TYPE_28__ {TYPE_8__ audio; } ;
struct TYPE_26__ {int buffer_num_recommended; int buffer_num_min; int buffer_size_recommended; int buffer_size_min; TYPE_6__* format; TYPE_3__* priv; } ;
struct TYPE_25__ {void* encoding; void* type; } ;
struct TYPE_24__ {TYPE_4__* module; int pf_set_format; void* pf_send; void* pf_flush; void* pf_disable; void* pf_enable; } ;
struct TYPE_23__ {void* queue; } ;
struct TYPE_22__ {TYPE_2__* module; int pf_set_format; void* pf_send; void* pf_flush; void* pf_disable; void* pf_enable; } ;
struct TYPE_21__ {void* queue; } ;
struct TYPE_20__ {int (* pf_destroy ) (TYPE_12__*) ;int * module; } ;
struct TYPE_19__ {int input_num; int output_num; TYPE_11__** output; TYPE_7__** input; TYPE_1__* priv; } ;
struct TYPE_18__ {int buffer_num_recommended; int buffer_num_min; int buffer_size_recommended; int buffer_size_min; TYPE_10__* format; TYPE_5__* priv; } ;
struct TYPE_17__ {TYPE_9__* es; void* encoding; void* type; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_MODULE_T ;
typedef TYPE_12__ MMAL_COMPONENT_T ;
typedef int MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_12__*,int ) ;
 void* FUNC_3 (TYPE_12__*,int,int ,int) ;
 void* FUNC_4 () ;
 int FUNC_5 (TYPE_12__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int * FUNC_6 (int,char*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_7(const char *VAR_17, MMAL_COMPONENT_T *VAR_18)
{
   MMAL_COMPONENT_MODULE_T *VAR_19;
   MMAL_STATUS_T VAR_20 = VAR_3;
   FUNC_0(VAR_17);


   VAR_18->priv->module = VAR_19 = FUNC_6(sizeof(*VAR_19), "mmal module");
   if (!VAR_19)
      return VAR_3;
   FUNC_1(VAR_19, 0, sizeof(*VAR_19));

   VAR_18->priv->pf_destroy = FUNC_5;


   VAR_18->input = FUNC_3(VAR_18, 1, VAR_5, sizeof(MMAL_PORT_MODULE_T));
   if(!VAR_18->input)
      goto error;
   VAR_18->input_num = 1;
   VAR_18->input[0]->priv->pf_enable = VAR_14;
   VAR_18->input[0]->priv->pf_disable = VAR_13;
   VAR_18->input[0]->priv->pf_flush = VAR_15;
   VAR_18->input[0]->priv->pf_send = VAR_16;
   VAR_18->input[0]->priv->pf_set_format = VAR_11;
   VAR_18->input[0]->priv->module->queue = FUNC_4();
   if(!VAR_18->input[0]->priv->module->queue)
      goto error;

   VAR_18->output = FUNC_3(VAR_18, 1, VAR_6, sizeof(MMAL_PORT_MODULE_T));
   if(!VAR_18->output)
      goto error;
   VAR_18->output_num = 1;
   VAR_18->output[0]->priv->pf_enable = VAR_14;
   VAR_18->output[0]->priv->pf_disable = VAR_13;
   VAR_18->output[0]->priv->pf_flush = VAR_15;
   VAR_18->output[0]->priv->pf_send = VAR_16;
   VAR_18->output[0]->priv->pf_set_format = VAR_12;
   VAR_18->output[0]->priv->module->queue = FUNC_4();
   if(!VAR_18->output[0]->priv->module->queue)
      goto error;

   VAR_20 = FUNC_2(VAR_18, VAR_10);
   if (VAR_20 != VAR_7)
      goto error;

   VAR_18->input[0]->format->type = VAR_4;
   VAR_18->input[0]->format->encoding = VAR_2;
   VAR_18->input[0]->buffer_size_min =
      VAR_18->input[0]->buffer_size_recommended = VAR_1;
   VAR_18->input[0]->buffer_num_min =
      VAR_18->input[0]->buffer_num_recommended = VAR_0;

   VAR_18->output[0]->format->type = VAR_4;
   VAR_18->output[0]->format->encoding = VAR_2;
   VAR_18->output[0]->format->es->audio.channels = 2;
   VAR_18->output[0]->format->es->audio.bits_per_sample = 16;
   VAR_18->output[0]->buffer_size_min =
      VAR_18->output[0]->buffer_size_recommended = VAR_9;
   VAR_18->output[0]->buffer_num_min =
      VAR_18->output[0]->buffer_num_recommended = VAR_8;

   return VAR_7;

 error:
   FUNC_5(VAR_18);
   return VAR_20;
}
