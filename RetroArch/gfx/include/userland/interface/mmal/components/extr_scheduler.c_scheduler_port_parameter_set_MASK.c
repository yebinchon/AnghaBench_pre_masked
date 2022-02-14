
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_10__ {TYPE_1__** input; } ;
struct TYPE_9__ {int buffer_size_recommended; int buffer_size_min; int buffer_num_recommended; int buffer_num_min; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_7__ {size_t index; void* buffer_size_recommended; void* buffer_size_min; void* buffer_num_recommended; void* buffer_num_min; TYPE_4__* component; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_PARAMETER_HEADER_T ;
typedef TYPE_3__ MMAL_PARAMETER_BUFFER_REQUIREMENTS_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 void* FUNC_0 (void*,int ) ;

 int VAR_1 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_2, const MMAL_PARAMETER_HEADER_T *VAR_3)
{
   MMAL_COMPONENT_T *VAR_4 = VAR_2->component;
   MMAL_PORT_T *VAR_5 = VAR_4->input[VAR_2->index], *VAR_6 = VAR_4->input[VAR_2->index];

   switch (VAR_3->id)
   {
   case 128:
      {

         const MMAL_PARAMETER_BUFFER_REQUIREMENTS_T *VAR_7 = (const MMAL_PARAMETER_BUFFER_REQUIREMENTS_T *)VAR_3;
         uint32_t VAR_8 = FUNC_0(VAR_2->buffer_num_min, VAR_7->buffer_num_min);
         uint32_t VAR_9 = FUNC_0(VAR_2->buffer_num_recommended, VAR_7->buffer_num_recommended);
         uint32_t VAR_10 = FUNC_0(VAR_2->buffer_size_min, VAR_7->buffer_size_min);
         uint32_t VAR_11 = FUNC_0(VAR_2->buffer_size_recommended, VAR_7->buffer_size_recommended);

         VAR_5->buffer_num_min = VAR_8;
         VAR_5->buffer_num_recommended = VAR_9;
         VAR_5->buffer_size_min = VAR_10;
         VAR_5->buffer_size_recommended = VAR_11;
         VAR_6->buffer_num_min = VAR_8;
         VAR_6->buffer_num_recommended = VAR_9;
         VAR_6->buffer_size_min = VAR_10;
         VAR_6->buffer_size_recommended = VAR_11;
      }
      return VAR_1;

   default:
      return VAR_0;
   }
}
