
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef int MMAL_PARAMETER_HEADER_T ;
typedef int MMAL_GRAPH_T ;


 int FUNC_0 (char*,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_GRAPH_T *VAR_1,
      MMAL_PORT_T *VAR_2, MMAL_PARAMETER_HEADER_T *VAR_3)
{
   FUNC_1(VAR_1);
   FUNC_1(VAR_2);
   FUNC_1(VAR_3);
   FUNC_0("graph %p, port %p, param %p", VAR_1, VAR_2, VAR_3);
   return VAR_0;
}
