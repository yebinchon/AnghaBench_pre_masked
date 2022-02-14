
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int param ;
struct TYPE_5__ {int size; int id; } ;
struct TYPE_4__ {int stats; TYPE_2__ hdr; int reset; int dir; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_PARAMETER_CORE_STATISTICS_T ;
typedef int MMAL_CORE_STATS_DIR ;
typedef int MMAL_CORE_STATISTICS_T ;
typedef int MMAL_BOOL_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;

MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_2,
                                            MMAL_CORE_STATS_DIR VAR_3,
                                            MMAL_BOOL_T VAR_4,
                                            MMAL_CORE_STATISTICS_T *VAR_5)
{
   MMAL_PARAMETER_CORE_STATISTICS_T VAR_6;
   MMAL_STATUS_T VAR_7;

   FUNC_0(&VAR_6, 0, sizeof(VAR_6));
   VAR_6.hdr.id = VAR_0;
   VAR_6.hdr.size = sizeof(VAR_6);
   VAR_6.dir = VAR_3;
   VAR_6.reset = VAR_4;

   VAR_7 = FUNC_1(VAR_2, &VAR_6.hdr);
   if (VAR_7 == VAR_1)
      *VAR_5 = VAR_6.stats;
   return VAR_7;
}
