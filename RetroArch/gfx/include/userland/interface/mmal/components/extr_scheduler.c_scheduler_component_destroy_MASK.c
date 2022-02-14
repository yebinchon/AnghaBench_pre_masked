
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {unsigned int input_num; unsigned int output_num; TYPE_3__* priv; scalar_t__ clock_num; int clock; TYPE_6__** output; TYPE_6__** input; } ;
struct TYPE_9__ {int module; } ;
struct TYPE_8__ {TYPE_1__* module; } ;
struct TYPE_7__ {scalar_t__ queue; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_6__**,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_COMPONENT_T *VAR_1)
{
   unsigned int VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_1->input_num; VAR_2++)
      if (VAR_1->input[VAR_2]->priv->module->queue)
         FUNC_2(VAR_1->input[VAR_2]->priv->module->queue);
   if (VAR_1->input_num)
      FUNC_1(VAR_1->input, VAR_1->input_num);

   for (VAR_2 = 0; VAR_2 < VAR_1->output_num; VAR_2++)
      if (VAR_1->output[VAR_2]->priv->module->queue)
         FUNC_2(VAR_1->output[VAR_2]->priv->module->queue);
   if (VAR_1->output_num)
      FUNC_1(VAR_1->output, VAR_1->output_num);

   if (VAR_1->clock_num)
      FUNC_0(VAR_1->clock, VAR_1->clock_num);

   FUNC_3(VAR_1->priv->module);
   return VAR_0;
}
