
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int reply ;
typedef int msg ;
struct TYPE_11__ {int header; int index; int port_type; int component_handle; } ;
typedef TYPE_3__ mmal_worker_port_info_get ;
struct TYPE_10__ {int buffer_alignment_min; int buffer_size_recommended; int buffer_size_min; int buffer_num_recommended; int buffer_num_min; } ;
struct TYPE_12__ {scalar_t__ status; TYPE_2__ port; } ;
typedef TYPE_4__ mmal_worker_port_info ;
struct TYPE_14__ {int component_handle; } ;
struct TYPE_13__ {int buffer_alignment_min; int buffer_size_recommended; int buffer_size_min; int buffer_num_recommended; int buffer_num_min; int index; int type; TYPE_1__* priv; } ;
struct TYPE_9__ {TYPE_6__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef TYPE_6__ MMAL_PORT_MODULE_T ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *,int,int ,TYPE_4__*,size_t*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_PORT_T *VAR_3)
{
   MMAL_PORT_MODULE_T *VAR_4 = VAR_3->priv->module;
   mmal_worker_port_info_get VAR_5;
   mmal_worker_port_info VAR_6;
   size_t VAR_7 = sizeof(VAR_6);
   MMAL_STATUS_T VAR_8;

   VAR_5.component_handle = VAR_4->component_handle;
   VAR_5.port_type = VAR_3->type;
   VAR_5.index = VAR_3->index;

   FUNC_1("get port requirements (%i:%i)", VAR_3->type, VAR_3->index);

   VAR_8 = FUNC_3(FUNC_2(), &VAR_5.header, sizeof(VAR_5),
                                     VAR_2, &VAR_6, &VAR_7, VAR_0);
   if (VAR_8 == VAR_1)
   {
      FUNC_4(VAR_7 == sizeof(VAR_6));
      VAR_8 = VAR_6.status;
   }
   if (VAR_8 != VAR_1)
   {
      FUNC_0("failed to get port requirements (%i:%i)", VAR_3->type, VAR_3->index);
      return VAR_8;
   }

   VAR_3->buffer_num_min = VAR_6.port.buffer_num_min;
   VAR_3->buffer_num_recommended = VAR_6.port.buffer_num_recommended;
   VAR_3->buffer_size_min = VAR_6.port.buffer_size_min;
   VAR_3->buffer_size_recommended = VAR_6.port.buffer_size_recommended;
   VAR_3->buffer_alignment_min = VAR_6.port.buffer_alignment_min;

   return VAR_1;
}
