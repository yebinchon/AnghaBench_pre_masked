
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
typedef int msg ;
struct TYPE_13__ {scalar_t__ status; } ;
typedef TYPE_4__ mmal_worker_reply ;
struct TYPE_15__ {int buffer_size_min; int buffer_size; int buffer_num_min; int buffer_num; TYPE_1__* priv; } ;
struct TYPE_11__ {TYPE_6__ port; } ;
struct TYPE_12__ {TYPE_2__ enable; } ;
struct TYPE_14__ {int header; TYPE_3__ param; int port_handle; int action; int component_handle; } ;
typedef TYPE_5__ mmal_worker_port_action ;
struct TYPE_16__ {int port_handle; int component_handle; } ;
struct TYPE_10__ {TYPE_7__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef TYPE_7__ MMAL_PORT_MODULE_T ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *,int,int ,TYPE_4__*,size_t*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_4)
{
   MMAL_PORT_MODULE_T *VAR_5 = VAR_4->priv->module;
   MMAL_STATUS_T VAR_6;
   mmal_worker_reply VAR_7;
   mmal_worker_port_action VAR_8;
   size_t VAR_9 = sizeof(VAR_7);

   VAR_8.component_handle = VAR_5->component_handle;
   VAR_8.action = VAR_3;
   VAR_8.port_handle = VAR_5->port_handle;
   VAR_8.param.enable.port = *VAR_4;

   VAR_6 = FUNC_2(FUNC_1(), &VAR_8.header, sizeof(VAR_8),
                                     VAR_2, &VAR_7, &VAR_9, VAR_0);
   if (VAR_6 == VAR_1)
   {
      FUNC_3(VAR_9 == sizeof(VAR_7));
      VAR_6 = VAR_7.status;
   }
   if (VAR_6 != VAR_1)
      FUNC_0("failed to set port requirements (%i/%i,%i/%i)",
                VAR_4->buffer_num, VAR_4->buffer_num_min,
                VAR_4->buffer_size, VAR_4->buffer_size_min);

   return VAR_6;
}
