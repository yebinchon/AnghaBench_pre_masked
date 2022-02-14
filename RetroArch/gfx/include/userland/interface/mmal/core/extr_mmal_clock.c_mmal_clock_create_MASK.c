
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int clock; int request_threshold_enable; scalar_t__ request_threshold; int discont_duration; int discont_threshold; int update_threshold_upper; int update_threshold_lower; int lock; } ;
struct TYPE_6__ {int member_0; int member_1; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_RATIONAL_T ;
typedef int MMAL_CLOCK_T ;
typedef TYPE_2__ MMAL_CLOCK_PRIVATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int *,TYPE_1__) ;
 TYPE_2__* FUNC_2 (int,unsigned int,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,char*) ;

MMAL_STATUS_T FUNC_5(MMAL_CLOCK_T **VAR_10)
{
   unsigned int VAR_11 = sizeof(MMAL_CLOCK_PRIVATE_T);
   MMAL_RATIONAL_T VAR_12 = { 1, 1 };
   MMAL_CLOCK_PRIVATE_T *VAR_13;


   if (VAR_10 == ((void*)0))
      return VAR_4;

   VAR_13 = FUNC_2(1, VAR_11, "mmal-clock");
   if (!VAR_13)
   {
      FUNC_0("failed to allocate memory");
      return VAR_5;
   }

   if (FUNC_4(&VAR_13->lock, "mmal-clock lock") != VAR_9)
   {
      FUNC_0("failed to create lock mutex");
      FUNC_3(VAR_13);
      return VAR_6;
   }


   VAR_13->update_threshold_lower = VAR_2;
   VAR_13->update_threshold_upper = VAR_3;
   VAR_13->discont_threshold = VAR_1;
   VAR_13->discont_duration = VAR_0;
   VAR_13->request_threshold = 0;
   VAR_13->request_threshold_enable = VAR_7;


   FUNC_1(&VAR_13->clock, VAR_12);

   *VAR_10 = &VAR_13->clock;
   return VAR_8;
}
