
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {scalar_t__ ls_recover_begin; scalar_t__ ls_recover_status; int ls_in_recovery; int ls_recv_active; int ls_recover_lock; int ls_recover_seq; int ls_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ls*) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct dlm_ls *VAR_3)
{
 int VAR_4;
 FUNC_2(&VAR_3->ls_recv_active);







 FUNC_4(&VAR_3->ls_recover_lock);
 FUNC_3(VAR_0, &VAR_3->ls_flags);
 VAR_4 = FUNC_6(VAR_1, &VAR_3->ls_flags);
 VAR_3->ls_recover_seq++;
 FUNC_5(&VAR_3->ls_recover_lock);






 FUNC_7(&VAR_3->ls_recv_active);
 if (VAR_4)
  FUNC_2(&VAR_3->ls_in_recovery);







 FUNC_1(VAR_3);
 VAR_3->ls_recover_status = 0;
 FUNC_0(VAR_3);

 if (!VAR_3->ls_recover_begin)
  VAR_3->ls_recover_begin = VAR_2;
 return 0;
}
