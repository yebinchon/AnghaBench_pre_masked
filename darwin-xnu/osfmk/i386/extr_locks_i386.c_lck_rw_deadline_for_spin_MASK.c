
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ lck_rw_shared_count; scalar_t__ lck_w_waiting; scalar_t__ lck_r_waiting; scalar_t__ lck_rw_can_sleep; } ;
typedef TYPE_1__ lck_rw_t ;
struct TYPE_5__ {scalar_t__ max_cpus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static inline uint64_t
FUNC_1(lck_rw_t *VAR_2)
{
 if (VAR_2->lck_rw_can_sleep) {
  if (VAR_2->lck_r_waiting || VAR_2->lck_w_waiting || VAR_2->lck_rw_shared_count > VAR_1.max_cpus) {
   return (FUNC_0());
  }
  return (FUNC_0() + VAR_0);
 } else
  return (FUNC_0() + (100000LL * 1000000000LL));
}
