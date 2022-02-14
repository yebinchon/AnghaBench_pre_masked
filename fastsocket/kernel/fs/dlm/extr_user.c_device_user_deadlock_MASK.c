
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_user_proc {int lockspace; } ;
struct dlm_ls {int dummy; } ;
struct dlm_lock_params {int lkid; int flags; } ;


 int VAR_0 ;
 struct dlm_ls* FUNC_0 (int ) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_ls*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dlm_user_proc *VAR_1,
    struct dlm_lock_params *VAR_2)
{
 struct dlm_ls *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1->lockspace);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3, VAR_2->flags, VAR_2->lkid);

 FUNC_1(VAR_3);
 return VAR_4;
}
