
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ (* pf_parameter_get ) (TYPE_6__*,TYPE_4__*,int *) ;} ;
struct TYPE_13__ {unsigned int component_num; TYPE_1__** component; TYPE_6__ graph; } ;
struct TYPE_12__ {TYPE_3__* component; } ;
struct TYPE_11__ {TYPE_2__* priv; } ;
struct TYPE_10__ {TYPE_5__* module; } ;
struct TYPE_9__ {int control; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef TYPE_5__ MMAL_GRAPH_PRIVATE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_4__*,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_2,
   MMAL_PARAMETER_HEADER_T *VAR_3)
{
   MMAL_GRAPH_PRIVATE_T *VAR_4 = VAR_2->component->priv->module;
   MMAL_STATUS_T VAR_5 = VAR_0;
   unsigned int VAR_6;


   if (VAR_4->graph.pf_parameter_get)
   {
      VAR_5 = VAR_4->graph.pf_parameter_get(&VAR_4->graph, VAR_2, VAR_3);
      if (VAR_5 != VAR_0)
         return VAR_5;
   }


   for (VAR_6 = 0; VAR_6 < VAR_4->component_num && VAR_5 != VAR_1; VAR_6++)
      VAR_5 = FUNC_0(VAR_4->component[VAR_6]->control, VAR_3);

   return VAR_5;
}
