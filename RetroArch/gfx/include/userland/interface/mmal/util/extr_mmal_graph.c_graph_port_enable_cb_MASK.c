
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ (* pf_return_buffer ) (TYPE_4__*,TYPE_1__*,TYPE_3__*) ;} ;
struct TYPE_19__ {scalar_t__ cmd; } ;
struct TYPE_18__ {TYPE_4__ graph; } ;
struct TYPE_17__ {scalar_t__ userdata; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_1__*,TYPE_3__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(MMAL_PORT_T *VAR_1, MMAL_BUFFER_HEADER_T *VAR_2)
{
   MMAL_GRAPH_PRIVATE_T *VAR_3 = (MMAL_GRAPH_PRIVATE_T *)VAR_1->userdata;
   MMAL_PORT_T *VAR_4;
   MMAL_STATUS_T VAR_5;

   VAR_4 = FUNC_0(VAR_3, VAR_1);
   if (!VAR_4)
   {
      FUNC_5(0);
      FUNC_1(VAR_2);
      return;
   }


   if (VAR_3->graph.pf_return_buffer)
   {
      VAR_5 = VAR_3->graph.pf_return_buffer(&VAR_3->graph, VAR_4, VAR_2);
      if (VAR_5 != VAR_0)
         return;
   }


   if (VAR_2->cmd)
      FUNC_3(VAR_4, VAR_2);
   else
      FUNC_2(VAR_4, VAR_2);
}
