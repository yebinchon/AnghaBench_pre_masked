
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ (* pf_control_callback ) (TYPE_6__*,TYPE_2__*,TYPE_5__*) ;} ;
struct TYPE_18__ {int cmd; } ;
struct TYPE_17__ {int control; TYPE_1__* priv; } ;
struct TYPE_16__ {TYPE_6__ graph; } ;
struct TYPE_15__ {int name; scalar_t__ userdata; } ;
struct TYPE_14__ {TYPE_3__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ,TYPE_2__*,TYPE_5__*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*,TYPE_2__*,TYPE_5__*) ;

__attribute__((used)) static void FUNC_3(MMAL_PORT_T *VAR_1, MMAL_BUFFER_HEADER_T *VAR_2)
{
   MMAL_COMPONENT_T *VAR_3 = (MMAL_COMPONENT_T *)VAR_1->userdata;
   MMAL_GRAPH_PRIVATE_T *VAR_4 = VAR_3->priv->module;
   MMAL_STATUS_T VAR_5;

   FUNC_0("%s(%p),%p,%4.4s", VAR_1->name, VAR_1, VAR_2, (char *)&VAR_2->cmd);


   if (VAR_4->graph.pf_control_callback)
   {
      VAR_5 = VAR_4->graph.pf_control_callback(&VAR_4->graph,
         VAR_1, VAR_2);
      if (VAR_5 != VAR_0)
         return;
   }


   FUNC_1(VAR_3->control, VAR_2);
}
