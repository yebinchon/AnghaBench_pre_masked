
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int input_num; unsigned int output_num; unsigned int clock_num; int * control; int ** clock; int ** output; int ** input; int name; } ;
struct TYPE_3__ {unsigned int component_num; TYPE_2__** component; } ;
typedef scalar_t__ MMAL_PORT_TYPE_T ;
typedef int MMAL_PORT_T ;
typedef int MMAL_GRAPH_T ;
typedef TYPE_1__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*,char const*,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int ) ;

MMAL_PORT_T *FUNC_3(MMAL_GRAPH_T *VAR_4,
                                  const char *VAR_5,
                                  MMAL_PORT_TYPE_T VAR_6,
                                  unsigned VAR_7)
{
   unsigned VAR_8;
   MMAL_GRAPH_PRIVATE_T *VAR_9 = (MMAL_GRAPH_PRIVATE_T *)VAR_4;
   for (VAR_8=0; VAR_8<VAR_9->component_num; VAR_8++)
   {
      MMAL_COMPONENT_T *VAR_10 = VAR_9->component[VAR_8];
      if (FUNC_2(VAR_5, VAR_10->name) == 0)
      {
         unsigned VAR_11;
         MMAL_PORT_T **VAR_12;
         if (VAR_6 == VAR_2) {
            VAR_11 = VAR_10->input_num;
            VAR_12 = VAR_10->input;
         }
         else if (VAR_6 == VAR_3) {
            VAR_11 = VAR_10->output_num;
            VAR_12 = VAR_10->output;
         }
         else if (VAR_6 == VAR_0) {
            VAR_11 = VAR_10->clock_num;
            VAR_12 = VAR_10->clock;
         }
         else if (VAR_6 == VAR_1) {
            VAR_11 = 1;
            VAR_12 = &VAR_10->control;
         }
         else {
            FUNC_1(0);
            return ((void*)0);
         }
         if (VAR_7 < VAR_11)
         {

            return VAR_12[VAR_7];
         }
      }
   }
   FUNC_0("port %s:%d not found", VAR_5, VAR_7);
   return ((void*)0);
}
