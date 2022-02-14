
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_3__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct pps_event_time {TYPE_1__ ts_real; } ;
struct efx_ptp_data {scalar_t__ base_sync_ns; scalar_t__ last_sync_ns; int base_sync_valid; struct pps_event_time host_time_pps; TYPE_2__* timeset; } ;
struct efx_nic {int net_dev; struct efx_ptp_data* ptp_data; } ;
struct TYPE_4__ {scalar_t__ window; scalar_t__ waitns; int host_start; scalar_t__ nanoseconds; } ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_3 (struct pps_event_time*,struct timespec) ;

__attribute__((used)) static int FUNC_4(struct efx_nic *VAR_9, u8 *VAR_10,
     size_t VAR_11,
     const struct pps_event_time *VAR_12)
{
 unsigned VAR_13 = (VAR_11 /
          VAR_2);
 unsigned VAR_14;
 unsigned VAR_15;
 unsigned VAR_16 = 0;
 unsigned VAR_17 = 0;
 struct efx_ptp_data *VAR_18 = VAR_9->ptp_data;
 u32 VAR_19;
 u32 VAR_20;
 struct timespec VAR_21;

 if (VAR_13 == 0)
  return -VAR_0;




 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  FUNC_1(VAR_10, &VAR_18->timeset[VAR_14]);
  VAR_10 += VAR_2;
 }





 VAR_15 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  if (VAR_18->timeset[VAR_14].window > VAR_18->timeset[VAR_14].waitns) {
   unsigned VAR_22;

   VAR_22 = VAR_18->timeset[VAR_14].window - VAR_18->timeset[VAR_14].waitns;
   if (VAR_22 >= VAR_6 &&
       VAR_22 < VAR_1) {
    VAR_15 += VAR_18->timeset[VAR_14].window;
    VAR_16++;
    VAR_17 = VAR_14;
   }
  }

 if (VAR_16 == 0) {
  FUNC_2(VAR_9, VAR_7, VAR_9->net_dev,
      "PTP no suitable synchronisations %dns\n",
      VAR_18->base_sync_ns);
  return -VAR_0;
 }


 VAR_18->last_sync_ns = FUNC_0(VAR_15, VAR_16);
 if (!VAR_18->base_sync_valid || (VAR_18->last_sync_ns < VAR_18->base_sync_ns)) {
  VAR_18->base_sync_valid = 1;
  VAR_18->base_sync_ns = VAR_18->last_sync_ns;
 }


 VAR_21.tv_nsec =
  VAR_18->timeset[VAR_17].nanoseconds +
  VAR_12->ts_real.tv_nsec -
  (VAR_18->timeset[VAR_17].host_start & VAR_4);






 VAR_20 = VAR_18->timeset[VAR_17].host_start >> VAR_3;
 VAR_19 = VAR_12->ts_real.tv_sec & VAR_5;
 if (VAR_20 != VAR_19) {
  if (((VAR_20 + 1) & VAR_5) != VAR_19) {
   FUNC_2(VAR_9, VAR_8, VAR_9->net_dev,
       "PTP bad synchronisation seconds\n");
   return -VAR_0;
  } else {
   VAR_21.tv_sec = 1;
  }
 } else {
  VAR_21.tv_sec = 0;
 }

 VAR_18->host_time_pps = *VAR_12;
 FUNC_3(&VAR_18->host_time_pps, VAR_21);

 return 0;
}
