
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ scheduling; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_CLOCK_T ;
typedef TYPE_1__ MMAL_CLOCK_PRIVATE_T ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

MMAL_STATUS_T FUNC_3(MMAL_CLOCK_T *VAR_2)
{
   MMAL_CLOCK_PRIVATE_T *VAR_3 = (MMAL_CLOCK_PRIVATE_T*)VAR_2;

   FUNC_0(VAR_3);
   if (VAR_3->scheduling)
      FUNC_2(VAR_3, VAR_1);
   FUNC_1(VAR_3);

   return VAR_0;
}
