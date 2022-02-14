
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int * name; void* userdata; } ;
struct TYPE_10__ {TYPE_2__* user_data; int callback; } ;
struct TYPE_9__ {unsigned int component_num; unsigned int connection_num; int sema; TYPE_3__** connection; TYPE_1__** component; void* event_cb_data; int event_cb; int thread; } ;
struct TYPE_8__ {TYPE_5__* control; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_GRAPH_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;
typedef int MMAL_GRAPH_EVENT_CB ;
typedef TYPE_3__ MMAL_CONNECTION_T ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*,int *,int ,TYPE_2__*) ;

MMAL_STATUS_T FUNC_7(MMAL_GRAPH_T *VAR_6, MMAL_GRAPH_EVENT_CB VAR_7, void *VAR_8)
{
   MMAL_GRAPH_PRIVATE_T *VAR_9 = (MMAL_GRAPH_PRIVATE_T *)VAR_6;
   MMAL_STATUS_T VAR_10 = VAR_1;
   unsigned int VAR_11;

   FUNC_1("graph: %p", VAR_6);

   if (FUNC_6(&VAR_9->thread, "mmal graph thread", ((void*)0),
                          VAR_5, VAR_9) != VAR_2)
   {
      FUNC_0("failed to create worker thread %p", VAR_6);
      return VAR_0;
   }

   VAR_9->event_cb = VAR_7;
   VAR_9->event_cb_data = VAR_8;


   for (VAR_11 = 0; VAR_11 < VAR_9->component_num; VAR_11++)
   {
      VAR_9->component[VAR_11]->control->userdata = (void *)VAR_9;
      VAR_10 = FUNC_4(VAR_9->component[VAR_11]->control, VAR_4);
      if (VAR_10 != VAR_1)
         FUNC_0("could not enable port %s", VAR_9->component[VAR_11]->control->name);
   }


   for (VAR_11 = 0; VAR_11 < VAR_9->connection_num; VAR_11++)
   {
      MMAL_CONNECTION_T *VAR_12 = VAR_9->connection[VAR_11];

      VAR_12->callback = VAR_3;
      VAR_12->user_data = VAR_9;

      VAR_10 = FUNC_3(VAR_12);
      if (VAR_10 != VAR_1)
         goto error;
   }


   FUNC_5(&VAR_9->sema);
   return VAR_10;

 error:
   FUNC_2(VAR_9);
   return VAR_10;
}
