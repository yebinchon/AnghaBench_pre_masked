
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int input_num; int output_num; int clock_num; int ** clock; int ** output; int ** input; int * control; } ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_COMPONENT_T ;






 int FUNC_0 (int) ;

__attribute__((used)) static MMAL_PORT_T *FUNC_1(MMAL_COMPONENT_T *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
   switch (VAR_1)
   {
      case 130:
         FUNC_0(VAR_2 == 0);
         return VAR_0->control;
      case 129:
         FUNC_0(VAR_2 < VAR_0->input_num);
         return VAR_0->input[VAR_2];
      case 128:
         FUNC_0(VAR_2 < VAR_0->output_num);
         return VAR_0->output[VAR_2];
      case 131:
         FUNC_0(VAR_2 < VAR_0->clock_num);
         return VAR_0->clock[VAR_2];
   }

   return ((void*)0);
}
