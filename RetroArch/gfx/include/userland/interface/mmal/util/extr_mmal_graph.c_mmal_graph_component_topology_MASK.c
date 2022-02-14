
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {unsigned int component_num; scalar_t__* topology; TYPE_2__** component; } ;
typedef int MMAL_STATUS_T ;
typedef scalar_t__ MMAL_GRAPH_TOPOLOGY_T ;
typedef int MMAL_GRAPH_T ;
typedef TYPE_1__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*,int *,int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int VAR_3 ;

MMAL_STATUS_T FUNC_2(MMAL_GRAPH_T *VAR_4, MMAL_COMPONENT_T *VAR_5,
    MMAL_GRAPH_TOPOLOGY_T VAR_6, int8_t *VAR_7, unsigned int VAR_8,
    int8_t *VAR_9, unsigned int VAR_10)
{
   MMAL_GRAPH_PRIVATE_T *VAR_11 = (MMAL_GRAPH_PRIVATE_T *)VAR_4;
   FUNC_1(VAR_7); FUNC_1(VAR_8);
   FUNC_1(VAR_9); FUNC_1(VAR_10);
   unsigned int VAR_12;

   FUNC_0("graph: %p, component: %s(%p)", VAR_4, VAR_5 ? VAR_5->name: 0, VAR_5);

   if (!VAR_5)
      return VAR_0;

   for (VAR_12 = 0; VAR_12 < VAR_11->component_num; VAR_12++)
      if (VAR_5 == VAR_11->component[VAR_12])
         break;

   if (VAR_12 == VAR_11->component_num)
      return VAR_0;

   if (VAR_6 > VAR_2)
      return VAR_1;

   VAR_11->topology[VAR_12] = VAR_6;

   return VAR_3;
}
