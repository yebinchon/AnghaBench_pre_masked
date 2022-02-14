
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


struct TYPE_23__ {int name; } ;
struct TYPE_22__ {scalar_t__ (* pf_connection_buffer ) (TYPE_4__*,TYPE_2__*,TYPE_3__*) ;} ;
struct TYPE_21__ {scalar_t__ cmd; } ;
struct TYPE_20__ {TYPE_14__* out; TYPE_7__* in; } ;
struct TYPE_19__ {TYPE_4__ graph; } ;
struct TYPE_18__ {int component; int name; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_2__ MMAL_CONNECTION_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ,TYPE_14__*,int ,TYPE_7__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_14__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_7__*,TYPE_3__*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_4__*,TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(MMAL_GRAPH_PRIVATE_T *VAR_2,
   MMAL_CONNECTION_T *VAR_3, MMAL_BUFFER_HEADER_T *VAR_4)
{
   MMAL_STATUS_T VAR_5;


   if (VAR_2->graph.pf_connection_buffer)
   {
      VAR_5 = VAR_2->graph.pf_connection_buffer(&VAR_2->graph, VAR_3, VAR_4);
      if (VAR_5 != VAR_0)
         return;
   }

   if (VAR_4->cmd)
   {
      FUNC_1(VAR_3, VAR_3->out, VAR_4);
      return;
   }

   VAR_5 = FUNC_4(VAR_3->in, VAR_4);
   if (VAR_5 != VAR_1)
   {
      FUNC_0("%s(%p) could not send buffer to %s(%p) (%s)",
                VAR_3->out->name, VAR_3->out,
                VAR_3->in->name, VAR_3->in,
                FUNC_5(VAR_5));
      FUNC_2(VAR_4);
      FUNC_3(VAR_3->out->component, VAR_5);
   }
}
