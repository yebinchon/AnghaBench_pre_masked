
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_15__ {scalar_t__ length; int data; TYPE_4__* delayed_buffer; int cmd; scalar_t__ port_num; scalar_t__ port_type; int * client_component; } ;
typedef TYPE_2__ mmal_worker_event_to_host ;
typedef scalar_t__ VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;
struct TYPE_16__ {scalar_t__ data; } ;
typedef TYPE_3__ VCHIQ_HEADER_T ;
struct TYPE_17__ {scalar_t__ alloc_size; int length; int data; } ;
struct TYPE_14__ {scalar_t__ magic; int (* callback_event ) (int *,TYPE_4__*) ;} ;
struct TYPE_13__ {scalar_t__ magic; TYPE_1__* client_context; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef int MMAL_COMPONENT_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ,int) ;
 TYPE_11__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_4__**,int ) ;
 int * FUNC_7 (int *,scalar_t__,scalar_t__) ;
 int FUNC_8 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_9 (int ,int ,int,TYPE_3__*) ;
 int FUNC_10 (int ,TYPE_3__*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(VCHIQ_HEADER_T *VAR_4,
                                    VCHIQ_SERVICE_HANDLE_T VAR_5,
                                    void *VAR_6)
{
   mmal_worker_event_to_host *VAR_7 = (mmal_worker_event_to_host *)VAR_4->data;
   MMAL_COMPONENT_T *VAR_8 = VAR_7->client_component;
   MMAL_BUFFER_HEADER_T *VAR_9;
   MMAL_STATUS_T VAR_10;
   MMAL_PORT_T *VAR_11;

   FUNC_0("event to host, cmd 0x%08x len %d to component %p port (%d,%d)",
         VAR_7->cmd, VAR_7->length, VAR_7->client_component, VAR_7->port_type, VAR_7->port_num);
   (void)VAR_6;

   VAR_11 = FUNC_7(VAR_8, VAR_7->port_type, VAR_7->port_num);
   if (!FUNC_11(*VAR_11))
   {
      FUNC_1("port (%i,%i) doesn't exist", (int)VAR_7->port_type, (int)VAR_7->port_num);
      goto error;
   }

   VAR_10 = FUNC_6(VAR_11, &VAR_9, VAR_7->cmd);
   if (VAR_10 != VAR_1)
   {
      FUNC_1("no event buffer available to receive event (%i)", (int)VAR_10);
      goto error;
   }

   if (!FUNC_11(VAR_7->length <= VAR_9->alloc_size))
   {
      FUNC_1("event buffer to small to receive event (%i/%i)",
                (int)VAR_9->alloc_size, (int)VAR_7->length);
      goto error;
   }
   VAR_9->length = VAR_7->length;


   if (!FUNC_11(FUNC_4(VAR_9)->magic == VAR_0 &&
          FUNC_4(VAR_9)->client_context &&
          FUNC_4(VAR_9)->client_context->magic == VAR_0 &&
          FUNC_4(VAR_9)->client_context->callback_event))
   {
      FUNC_1("event buffers not configured properly by component");
      goto error;
   }

   if (VAR_9->length > VAR_2)
   {

      int VAR_12 = VAR_9->length;
      VAR_12 = (VAR_12+3) & (~3);
      FUNC_0("queue event bulk rx: %p, %d", VAR_9->data, VAR_9->length);
      VAR_7->delayed_buffer = VAR_9;

      VCHIQ_STATUS_T VAR_13 = FUNC_9(VAR_5, VAR_9->data, VAR_12, VAR_4);
      if (VAR_13 != VAR_3)
      {
         FUNC_2("queue event bulk rx len %d failed to start", VAR_9->length);
         FUNC_5(VAR_9);
         goto error;
      }
   }
   else
   {
      if (VAR_7->length)
         FUNC_3(VAR_9->data, VAR_7->data, VAR_7->length);

      FUNC_4(VAR_9)->client_context->callback_event(VAR_11, VAR_9);
      FUNC_0("done callback back to client");
      FUNC_10(VAR_5, VAR_4);
   }

   return;

error:

   VAR_7->length = 0;
   FUNC_10(VAR_5, VAR_4);
}
