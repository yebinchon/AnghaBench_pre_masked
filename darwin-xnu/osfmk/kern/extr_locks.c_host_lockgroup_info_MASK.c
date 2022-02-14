
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_size_t ;
typedef scalar_t__ vm_map_copy_t ;
typedef int vm_map_address_t ;
typedef int queue_entry_t ;
typedef int mach_msg_type_number_t ;
struct TYPE_13__ {int lockgroup_name; int lock_rw_wait_cum; int lock_rw_wait_max; int lock_rw_held_cum; int lock_rw_held_max; int lock_rw_wait_cnt; int lock_rw_miss_cnt; int lock_rw_held_cnt; int lock_rw_util_cnt; int lock_rw_cnt; int lock_mtx_wait_cum; int lock_mtx_wait_max; int lock_mtx_held_cum; int lock_mtx_held_max; int lock_mtx_wait_cnt; int lock_mtx_miss_cnt; int lock_mtx_held_cnt; int lock_mtx_util_cnt; int lock_mtx_cnt; int lock_spin_held_cum; int lock_spin_held_max; int lock_spin_miss_cnt; int lock_spin_held_cnt; int lock_spin_util_cnt; int lock_spin_cnt; } ;
typedef TYPE_5__ lockgroup_info_t ;
typedef TYPE_5__* lockgroup_info_array_t ;
struct TYPE_11__ {int lck_grp_rw_wait_cum; int lck_grp_rw_wait_max; int lck_grp_rw_held_cum; int lck_grp_rw_held_max; int lck_grp_rw_wait_cnt; int lck_grp_rw_miss_cnt; int lck_grp_rw_held_cnt; int lck_grp_rw_util_cnt; } ;
struct TYPE_10__ {int lck_grp_mtx_wait_cum; int lck_grp_mtx_wait_max; int lck_grp_mtx_held_cum; int lck_grp_mtx_held_max; int lck_grp_mtx_wait_cnt; int lck_grp_mtx_miss_cnt; int lck_grp_mtx_held_cnt; int lck_grp_mtx_util_cnt; } ;
struct TYPE_9__ {int lck_grp_spin_held_cum; int lck_grp_spin_held_max; int lck_grp_spin_miss_cnt; int lck_grp_spin_held_cnt; int lck_grp_spin_util_cnt; } ;
struct TYPE_12__ {TYPE_3__ lck_grp_rw_stat; TYPE_2__ lck_grp_mtx_stat; TYPE_1__ lck_grp_spin_stat; } ;
struct TYPE_14__ {int lck_grp_name; TYPE_4__ lck_grp_stat; int lck_grp_rwcnt; int lck_grp_mtxcnt; int lck_grp_spincnt; } ;
typedef TYPE_7__ lck_grp_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ host_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ,scalar_t__*) ;

kern_return_t
FUNC_10(
 host_t VAR_10,
 lockgroup_info_array_t *VAR_11,
 mach_msg_type_number_t *VAR_12)
{
 lockgroup_info_t *VAR_13;
 lockgroup_info_t *VAR_14;
 vm_offset_t VAR_15;
 vm_size_t VAR_16;
 vm_size_t VAR_17;
 lck_grp_t *VAR_18;
 unsigned int VAR_19;
 vm_map_copy_t VAR_20;
 kern_return_t VAR_21;

 if (VAR_10 == VAR_0)
  return VAR_1;

 FUNC_3(&VAR_8);

 VAR_16 = VAR_7 * sizeof(*VAR_14);
 VAR_17 = FUNC_7(VAR_16);
 VAR_21 = FUNC_2(VAR_6,
       &VAR_15, VAR_17, VAR_5);
 if (VAR_21 != VAR_2) {
  FUNC_4(&VAR_8);
  return(VAR_21);
 }

 VAR_13 = (lockgroup_info_t *) VAR_15;
 VAR_18 = (lck_grp_t *)FUNC_5(&VAR_9);
 VAR_14 = VAR_13;

 for (VAR_19 = 0; VAR_19 < VAR_7; VAR_19++) {

  VAR_14->lock_spin_cnt = VAR_18->lck_grp_spincnt;
  VAR_14->lock_spin_util_cnt = VAR_18->lck_grp_stat.lck_grp_spin_stat.lck_grp_spin_util_cnt;
  VAR_14->lock_spin_held_cnt = VAR_18->lck_grp_stat.lck_grp_spin_stat.lck_grp_spin_held_cnt;
  VAR_14->lock_spin_miss_cnt = VAR_18->lck_grp_stat.lck_grp_spin_stat.lck_grp_spin_miss_cnt;
  VAR_14->lock_spin_held_max = VAR_18->lck_grp_stat.lck_grp_spin_stat.lck_grp_spin_held_max;
  VAR_14->lock_spin_held_cum = VAR_18->lck_grp_stat.lck_grp_spin_stat.lck_grp_spin_held_cum;

  VAR_14->lock_mtx_cnt = VAR_18->lck_grp_mtxcnt;
  VAR_14->lock_mtx_util_cnt = VAR_18->lck_grp_stat.lck_grp_mtx_stat.lck_grp_mtx_util_cnt;
  VAR_14->lock_mtx_held_cnt = VAR_18->lck_grp_stat.lck_grp_mtx_stat.lck_grp_mtx_held_cnt;
  VAR_14->lock_mtx_miss_cnt = VAR_18->lck_grp_stat.lck_grp_mtx_stat.lck_grp_mtx_miss_cnt;
  VAR_14->lock_mtx_wait_cnt = VAR_18->lck_grp_stat.lck_grp_mtx_stat.lck_grp_mtx_wait_cnt;
  VAR_14->lock_mtx_held_max = VAR_18->lck_grp_stat.lck_grp_mtx_stat.lck_grp_mtx_held_max;
  VAR_14->lock_mtx_held_cum = VAR_18->lck_grp_stat.lck_grp_mtx_stat.lck_grp_mtx_held_cum;
  VAR_14->lock_mtx_wait_max = VAR_18->lck_grp_stat.lck_grp_mtx_stat.lck_grp_mtx_wait_max;
  VAR_14->lock_mtx_wait_cum = VAR_18->lck_grp_stat.lck_grp_mtx_stat.lck_grp_mtx_wait_cum;

  VAR_14->lock_rw_cnt = VAR_18->lck_grp_rwcnt;
  VAR_14->lock_rw_util_cnt = VAR_18->lck_grp_stat.lck_grp_rw_stat.lck_grp_rw_util_cnt;
  VAR_14->lock_rw_held_cnt = VAR_18->lck_grp_stat.lck_grp_rw_stat.lck_grp_rw_held_cnt;
  VAR_14->lock_rw_miss_cnt = VAR_18->lck_grp_stat.lck_grp_rw_stat.lck_grp_rw_miss_cnt;
  VAR_14->lock_rw_wait_cnt = VAR_18->lck_grp_stat.lck_grp_rw_stat.lck_grp_rw_wait_cnt;
  VAR_14->lock_rw_held_max = VAR_18->lck_grp_stat.lck_grp_rw_stat.lck_grp_rw_held_max;
  VAR_14->lock_rw_held_cum = VAR_18->lck_grp_stat.lck_grp_rw_stat.lck_grp_rw_held_cum;
  VAR_14->lock_rw_wait_max = VAR_18->lck_grp_stat.lck_grp_rw_stat.lck_grp_rw_wait_max;
  VAR_14->lock_rw_wait_cum = VAR_18->lck_grp_stat.lck_grp_rw_stat.lck_grp_rw_wait_cum;

  (void) FUNC_8(VAR_14->lockgroup_name,VAR_18->lck_grp_name, VAR_3);

  VAR_18 = (lck_grp_t *)(FUNC_6((queue_entry_t)(VAR_18)));
  VAR_14++;
 }

 *VAR_12 = VAR_7;
 FUNC_4(&VAR_8);

 if (VAR_16 != VAR_17)
  FUNC_1((char *)VAR_14, VAR_17 - VAR_16);

 VAR_21 = FUNC_9(VAR_6, (vm_map_address_t)VAR_15,
      (vm_map_size_t)VAR_16, VAR_4, &VAR_20);
 FUNC_0(VAR_21 == VAR_2);

 *VAR_11 = (lockgroup_info_t *) VAR_20;

 return(VAR_2);
}
