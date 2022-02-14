
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int input_num; unsigned int output_num; unsigned int clock_num; TYPE_1__** clock; TYPE_1__** output; TYPE_1__** input; } ;
struct TYPE_5__ {int type; int name; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_GRAPH_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int *,int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;

MMAL_STATUS_T FUNC_2(MMAL_GRAPH_T *VAR_4, MMAL_PORT_T *VAR_5)
{
   MMAL_GRAPH_PRIVATE_T *VAR_6 = (MMAL_GRAPH_PRIVATE_T *)VAR_4;
   MMAL_PORT_T **VAR_7;
   unsigned int *VAR_8;

   FUNC_1("graph: %p, port: %s(%p)", VAR_4, VAR_5 ? VAR_5->name: 0, VAR_5);

   if (!VAR_5)
      return VAR_1;

   switch (VAR_5->type)
   {
   case 129:
      VAR_7 = VAR_6->input;
      VAR_8 = &VAR_6->input_num;
      break;
   case 128:
      VAR_7 = VAR_6->output;
      VAR_8 = &VAR_6->output_num;
      break;
   case 130:
      VAR_7 = VAR_6->clock;
      VAR_8 = &VAR_6->clock_num;
      break;
   default:
      return VAR_1;
   }

   if (*VAR_8 >= VAR_0)
   {
      FUNC_0("no space for port %s", VAR_5->name);
      return VAR_2;
   }

   VAR_7[(*VAR_8)++] = VAR_5;
   return VAR_3;
}
