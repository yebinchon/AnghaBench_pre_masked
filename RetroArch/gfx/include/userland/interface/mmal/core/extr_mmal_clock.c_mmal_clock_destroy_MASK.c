
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; scalar_t__ scheduling; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_CLOCK_T ;
typedef TYPE_1__ MMAL_CLOCK_PRIVATE_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

MMAL_STATUS_T FUNC_3(MMAL_CLOCK_T *VAR_1)
{
   MMAL_CLOCK_PRIVATE_T *VAR_2 = (MMAL_CLOCK_PRIVATE_T*)VAR_1;

   if (VAR_2->scheduling)
      FUNC_0(VAR_2);

   FUNC_2(&VAR_2->lock);

   FUNC_1(VAR_2);

   return VAR_0;
}
