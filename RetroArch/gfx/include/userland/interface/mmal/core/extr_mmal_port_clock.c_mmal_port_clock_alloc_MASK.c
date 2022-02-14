
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
 int * FUNC_0 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_1 (int *,unsigned int,int ) ;
 int FUNC_2 (int *) ;

MMAL_PORT_T* FUNC_3(MMAL_COMPONENT_T *VAR_2, unsigned int VAR_3,
                                   MMAL_PORT_CLOCK_EVENT_CB VAR_4)
{
   MMAL_PORT_T *VAR_5;

   VAR_5 = FUNC_0(VAR_2, VAR_0,
                          VAR_3 + sizeof(MMAL_PORT_CLOCK_T));
   if (!VAR_5)
      return ((void*)0);

   if (FUNC_1(VAR_5, VAR_3, VAR_4) != VAR_1)
   {
      FUNC_2(VAR_5);
      return ((void*)0);
   }

   return VAR_5;
}
