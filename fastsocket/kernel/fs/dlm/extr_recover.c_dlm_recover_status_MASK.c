
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_ls {int ls_recover_lock; int ls_recover_status; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

uint32_t FUNC_2(struct dlm_ls *VAR_0)
{
 uint32_t VAR_1;
 FUNC_0(&VAR_0->ls_recover_lock);
 VAR_1 = VAR_0->ls_recover_status;
 FUNC_1(&VAR_0->ls_recover_lock);
 return VAR_1;
}
