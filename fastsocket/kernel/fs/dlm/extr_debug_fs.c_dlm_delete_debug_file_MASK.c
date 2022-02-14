
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {scalar_t__ ls_debug_all_dentry; scalar_t__ ls_debug_locks_dentry; scalar_t__ ls_debug_waiters_dentry; scalar_t__ ls_debug_rsb_dentry; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct dlm_ls *VAR_0)
{
 if (VAR_0->ls_debug_rsb_dentry)
  FUNC_0(VAR_0->ls_debug_rsb_dentry);
 if (VAR_0->ls_debug_waiters_dentry)
  FUNC_0(VAR_0->ls_debug_waiters_dentry);
 if (VAR_0->ls_debug_locks_dentry)
  FUNC_0(VAR_0->ls_debug_locks_dentry);
 if (VAR_0->ls_debug_all_dentry)
  FUNC_0(VAR_0->ls_debug_all_dentry);
}
