
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* priv; } ;
struct TYPE_13__ {scalar_t__ container; } ;
struct TYPE_12__ {unsigned int input_num; unsigned int output_num; TYPE_7__** output; TYPE_7__** input; TYPE_1__* priv; } ;
struct TYPE_11__ {TYPE_2__* module; } ;
struct TYPE_10__ {scalar_t__ queue; scalar_t__ format; } ;
struct TYPE_9__ {TYPE_5__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;
typedef TYPE_5__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__**,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_COMPONENT_T *VAR_1)
{
   MMAL_COMPONENT_MODULE_T *VAR_2 = VAR_1->priv->module;
   unsigned int VAR_3;

   if(VAR_2->container)
      FUNC_2(VAR_2->container);

   for(VAR_3 = 0; VAR_3 < VAR_1->input_num; VAR_3++)
   {
      if(VAR_1->input[VAR_3]->priv->module->queue)
         FUNC_1(VAR_1->input[VAR_3]->priv->module->queue);
      if(VAR_1->input[VAR_3]->priv->module->format)
         FUNC_3(VAR_1->input[VAR_3]->priv->module->format);
   }
   if(VAR_1->input_num)
      FUNC_0(VAR_1->input, VAR_1->input_num);

   for(VAR_3 = 0; VAR_3 < VAR_1->output_num; VAR_3++)
      if(VAR_1->output[VAR_3]->priv->module->queue)
         FUNC_1(VAR_1->output[VAR_3]->priv->module->queue);
   if(VAR_1->output_num)
      FUNC_0(VAR_1->output, VAR_1->output_num);

   FUNC_4(VAR_2);
   return VAR_0;
}
