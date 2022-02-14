
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buffer_alignment_min; int buffer_size_recommended; int buffer_size_min; int buffer_num_recommended; int buffer_num_min; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_GRAPH_PRIVATE_T ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_GRAPH_PRIVATE_T *VAR_2,
   MMAL_PORT_T *VAR_3)
{
   MMAL_PORT_T *VAR_4;

   VAR_4 = FUNC_1(VAR_2, VAR_3);
   if (!VAR_4)
   {
      FUNC_0("could not find matching port for %p", VAR_3);
      return VAR_0;
   }

   VAR_3->buffer_num_min = VAR_4->buffer_num_min;
   VAR_3->buffer_num_recommended = VAR_4->buffer_num_recommended;
   VAR_3->buffer_size_min = VAR_4->buffer_size_min;
   VAR_3->buffer_size_recommended = VAR_4->buffer_size_recommended;
   VAR_3->buffer_alignment_min = VAR_4->buffer_alignment_min;
   return VAR_1;
}
