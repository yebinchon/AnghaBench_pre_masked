
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lockgroup_info_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_8__ {scalar_t__ lock_rw_wait_cnt; scalar_t__ lock_rw_miss_cnt; scalar_t__ lock_rw_util_cnt; scalar_t__ lock_mtx_held_cnt; scalar_t__ lock_mtx_wait_cnt; scalar_t__ lock_mtx_miss_cnt; scalar_t__ lock_mtx_util_cnt; scalar_t__ lock_spin_miss_cnt; scalar_t__ lock_spin_util_cnt; } ;
struct TYPE_7__ {scalar_t__ lock_rw_wait_cnt; scalar_t__ lock_rw_miss_cnt; scalar_t__ lock_rw_util_cnt; scalar_t__ lock_mtx_held_cnt; scalar_t__ lock_mtx_wait_cnt; scalar_t__ lock_mtx_miss_cnt; scalar_t__ lock_mtx_util_cnt; scalar_t__ lock_spin_miss_cnt; scalar_t__ lock_spin_util_cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__**,int*) ;
 TYPE_1__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int) ;

void
FUNC_4(void)
{
 kern_return_t VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_1(VAR_3, &VAR_5, &VAR_2);

 if (VAR_7 != VAR_1)
 {
  FUNC_2("host_statistics", VAR_7);
  FUNC_0 (VAR_0);
 }

 FUNC_3(VAR_4, VAR_5, VAR_2 * sizeof(lockgroup_info_t));
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_4[VAR_8].lock_spin_util_cnt =
      VAR_5[VAR_8].lock_spin_util_cnt -
      VAR_6[VAR_8].lock_spin_util_cnt;
  VAR_4[VAR_8].lock_spin_miss_cnt =
      VAR_5[VAR_8].lock_spin_miss_cnt -
      VAR_6[VAR_8].lock_spin_miss_cnt;
  VAR_4[VAR_8].lock_mtx_util_cnt =
      VAR_5[VAR_8].lock_mtx_util_cnt -
      VAR_6[VAR_8].lock_mtx_util_cnt;
  VAR_4[VAR_8].lock_mtx_miss_cnt =
      VAR_5[VAR_8].lock_mtx_miss_cnt -
      VAR_6[VAR_8].lock_mtx_miss_cnt;
  VAR_4[VAR_8].lock_mtx_wait_cnt =
      VAR_5[VAR_8].lock_mtx_wait_cnt -
      VAR_6[VAR_8].lock_mtx_wait_cnt;
  VAR_4[VAR_8].lock_mtx_held_cnt =
      VAR_5[VAR_8].lock_mtx_held_cnt -
      VAR_6[VAR_8].lock_mtx_held_cnt;
  VAR_4[VAR_8].lock_rw_util_cnt =
      VAR_5[VAR_8].lock_rw_util_cnt -
      VAR_6[VAR_8].lock_rw_util_cnt;
  VAR_4[VAR_8].lock_rw_miss_cnt =
      VAR_5[VAR_8].lock_rw_miss_cnt -
      VAR_6[VAR_8].lock_rw_miss_cnt;
  VAR_4[VAR_8].lock_rw_wait_cnt =
      VAR_5[VAR_8].lock_rw_wait_cnt -
      VAR_6[VAR_8].lock_rw_wait_cnt;
 }
 FUNC_3(VAR_6, VAR_5, VAR_2 * sizeof(lockgroup_info_t));
}
