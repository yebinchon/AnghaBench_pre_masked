
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__** clock; TYPE_1__** output; TYPE_1__** input; } ;
struct TYPE_8__ {unsigned int input_num; unsigned int output_num; unsigned int clock_num; TYPE_1__** clock; TYPE_1__** output; TYPE_1__** input; TYPE_3__* graph_component; } ;
struct TYPE_7__ {int type; } ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;






__attribute__((used)) static MMAL_PORT_T *FUNC_0(MMAL_GRAPH_PRIVATE_T *VAR_0, MMAL_PORT_T *VAR_1)
{
   MMAL_COMPONENT_T *VAR_2 = VAR_0->graph_component;
   MMAL_PORT_T **VAR_3, **VAR_4;
   unsigned int VAR_5, *VAR_6;

   switch (VAR_1->type)
   {
   case 129:
      VAR_3 = VAR_0->input;
      VAR_6 = &VAR_0->input_num;
      VAR_4 = VAR_2->input;
      break;
   case 128:
      VAR_3 = VAR_0->output;
      VAR_6 = &VAR_0->output_num;
      VAR_4 = VAR_2->output;
      break;
   case 130:
      VAR_3 = VAR_0->clock;
      VAR_6 = &VAR_0->clock_num;
      VAR_4 = VAR_2->clock;
      break;
   default:
      return 0;
   }

   for (VAR_5 = 0; VAR_5 < *VAR_6; VAR_5++)
      if (VAR_3[VAR_5] == VAR_1)
         break;

   if (VAR_5 == *VAR_6)
      return 0;
   return VAR_4[VAR_5];
}
