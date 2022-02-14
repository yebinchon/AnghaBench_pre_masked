
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_recover_list_lock; int ls_recover_list; } ;
struct dlm_direntry {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dlm_ls *VAR_0, struct dlm_direntry *VAR_1)
{
 FUNC_1(&VAR_0->ls_recover_list_lock);
 FUNC_0(&VAR_1->list, &VAR_0->ls_recover_list);
 FUNC_2(&VAR_0->ls_recover_list_lock);
}
