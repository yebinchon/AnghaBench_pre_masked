
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int input_num; unsigned int output_num; unsigned int clock_num; TYPE_1__** clock; TYPE_1__** output; TYPE_1__** input; } ;
struct TYPE_6__ {int type; unsigned int index; } ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;






__attribute__((used)) static MMAL_PORT_T *FUNC_0(MMAL_GRAPH_PRIVATE_T *VAR_0, MMAL_PORT_T *VAR_1)
{
   MMAL_PORT_T **VAR_2;
   unsigned int *VAR_3;

   switch (VAR_1->type)
   {
   case 129:
      VAR_2 = VAR_0->input;
      VAR_3 = &VAR_0->input_num;
      break;
   case 128:
      VAR_2 = VAR_0->output;
      VAR_3 = &VAR_0->output_num;
      break;
   case 130:
      VAR_2 = VAR_0->clock;
      VAR_3 = &VAR_0->clock_num;
      break;
   default:
      return 0;
   }

   if (VAR_1->index > *VAR_3)
      return 0;

   return VAR_2[VAR_1->index];
}
