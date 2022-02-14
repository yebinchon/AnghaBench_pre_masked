
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int (* pf_destroy ) (TYPE_4__*) ;} ;
struct TYPE_9__ {TYPE_4__ graph; } ;
struct TYPE_8__ {scalar_t__ clock_num; int clock; scalar_t__ output_num; int output; scalar_t__ input_num; int input; TYPE_1__* priv; } ;
struct TYPE_7__ {TYPE_3__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_COMPONENT_T *VAR_1)
{
   MMAL_COMPONENT_MODULE_T *VAR_2 = VAR_1->priv->module;


   if (VAR_2->graph.pf_destroy)
      VAR_2->graph.pf_destroy(&VAR_2->graph);
   VAR_2->graph.pf_destroy = ((void*)0);

   if (VAR_1->input_num)
      FUNC_2(VAR_1->input, VAR_1->input_num);

   if (VAR_1->output_num)
      FUNC_2(VAR_1->output, VAR_1->output_num);

   if (VAR_1->clock_num)
      FUNC_1(VAR_1->clock, VAR_1->clock_num);


   FUNC_0(&VAR_2->graph);
   return VAR_0;
}
