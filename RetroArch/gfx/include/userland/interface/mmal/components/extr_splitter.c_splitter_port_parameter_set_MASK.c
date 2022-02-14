
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


typedef void* uint32_t ;
struct TYPE_14__ {unsigned int output_num; TYPE_2__** output; TYPE_1__** input; } ;
struct TYPE_13__ {int buffer_size_recommended; int buffer_size_min; int buffer_num_recommended; int buffer_num_min; } ;
struct TYPE_12__ {int id; } ;
struct TYPE_11__ {int buffer_size_recommended; int buffer_size_min; int buffer_num_recommended; int buffer_num_min; TYPE_6__* component; } ;
struct TYPE_10__ {void* buffer_size_recommended; void* buffer_size_min; void* buffer_num_recommended; void* buffer_num_min; } ;
struct TYPE_9__ {void* buffer_size_recommended; void* buffer_size_min; void* buffer_num_recommended; void* buffer_num_min; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_PARAMETER_HEADER_T ;
typedef TYPE_5__ MMAL_PARAMETER_BUFFER_REQUIREMENTS_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;

 int VAR_1 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_2, const MMAL_PARAMETER_HEADER_T *VAR_3)
{
   MMAL_COMPONENT_T *VAR_4 = VAR_2->component;
   unsigned int VAR_5;

   switch (VAR_3->id)
   {
   case 128:
      {

         const MMAL_PARAMETER_BUFFER_REQUIREMENTS_T *VAR_6 = (const MMAL_PARAMETER_BUFFER_REQUIREMENTS_T *)VAR_3;
         uint32_t VAR_7 = FUNC_0(VAR_2->buffer_num_min, VAR_6->buffer_num_min);
         uint32_t VAR_8 = FUNC_0(VAR_2->buffer_num_recommended, VAR_6->buffer_num_recommended);
         uint32_t VAR_9 = FUNC_0(VAR_2->buffer_size_min, VAR_6->buffer_size_min);
         uint32_t VAR_10 = FUNC_0(VAR_2->buffer_size_recommended, VAR_6->buffer_size_recommended);

         VAR_4->input[0]->buffer_num_min = VAR_7;
         VAR_4->input[0]->buffer_num_recommended = VAR_8;
         VAR_4->input[0]->buffer_size_min = VAR_9;
         VAR_4->input[0]->buffer_size_recommended = VAR_10;
         for (VAR_5 = 0; VAR_5 < VAR_4->output_num; VAR_5++)
         {
            VAR_4->output[VAR_5]->buffer_num_min = VAR_7;
            VAR_4->output[VAR_5]->buffer_num_recommended = VAR_8;
            VAR_4->output[VAR_5]->buffer_size_min = VAR_9;
            VAR_4->output[VAR_5]->buffer_size_recommended = VAR_10;
         }

      }
      return VAR_1;

   default:
      return VAR_0;
   }
}
