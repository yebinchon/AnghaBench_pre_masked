
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_22__ {TYPE_3__* priv; } ;
struct TYPE_21__ {int writer; } ;
struct TYPE_20__ {unsigned int input_num; TYPE_5__* control; TYPE_9__** input; TYPE_1__* priv; } ;
struct TYPE_19__ {TYPE_4__* priv; } ;
struct TYPE_18__ {int pf_parameter_set; } ;
struct TYPE_17__ {TYPE_2__* module; int pf_set_format; int pf_send; int pf_flush; int pf_disable; int pf_enable; } ;
struct TYPE_16__ {int format; int queue; } ;
struct TYPE_15__ {int (* pf_destroy ) (TYPE_6__*) ;TYPE_7__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_MODULE_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;
typedef TYPE_7__ MMAL_COMPONENT_MODULE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int ) ;
 TYPE_9__** FUNC_4 (TYPE_6__*,unsigned int,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 TYPE_7__* FUNC_7 (int,char*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_8(const char *VAR_11, MMAL_COMPONENT_T *VAR_12)
{
   MMAL_COMPONENT_MODULE_T *VAR_13;
   MMAL_STATUS_T VAR_14 = VAR_0;
   unsigned int VAR_15;
   FUNC_0(VAR_11);


   VAR_12->priv->module = VAR_13 = FUNC_7(sizeof(*VAR_13), "mmal module");
   if (!VAR_13)
      return VAR_0;
   FUNC_2(VAR_13, 0, sizeof(*VAR_13));
   VAR_13->writer = 1;

   VAR_12->priv->pf_destroy = FUNC_1;



   VAR_12->input = FUNC_4(VAR_12, VAR_3, VAR_1,
                                        sizeof(MMAL_PORT_MODULE_T));
   if(!VAR_12->input)
      goto error;
   VAR_12->input_num = VAR_3;

   for(VAR_15 = 0; VAR_15 < VAR_12->input_num; VAR_15++)
   {
      VAR_12->input[VAR_15]->priv->pf_enable = VAR_5;
      VAR_12->input[VAR_15]->priv->pf_disable = VAR_4;
      VAR_12->input[VAR_15]->priv->pf_flush = VAR_6;
      VAR_12->input[VAR_15]->priv->pf_send = VAR_7;
      VAR_12->input[VAR_15]->priv->pf_set_format = VAR_8;

      VAR_12->input[VAR_15]->priv->module->queue = FUNC_5();
      if(!VAR_12->input[VAR_15]->priv->module->queue)
         goto error;
      VAR_12->input[VAR_15]->priv->module->format = FUNC_6(0);
      if(!VAR_12->input[VAR_15]->priv->module->format)
         goto error;
   }
   VAR_12->control->priv->pf_parameter_set = VAR_10;

   VAR_14 = FUNC_3(VAR_12, VAR_9);
   if (VAR_14 != VAR_2)
      goto error;

   return VAR_2;

 error:
   FUNC_1(VAR_12);
   return VAR_14;
}
