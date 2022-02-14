
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {TYPE_3__* priv; } ;
struct TYPE_17__ {unsigned int output_num; TYPE_5__* control; TYPE_7__** output; TYPE_1__* priv; } ;
struct TYPE_16__ {TYPE_4__* priv; } ;
struct TYPE_15__ {int pf_parameter_set; } ;
struct TYPE_14__ {TYPE_2__* module; int pf_send; int pf_flush; int pf_disable; int pf_enable; } ;
struct TYPE_13__ {int queue; } ;
struct TYPE_12__ {int (* pf_destroy ) (TYPE_6__*) ;int * module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_MODULE_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;
typedef int MMAL_COMPONENT_MODULE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int ) ;
 TYPE_7__** FUNC_4 (TYPE_6__*,unsigned int,int ,int) ;
 int FUNC_5 () ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_6 (int,char*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_7(const char *VAR_9, MMAL_COMPONENT_T *VAR_10)
{
   MMAL_COMPONENT_MODULE_T *VAR_11;
   unsigned int VAR_12, VAR_13;
   MMAL_STATUS_T VAR_14 = VAR_0;
   FUNC_0(VAR_9);


   VAR_10->priv->module = VAR_11 = FUNC_6(sizeof(*VAR_11), "mmal module");
   if (!VAR_11)
      return VAR_0;
   FUNC_2(VAR_11, 0, sizeof(*VAR_11));

   VAR_10->priv->pf_destroy = FUNC_1;



   VAR_12 = 3;



   VAR_10->output = FUNC_4(VAR_10, VAR_12, VAR_1,
                                        sizeof(MMAL_PORT_MODULE_T));
   if(!VAR_10->output)
      goto error;
   VAR_10->output_num = VAR_12;

   for(VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
   {
      VAR_10->output[VAR_13]->priv->pf_enable = VAR_4;
      VAR_10->output[VAR_13]->priv->pf_disable = VAR_3;
      VAR_10->output[VAR_13]->priv->pf_flush = VAR_5;
      VAR_10->output[VAR_13]->priv->pf_send = VAR_6;
      VAR_10->output[VAR_13]->priv->module->queue = FUNC_5();
      if(!VAR_10->output[VAR_13]->priv->module->queue)
         goto error;
   }
   VAR_10->control->priv->pf_parameter_set = VAR_8;

   VAR_14 = FUNC_3(VAR_10, VAR_7);
   if (VAR_14 != VAR_2)
      goto error;

   return VAR_2;

 error:
   FUNC_1(VAR_10);
   return VAR_14;
}
