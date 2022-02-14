
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lck_mtx_mlocked; scalar_t__ lck_mtx_ilocked; } ;
typedef TYPE_1__ lck_mtx_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;

boolean_t
FUNC_1(lck_mtx_t *VAR_3)
{
 if (VAR_2) {
  FUNC_0("panic: kdp_lck_mtx_lock_spin_is_acquired called outside of kernel debugger");
 }

 if (VAR_3->lck_mtx_ilocked || VAR_3->lck_mtx_mlocked) {
  return VAR_1;
 }

 return VAR_0;
}
