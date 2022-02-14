
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scale_rational; } ;
typedef int MMAL_RATIONAL_T ;
typedef int MMAL_CLOCK_T ;
typedef TYPE_1__ MMAL_CLOCK_PRIVATE_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

MMAL_RATIONAL_T FUNC_2(MMAL_CLOCK_T *VAR_0)
{
   MMAL_CLOCK_PRIVATE_T *VAR_1 = (MMAL_CLOCK_PRIVATE_T*)VAR_0;
   MMAL_RATIONAL_T VAR_2;

   FUNC_0(VAR_1);
   VAR_2 = VAR_1->scale_rational;
   FUNC_1(VAR_1);

   return VAR_2;
}
