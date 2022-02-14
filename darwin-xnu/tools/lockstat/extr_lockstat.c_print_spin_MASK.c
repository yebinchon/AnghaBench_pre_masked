
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lock_spin_cnt; scalar_t__ lock_spin_util_cnt; scalar_t__ lock_spin_miss_cnt; scalar_t__ lockgroup_name; } ;
typedef TYPE_1__ lockgroup_info_t ;


 int FUNC_0 (char*,scalar_t__) ;

void
FUNC_1(int VAR_0, lockgroup_info_t *VAR_1)
{
 lockgroup_info_t *VAR_2 = &VAR_1[VAR_0];

 if (VAR_2->lock_spin_cnt != 0 && VAR_2->lock_spin_util_cnt != 0) {
  FUNC_0("%16lld ", VAR_2->lock_spin_util_cnt);
  FUNC_0("%16lld   ", VAR_2->lock_spin_miss_cnt);
  FUNC_0("%-14s\n", VAR_2->lockgroup_name);
 }
}
