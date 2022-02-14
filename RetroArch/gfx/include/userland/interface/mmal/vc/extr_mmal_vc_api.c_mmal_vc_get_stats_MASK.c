
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int msg ;
struct TYPE_3__ {int reset; int stats; int header; } ;
typedef TYPE_1__ mmal_worker_stats ;
typedef int MMAL_VC_STATS_T ;
typedef scalar_t__ MMAL_STATUS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,int,int ,TYPE_1__*,size_t*,int ) ;
 int FUNC_2 (int) ;

MMAL_STATUS_T FUNC_3(MMAL_VC_STATS_T *VAR_3, int VAR_4)
{
   mmal_worker_stats VAR_5;
   size_t VAR_6 = sizeof(VAR_5);
   VAR_5.reset = VAR_4;

   MMAL_STATUS_T VAR_7 = FUNC_1(FUNC_0(),
                                                   &VAR_5.header, sizeof(VAR_5),
                                                   VAR_2,
                                                   &VAR_5, &VAR_6, VAR_0);

   if (VAR_7 == VAR_1)
   {
      FUNC_2(VAR_6 == sizeof(VAR_5));
      *VAR_3 = VAR_5.stats;
   }
   return VAR_7;
}
