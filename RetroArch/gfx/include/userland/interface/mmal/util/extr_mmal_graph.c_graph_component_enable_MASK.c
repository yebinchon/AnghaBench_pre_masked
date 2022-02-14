
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int (* pf_graph_enable ) (TYPE_4__*,int ) ;} ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {TYPE_4__ graph; } ;
struct TYPE_6__ {TYPE_2__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_1(MMAL_COMPONENT_T *VAR_2)
{
   MMAL_GRAPH_PRIVATE_T *VAR_3 = VAR_2->priv->module;
   MMAL_STATUS_T VAR_4 = VAR_0;


   if (VAR_3->graph.pf_graph_enable)
      VAR_4 = VAR_3->graph.pf_graph_enable(&VAR_3->graph, VAR_1);

   return VAR_4;
}
