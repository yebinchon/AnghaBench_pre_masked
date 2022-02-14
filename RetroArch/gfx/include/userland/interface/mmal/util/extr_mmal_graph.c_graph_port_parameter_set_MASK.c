
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ (* pf_parameter_set ) (TYPE_6__*,TYPE_2__*,TYPE_3__ const*) ;} ;
struct TYPE_21__ {unsigned int input_num; unsigned int output_num; int * output; int * input; TYPE_1__* priv; } ;
struct TYPE_20__ {TYPE_6__ graph; } ;
struct TYPE_19__ {scalar_t__ id; } ;
struct TYPE_18__ {TYPE_5__* component; } ;
struct TYPE_17__ {TYPE_4__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_PARAMETER_HEADER_T ;
typedef TYPE_4__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_5__ MMAL_COMPONENT_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_0 (TYPE_4__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_3__ const*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_2__*,TYPE_3__ const*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_4,
   const MMAL_PARAMETER_HEADER_T *VAR_5)
{
   MMAL_GRAPH_PRIVATE_T *VAR_6 = VAR_4->component->priv->module;
   MMAL_STATUS_T VAR_7;
   MMAL_PORT_T *VAR_8;


   if (VAR_6->graph.pf_parameter_set)
   {
      VAR_7 = VAR_6->graph.pf_parameter_set(&VAR_6->graph, VAR_4, VAR_5);
      if (VAR_7 != VAR_1)
         return VAR_7;
   }

   VAR_8 = FUNC_0(VAR_6, VAR_4);
   if (!VAR_8)
      return VAR_0;


   VAR_7 = FUNC_2(VAR_8, VAR_5);
   if (VAR_7 != VAR_3)
      goto end;

   if (VAR_5->id == VAR_2)
   {

      MMAL_COMPONENT_T *VAR_9 = VAR_4->component;
      unsigned int VAR_10;
      for (VAR_10 = 0; VAR_7 == VAR_3 && VAR_10 < VAR_9->input_num; VAR_10++)
         VAR_7 = FUNC_1(VAR_6, VAR_9->input[VAR_10]);
      for (VAR_10 = 0; VAR_7 == VAR_3 && VAR_10 < VAR_9->output_num; VAR_10++)
         VAR_7 = FUNC_1(VAR_6, VAR_9->output[VAR_10]);
   }

 end:
   return VAR_7;
}
