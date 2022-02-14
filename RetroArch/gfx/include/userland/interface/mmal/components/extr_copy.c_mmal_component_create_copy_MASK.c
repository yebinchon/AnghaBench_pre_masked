
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_20__ {int input_num; int output_num; TYPE_7__** output; TYPE_4__** input; TYPE_1__* priv; } ;
struct TYPE_19__ {int buffer_num_min; TYPE_6__* priv; scalar_t__ buffer_num_recommended; } ;
struct TYPE_18__ {TYPE_5__* module; int pf_set_format; void* pf_send; void* pf_flush; void* pf_disable; void* pf_enable; } ;
struct TYPE_17__ {void* queue; } ;
struct TYPE_16__ {int buffer_num_min; TYPE_3__* priv; scalar_t__ buffer_num_recommended; } ;
struct TYPE_15__ {TYPE_2__* module; int pf_set_format; void* pf_send; void* pf_flush; void* pf_disable; void* pf_enable; } ;
struct TYPE_14__ {void* queue; } ;
struct TYPE_13__ {int (* pf_destroy ) (TYPE_8__*) ;int * module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_MODULE_T ;
typedef TYPE_8__ MMAL_COMPONENT_T ;
typedef int MMAL_COMPONENT_MODULE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_8__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_8__*,int ) ;
 void* FUNC_4 (TYPE_8__*,int,int ,int) ;
 void* FUNC_5 () ;
 int * FUNC_6 (int,char*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_7(const char *VAR_11, MMAL_COMPONENT_T *VAR_12)
{
   MMAL_COMPONENT_MODULE_T *VAR_13;
   MMAL_STATUS_T VAR_14 = VAR_0;
   FUNC_0(VAR_11);


   VAR_12->priv->module = VAR_13 = FUNC_6(sizeof(*VAR_13), "mmal module");
   if (!VAR_13)
      return VAR_0;
   FUNC_2(VAR_13, 0, sizeof(*VAR_13));

   VAR_12->priv->pf_destroy = FUNC_1;


   VAR_12->input = FUNC_4(VAR_12, 1, VAR_1, sizeof(MMAL_PORT_MODULE_T));
   if(!VAR_12->input)
      goto error;
   VAR_12->input_num = 1;
   VAR_12->input[0]->priv->pf_enable = VAR_8;
   VAR_12->input[0]->priv->pf_disable = VAR_7;
   VAR_12->input[0]->priv->pf_flush = VAR_9;
   VAR_12->input[0]->priv->pf_send = VAR_10;
   VAR_12->input[0]->priv->pf_set_format = VAR_5;
   VAR_12->input[0]->buffer_num_min = 1;
   VAR_12->input[0]->buffer_num_recommended = 0;
   VAR_12->input[0]->priv->module->queue = FUNC_5();
   if(!VAR_12->input[0]->priv->module->queue)
      goto error;

   VAR_12->output = FUNC_4(VAR_12, 1, VAR_2, sizeof(MMAL_PORT_MODULE_T));
   if(!VAR_12->output)
      goto error;
   VAR_12->output_num = 1;
   VAR_12->output[0]->priv->pf_enable = VAR_8;
   VAR_12->output[0]->priv->pf_disable = VAR_7;
   VAR_12->output[0]->priv->pf_flush = VAR_9;
   VAR_12->output[0]->priv->pf_send = VAR_10;
   VAR_12->output[0]->priv->pf_set_format = VAR_6;
   VAR_12->output[0]->buffer_num_min = 1;
   VAR_12->output[0]->buffer_num_recommended = 0;
   VAR_12->output[0]->priv->module->queue = FUNC_5();
   if(!VAR_12->output[0]->priv->module->queue)
      goto error;

   VAR_14 = FUNC_3(VAR_12, VAR_4);
   if (VAR_14 != VAR_3)
      goto error;

   return VAR_3;

 error:
   FUNC_1(VAR_12);
   return VAR_14;
}
