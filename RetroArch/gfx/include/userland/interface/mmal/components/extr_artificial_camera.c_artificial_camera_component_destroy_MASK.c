
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_10__ {unsigned int output_num; TYPE_1__* priv; TYPE_5__** output; } ;
struct TYPE_9__ {TYPE_2__* module; } ;
struct TYPE_8__ {scalar_t__ queue; } ;
struct TYPE_7__ {int module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__**,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMAL_COMPONENT_T *VAR_1)
{
   unsigned int VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_1->output_num; VAR_2++)
      if (VAR_1->output[VAR_2]->priv->module->queue)
         FUNC_1(VAR_1->output[VAR_2]->priv->module->queue);

   if(VAR_1->output_num)
      FUNC_0(VAR_1->output, VAR_1->output_num);

   FUNC_2(VAR_1->priv->module);
   return VAR_0;
}
