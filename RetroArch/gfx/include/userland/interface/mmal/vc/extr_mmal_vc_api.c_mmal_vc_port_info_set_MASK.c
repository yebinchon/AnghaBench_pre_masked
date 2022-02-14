
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
struct TYPE_16__ {scalar_t__ extradata_size; int extradata; int * es; } ;
struct TYPE_14__ {TYPE_9__* format; int capabilities; int is_enabled; int buffer_alignment_min; int buffer_size; int buffer_size_recommended; int buffer_size_min; int buffer_num; int buffer_num_recommended; int buffer_num_min; int index; int type; TYPE_1__* priv; } ;
struct TYPE_12__ {int header; TYPE_9__ format; int extradata; int es; TYPE_5__ port; int index; int port_type; int component_handle; } ;
typedef TYPE_3__ mmal_worker_port_info_set ;
struct TYPE_11__ {int capabilities; int is_enabled; int buffer_alignment_min; int buffer_size; int buffer_size_recommended; int buffer_size_min; int buffer_num; int buffer_num_recommended; int buffer_num_min; } ;
struct TYPE_13__ {scalar_t__ status; int extradata; int es; TYPE_9__ format; TYPE_2__ port; } ;
typedef TYPE_4__ mmal_worker_port_info ;
struct TYPE_15__ {int component_handle; } ;
struct TYPE_10__ {TYPE_6__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef TYPE_6__ MMAL_PORT_MODULE_T ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_9__*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int *,int,int ,TYPE_4__*,size_t*,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_8(MMAL_PORT_T *VAR_5)
{
   MMAL_PORT_MODULE_T *VAR_6 = VAR_5->priv->module;
   mmal_worker_port_info_set VAR_7;
   mmal_worker_port_info VAR_8;
   size_t VAR_9 = sizeof(VAR_8);
   MMAL_STATUS_T VAR_10;

   VAR_7.component_handle = VAR_6->component_handle;
   VAR_7.port_type = VAR_5->type;
   VAR_7.index = VAR_5->index;
   VAR_7.port = *VAR_5;
   VAR_7.format = *VAR_5->format;
   VAR_7.es = *VAR_5->format->es;
   if(VAR_7.format.extradata_size > VAR_2)
   {
      FUNC_7(0);
      VAR_7.format.extradata_size = VAR_2;
   }
   FUNC_2(VAR_7.extradata, VAR_7.format.extradata, VAR_7.format.extradata_size);

   FUNC_1("set port info (%i:%i)", VAR_5->type, VAR_5->index);

   VAR_10 = FUNC_6(FUNC_5(), &VAR_7.header, sizeof(VAR_7),
                                     VAR_4, &VAR_8, &VAR_9, VAR_1);
   if (VAR_10 == VAR_3)
   {
      FUNC_7(VAR_9 == sizeof(VAR_8));
      VAR_10 = VAR_8.status;
   }

   if (VAR_10 != VAR_3)
   {
      FUNC_0("failed to set port info (%i:%i): %s", VAR_5->type, VAR_5->index,
                FUNC_4(VAR_10));
      return VAR_10;
   }

   VAR_5->buffer_num_min = VAR_8.port.buffer_num_min;
   VAR_5->buffer_num_recommended = VAR_8.port.buffer_num_recommended;
   VAR_5->buffer_num = VAR_8.port.buffer_num;
   VAR_5->buffer_size_min = VAR_8.port.buffer_size_min;
   VAR_5->buffer_size_recommended = VAR_8.port.buffer_size_recommended;
   VAR_5->buffer_size = VAR_8.port.buffer_size;
   VAR_5->buffer_alignment_min = VAR_8.port.buffer_alignment_min;
   VAR_5->is_enabled = VAR_8.port.is_enabled;
   VAR_5->capabilities = VAR_8.port.capabilities;
   VAR_8.format.extradata = VAR_5->format->extradata;
   VAR_8.format.es = VAR_5->format->es;
   *VAR_5->format = VAR_8.format;
   *VAR_5->format->es = VAR_8.es;
   if(VAR_5->format->extradata_size)
   {
      VAR_10 = FUNC_3(VAR_5->format, VAR_5->format->extradata_size);
      if(VAR_10 != VAR_3)
      {
         FUNC_7(0);
         VAR_5->format->extradata_size = 0;
         FUNC_0("couldn't allocate extradata %i", VAR_5->format->extradata_size);
         return VAR_0;
      }
      FUNC_2(VAR_5->format->extradata, VAR_8.extradata, VAR_5->format->extradata_size);
   }

   return VAR_3;
}
