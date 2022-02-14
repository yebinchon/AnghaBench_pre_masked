
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef int MMAL_CONNECTION_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int **,int *,int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

MMAL_STATUS_T FUNC_3(MMAL_PORT_T *VAR_3, MMAL_PORT_T *VAR_4, MMAL_CONNECTION_T **VAR_5)
{
   MMAL_STATUS_T VAR_6;

   VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4, VAR_1 | VAR_0);

   if (VAR_6 == VAR_2)
   {
      VAR_6 = FUNC_2(*VAR_5);
      if (VAR_6 != VAR_2)
         FUNC_1(*VAR_5);
   }

   return VAR_6;
}
