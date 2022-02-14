
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int req ;
typedef int reply ;
struct TYPE_4__ {int component_name; int result; int stats; } ;
typedef TYPE_1__ mmal_worker_get_core_stats_for_port_reply ;
struct TYPE_5__ {unsigned int component_index; unsigned int port_index; int header; int dir; int reset; int type; } ;
typedef TYPE_2__ mmal_worker_get_core_stats_for_port ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_STATS_RESULT_T ;
typedef int MMAL_PORT_TYPE_T ;
typedef int MMAL_CORE_STATS_DIR ;
typedef int MMAL_CORE_STATISTICS_T ;
typedef int MMAL_BOOL_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,int,int ,TYPE_1__*,size_t*,int ) ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (int) ;

MMAL_STATUS_T FUNC_4(MMAL_CORE_STATISTICS_T *VAR_3,
                                     MMAL_STATS_RESULT_T *VAR_4,
                                     char *VAR_5,
                                     size_t VAR_6,
                                     MMAL_PORT_TYPE_T VAR_7,
                                     unsigned VAR_8,
                                     unsigned VAR_9,
                                     MMAL_CORE_STATS_DIR VAR_10,
                                     MMAL_BOOL_T VAR_11)
{
   mmal_worker_get_core_stats_for_port VAR_12;
   mmal_worker_get_core_stats_for_port_reply VAR_13;
   MMAL_STATUS_T VAR_14;
   size_t VAR_15 = sizeof(VAR_13);

   VAR_12.component_index = VAR_8;
   VAR_12.port_index = VAR_9;
   VAR_12.type = VAR_7;
   VAR_12.reset = VAR_11;
   VAR_12.dir = VAR_10;

   VAR_14 = FUNC_1(FUNC_0(),
                                     &VAR_12.header, sizeof(VAR_12),
                                     VAR_2,
                                     &VAR_13, &VAR_15, VAR_0);

   if (VAR_14 == VAR_1)
   {
      FUNC_3(VAR_15 == sizeof(VAR_13));
      *VAR_3 = VAR_13.stats;
      *VAR_4 = VAR_13.result;
      FUNC_2(VAR_5, VAR_13.component_name, VAR_6);
      VAR_5[VAR_6-1] = '\0';
   }
   return VAR_14;
}
