
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int component_num; scalar_t__* topology; int ** component; } ;
struct TYPE_6__ {scalar_t__ index; int * component; } ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;
typedef int MMAL_COMPONENT_T ;
typedef int MMAL_BOOL_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static MMAL_BOOL_T FUNC_0(MMAL_GRAPH_PRIVATE_T *VAR_3,
   MMAL_PORT_T *VAR_4, MMAL_PORT_T *VAR_5)
{
   MMAL_COMPONENT_T *VAR_6 = VAR_4->component;
   unsigned int VAR_7;

   for (VAR_7 = 0; VAR_7 < VAR_3->component_num; VAR_7++)
      if (VAR_6 == VAR_3->component[VAR_7])
         break;

   if (VAR_7 == VAR_3->component_num)
      return VAR_0;

   if (VAR_3->topology[VAR_7] == VAR_1)
      return VAR_4->index == VAR_5->index;

   return VAR_2;
}
