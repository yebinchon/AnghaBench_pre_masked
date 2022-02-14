
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int reply ;
struct TYPE_12__ {scalar_t__ status; } ;
typedef TYPE_3__ mmal_worker_reply ;
struct TYPE_11__ {void* magic; int port_handle; int component_handle; TYPE_5__* client_context; } ;
struct TYPE_13__ {int header; TYPE_2__ drvbuf; } ;
typedef TYPE_4__ mmal_worker_buffer_from_host ;
struct TYPE_16__ {int port_handle; int component_handle; } ;
struct TYPE_15__ {TYPE_1__* priv; } ;
struct TYPE_14__ {TYPE_6__* port; void* magic; TYPE_4__ msg; } ;
struct TYPE_10__ {TYPE_7__* module; } ;
typedef TYPE_5__ MMAL_VC_CLIENT_BUFFER_CONTEXT_T ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef TYPE_7__ MMAL_PORT_MODULE_T ;


 int FUNC_0 (char*,scalar_t__) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *,int,int ,TYPE_3__*,size_t*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_4)
{
   MMAL_PORT_MODULE_T *VAR_5 = VAR_4->priv->module;
   MMAL_STATUS_T VAR_6;
   mmal_worker_reply VAR_7;
   MMAL_VC_CLIENT_BUFFER_CONTEXT_T VAR_8;
   mmal_worker_buffer_from_host *VAR_9;

   size_t VAR_10 = sizeof(VAR_7);

   VAR_9 = &VAR_8.msg;

   VAR_8.magic = VAR_0;
   VAR_8.port = VAR_4;

   VAR_9->drvbuf.client_context = &VAR_8;
   VAR_9->drvbuf.component_handle = VAR_5->component_handle;
   VAR_9->drvbuf.port_handle = VAR_5->port_handle;
   VAR_9->drvbuf.magic = VAR_0;

   VAR_6 = FUNC_2(FUNC_1(), &VAR_9->header, sizeof(*VAR_9),
                                     VAR_3, &VAR_7, &VAR_10, VAR_2);
   if (VAR_6 == VAR_1)
   {
      FUNC_3(VAR_10 == sizeof(VAR_7));
      VAR_6 = VAR_7.status;
   }
   if (VAR_6 != VAR_1)
      FUNC_0("failed to disable port - reason %d", VAR_6);

   return VAR_6;
}
