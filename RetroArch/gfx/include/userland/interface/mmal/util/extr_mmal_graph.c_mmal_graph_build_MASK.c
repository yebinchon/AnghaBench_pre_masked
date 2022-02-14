
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMAL_STATUS_T ;
typedef int MMAL_GRAPH_T ;
typedef int MMAL_GRAPH_PRIVATE_T ;
typedef int MMAL_COMPONENT_T ;


 int FUNC_0 (char*,int *,char const*,int **) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int ,int *,int **) ;

MMAL_STATUS_T FUNC_2(MMAL_GRAPH_T *VAR_1,
   const char *VAR_2, MMAL_COMPONENT_T **VAR_3)
{
   FUNC_0("graph: %p, name: %s, component: %p", VAR_1, VAR_2, VAR_3);
   return FUNC_1(VAR_2, VAR_0,
      (MMAL_GRAPH_PRIVATE_T *)VAR_1, VAR_3);
}
