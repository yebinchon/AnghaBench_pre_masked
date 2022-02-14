
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_7__ {int vpath_alarms; } ;
struct TYPE_6__ {int not_traffic_intr_cnt; int traffic_intr_cnt; int total_intr_cnt; } ;
struct TYPE_8__ {TYPE_3__ sw_dev_err_stats; TYPE_2__ sw_dev_info_stats; } ;
struct __vxge_hw_device {int vpaths_deployed; int * virtual_paths; TYPE_4__ stats; TYPE_1__* common_reg; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_5__ {int adapter_status; int titan_general_int_status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct __vxge_hw_device*,int ,int ) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;

enum vxge_hw_status FUNC_7(struct __vxge_hw_device *VAR_9,
          u32 VAR_10, u64 *VAR_11)
{
 u32 VAR_12;
 u64 VAR_13;
 u64 VAR_14;
 u64 VAR_15;
 enum vxge_hw_status VAR_16 = VAR_7;

 VAR_13 = FUNC_4(&VAR_9->common_reg->titan_general_int_status);

 if (FUNC_5(!VAR_13)) {

  *VAR_11 = 0;
  VAR_16 = VAR_4;
  goto exit;
 }

 if (FUNC_5(VAR_13 == VAR_1)) {

  VAR_14 = FUNC_4(&VAR_9->common_reg->adapter_status);

  if (VAR_14 == VAR_1) {

   FUNC_2(VAR_9,
    VAR_0, VAR_5);
   *VAR_11 = 0;
   VAR_16 = VAR_3;
   goto exit;
  }
 }

 VAR_9->stats.sw_dev_info_stats.total_intr_cnt++;

 *VAR_11 = VAR_13;

 VAR_15 = VAR_9->vpaths_deployed >>
    (64 - VAR_6);

 if (VAR_13 &
     FUNC_1(VAR_15)) {
  VAR_9->stats.sw_dev_info_stats.traffic_intr_cnt++;

  return VAR_7;
 }

 VAR_9->stats.sw_dev_info_stats.not_traffic_intr_cnt++;

 if (FUNC_5(VAR_13 &
   VAR_8)) {

  enum vxge_hw_status VAR_17 = VAR_7;

  VAR_9->stats.sw_dev_err_stats.vpath_alarms++;

  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {

   if (!(VAR_9->vpaths_deployed & FUNC_6(VAR_12)))
    continue;

   VAR_16 = FUNC_3(
    &VAR_9->virtual_paths[VAR_12], VAR_10);

   VAR_17 = FUNC_0(VAR_16, VAR_17);

   if (FUNC_5((VAR_16 == VAR_2) ||
    (VAR_16 == VAR_3)))
    break;
  }

  VAR_16 = VAR_17;
 }
exit:
 return VAR_16;
}
