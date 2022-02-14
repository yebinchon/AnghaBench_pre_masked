
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int cmd; } ;
struct TYPE_12__ {int event_cb_data; int (* event_cb ) (int *,TYPE_1__*,TYPE_3__*,int ) ;} ;
struct TYPE_11__ {scalar_t__ index; scalar_t__ type; int name; scalar_t__ userdata; } ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_GRAPH_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int ,TYPE_1__*,TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_4(MMAL_PORT_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1)
{
   MMAL_GRAPH_PRIVATE_T *VAR_2 = (MMAL_GRAPH_PRIVATE_T *)VAR_0->userdata;

   FUNC_1("port: %s(%p), buffer: %p, event: %4.4s", VAR_0->name, VAR_0,
             VAR_1, (char *)&VAR_1->cmd);

   if (VAR_2->event_cb)
   {
      VAR_2->event_cb((MMAL_GRAPH_T *)VAR_2, VAR_0, VAR_1, VAR_2->event_cb_data);
   }
   else
   {
      FUNC_0("event lost on port %i,%i (event callback not defined)",
                (int)VAR_0->type, (int)VAR_0->index);
      FUNC_2(VAR_1);
   }
}
