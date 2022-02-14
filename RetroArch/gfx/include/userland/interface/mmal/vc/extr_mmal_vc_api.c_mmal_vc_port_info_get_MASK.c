
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int reply ;
typedef int msg ;
struct TYPE_12__ {int header; int index; int port_type; int component_handle; } ;
typedef TYPE_3__ mmal_worker_port_info_get ;
struct TYPE_16__ {int extradata_size; int extradata; int * es; } ;
struct TYPE_11__ {int capabilities; int is_enabled; int buffer_alignment_min; int buffer_size; int buffer_size_recommended; int buffer_size_min; int buffer_num; int buffer_num_recommended; int buffer_num_min; } ;
struct TYPE_13__ {scalar_t__ status; int extradata; int es; TYPE_9__ format; TYPE_2__ port; int port_handle; } ;
typedef TYPE_4__ mmal_worker_port_info ;
struct TYPE_15__ {int port_handle; int component_handle; } ;
struct TYPE_14__ {TYPE_9__* format; int capabilities; int is_enabled; int buffer_alignment_min; int buffer_size; int buffer_size_recommended; int buffer_size_min; int buffer_num; int buffer_num_recommended; int buffer_num_min; int index; int type; TYPE_1__* priv; } ;
struct TYPE_10__ {TYPE_6__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef TYPE_6__ MMAL_PORT_MODULE_T ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_9__*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int *,int,int ,TYPE_4__*,size_t*,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_8(MMAL_PORT_T *VAR_4)
{
   MMAL_PORT_MODULE_T *VAR_5 = VAR_4->priv->module;
   mmal_worker_port_info_get VAR_6;
   mmal_worker_port_info VAR_7;
   size_t VAR_8 = sizeof(VAR_7);
   MMAL_STATUS_T VAR_9;

   VAR_6.component_handle = VAR_5->component_handle;
   VAR_6.port_type = VAR_4->type;
   VAR_6.index = VAR_4->index;

   FUNC_1("get port info (%i:%i)", VAR_4->type, VAR_4->index);

   VAR_9 = FUNC_6(FUNC_5(), &VAR_6.header, sizeof(VAR_6),
                                     VAR_3, &VAR_7, &VAR_8, VAR_1);
   if (VAR_9 == VAR_2)
   {
      FUNC_7(VAR_8 == sizeof(VAR_7));
      VAR_9 = VAR_7.status;
   }

   if (VAR_9 != VAR_2)
   {
      FUNC_0("failed to get port info (%i:%i): %s", VAR_4->type, VAR_4->index,
                FUNC_4(VAR_9));
      return VAR_9;
   }

   VAR_5->port_handle = VAR_7.port_handle;
   VAR_4->buffer_num_min = VAR_7.port.buffer_num_min;
   VAR_4->buffer_num_recommended = VAR_7.port.buffer_num_recommended;
   VAR_4->buffer_num = VAR_7.port.buffer_num;
   VAR_4->buffer_size_min = VAR_7.port.buffer_size_min;
   VAR_4->buffer_size_recommended = VAR_7.port.buffer_size_recommended;
   VAR_4->buffer_size = VAR_7.port.buffer_size;
   VAR_4->buffer_alignment_min = VAR_7.port.buffer_alignment_min;
   VAR_4->is_enabled = VAR_7.port.is_enabled;
   VAR_4->capabilities = VAR_7.port.capabilities;
   VAR_7.format.extradata = VAR_4->format->extradata;
   VAR_7.format.es = VAR_4->format->es;
   *VAR_4->format = VAR_7.format;
   *VAR_4->format->es = VAR_7.es;
   if(VAR_4->format->extradata_size)
   {
      VAR_9 = FUNC_3(VAR_4->format, VAR_4->format->extradata_size);
      if(VAR_9 != VAR_2)
      {
         FUNC_7(0);
         VAR_4->format->extradata_size = 0;
         FUNC_0("couldn't allocate extradata %i", VAR_4->format->extradata_size);
         return VAR_0;
      }
      FUNC_2(VAR_4->format->extradata, VAR_7.extradata, VAR_4->format->extradata_size);
   }

   return VAR_2;
}
