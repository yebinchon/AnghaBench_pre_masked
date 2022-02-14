
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int input_num; unsigned int output_num; unsigned int clock_num; int * control; int ** clock; int ** output; int ** input; } ;
typedef int MMAL_PORT_TYPE_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_COMPONENT_T ;






 int FUNC_0 (int ) ;

MMAL_PORT_T *FUNC_1(MMAL_COMPONENT_T *VAR_0, MMAL_PORT_TYPE_T VAR_1, unsigned VAR_2)
{
   unsigned VAR_3;
   MMAL_PORT_T **VAR_4;

   switch (VAR_1)
   {
   case 129:
      VAR_3 = VAR_0->input_num;
      VAR_4 = VAR_0->input;
      break;

   case 128:
      VAR_3 = VAR_0->output_num;
      VAR_4 = VAR_0->output;
      break;

   case 131:
      VAR_3 = VAR_0->clock_num;
      VAR_4 = VAR_0->clock;
      break;

   case 130:
      VAR_3 = 1;
      VAR_4 = &VAR_0->control;
      break;

   default:
      FUNC_0(0);
      return ((void*)0);
   }
   if (VAR_2 < VAR_3)

      return VAR_4[VAR_2];
   else
      return ((void*)0);
}
