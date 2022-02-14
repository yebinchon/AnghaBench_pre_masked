
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buffer_size; int buffer_num; int capabilities; int buffer_alignment_min; int buffer_size_recommended; int buffer_size_min; int buffer_num_recommended; int buffer_num_min; struct TYPE_6__* name; int format; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_GRAPH_PRIVATE_T ;
typedef scalar_t__ MMAL_BOOL_T ;


 int FUNC_0 (char*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMAL_GRAPH_PRIVATE_T *VAR_2,
   MMAL_PORT_T *VAR_3, MMAL_BOOL_T VAR_4)
{
   MMAL_STATUS_T VAR_5;
   MMAL_PORT_T *VAR_6;

   VAR_6 = FUNC_1(VAR_2, VAR_3);
   if (!VAR_6)
   {
      FUNC_0("could not find matching port for %p", VAR_3);
      return VAR_0;
   }

   VAR_5 = FUNC_2(VAR_3->format, VAR_6->format);
   if (VAR_5 != VAR_1)
   {
      FUNC_0("format copy failed on port %s", VAR_6->name);
      return VAR_5;
   }

   VAR_3->buffer_num_min = VAR_6->buffer_num_min;
   VAR_3->buffer_num_recommended = VAR_6->buffer_num_recommended;
   VAR_3->buffer_size_min = VAR_6->buffer_size_min;
   VAR_3->buffer_size_recommended = VAR_6->buffer_size_recommended;
   VAR_3->buffer_alignment_min = VAR_6->buffer_alignment_min;
   VAR_3->capabilities = VAR_6->capabilities;
   if (VAR_4)
   {
      VAR_3->buffer_num = VAR_6->buffer_num;
      VAR_3->buffer_size = VAR_6->buffer_size;
   }
   return VAR_1;
}
