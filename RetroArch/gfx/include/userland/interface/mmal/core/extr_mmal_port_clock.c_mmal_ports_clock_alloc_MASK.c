
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMAL_PORT_T ;
typedef int MMAL_PORT_CLOCK_T ;
typedef int MMAL_PORT_CLOCK_EVENT_CB ;
typedef int MMAL_COMPONENT_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int,int ) ;
 int ** FUNC_2 (int *,unsigned int,int ,unsigned int) ;
 int FUNC_3 (int **) ;

MMAL_PORT_T **FUNC_4(MMAL_COMPONENT_T *VAR_2, unsigned int VAR_3,
                                     unsigned int VAR_4, MMAL_PORT_CLOCK_EVENT_CB VAR_5)
{
   unsigned int VAR_6;
   MMAL_PORT_T **VAR_7;

   VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_0,
                            VAR_4 + sizeof(MMAL_PORT_CLOCK_T));
   if (!VAR_7)
      return ((void*)0);

   for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
   {
      if (FUNC_1(VAR_7[VAR_6], VAR_4, VAR_5) != VAR_1)
         break;
   }

   if (VAR_6 != VAR_3)
   {
      for (VAR_3 = VAR_6, VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
         FUNC_0(VAR_7[VAR_6]);
      FUNC_3(VAR_7);
      return ((void*)0);
   }

   return VAR_7;
}
