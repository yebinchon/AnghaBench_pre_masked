
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int duration; int threshold; } ;
struct TYPE_6__ {int discont_duration; int discont_threshold; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_CLOCK_T ;
typedef TYPE_1__ MMAL_CLOCK_PRIVATE_T ;
typedef TYPE_2__ MMAL_CLOCK_DISCONT_THRESHOLD_T ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

MMAL_STATUS_T FUNC_2(MMAL_CLOCK_T *VAR_1, MMAL_CLOCK_DISCONT_THRESHOLD_T *VAR_2)
{
   MMAL_CLOCK_PRIVATE_T *VAR_3 = (MMAL_CLOCK_PRIVATE_T *)VAR_1;

   FUNC_0(VAR_3);
   VAR_2->threshold = VAR_3->discont_threshold;
   VAR_2->duration = VAR_3->discont_duration;
   FUNC_1(VAR_3);

   return VAR_0;
}
