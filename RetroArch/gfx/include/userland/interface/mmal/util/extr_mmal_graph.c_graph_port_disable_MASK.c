
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ (* pf_disable ) (TYPE_5__*,TYPE_3__*) ;} ;
struct TYPE_17__ {int input_num; TYPE_5__ graph; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_2__* component; } ;
struct TYPE_15__ {TYPE_1__* priv; } ;
struct TYPE_14__ {TYPE_4__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_GRAPH_PRIVATE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_3__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_4)
{
   MMAL_GRAPH_PRIVATE_T *VAR_5 = VAR_4->component->priv->module;
   MMAL_STATUS_T VAR_6;
   MMAL_PORT_T *VAR_7;

   VAR_7 = FUNC_0(VAR_4->component->priv->module, VAR_4);
   if (!VAR_7)
      return VAR_0;


   if (VAR_5->graph.pf_disable)
   {
      VAR_6 = VAR_5->graph.pf_disable(&VAR_5->graph, VAR_4);
      if (VAR_6 != VAR_1)
         return VAR_6;
   }





   if (!VAR_5->input_num || VAR_7->type == VAR_2)
   {
      MMAL_STATUS_T VAR_8 = FUNC_1(VAR_5, VAR_7, 0);
      if (VAR_8 != VAR_3)
         return VAR_8;
   }


   return FUNC_2(VAR_7);
}
