
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ component_num; int ** component; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_GRAPH_T ;
typedef TYPE_1__ MMAL_GRAPH_PRIVATE_T ;
typedef int MMAL_COMPONENT_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (char*,int *,char const*,int **) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,int **) ;

MMAL_STATUS_T FUNC_4(MMAL_GRAPH_T *VAR_3, const char *VAR_4,
   MMAL_COMPONENT_T **VAR_5)
{
   MMAL_GRAPH_PRIVATE_T *VAR_6 = (MMAL_GRAPH_PRIVATE_T *)VAR_3;
   MMAL_COMPONENT_T *VAR_7;
   MMAL_STATUS_T VAR_8;

   FUNC_1("graph: %p, name: %s, component: %p", VAR_3, VAR_4, VAR_5);

   if (VAR_6->component_num >= VAR_0)
   {
      FUNC_0("no space for component %s", VAR_4);
      return VAR_1;
   }

   VAR_8 = FUNC_3(VAR_4, &VAR_7);
   if (VAR_8 != VAR_2)
   {
      FUNC_0("could not create component %s (%i)", VAR_4, VAR_8);
      return VAR_8;
   }

   VAR_6->component[VAR_6->component_num++] = VAR_7;
   if (VAR_5)
   {
      FUNC_2(VAR_7);
      *VAR_5 = VAR_7;
   }

   return VAR_2;
}
