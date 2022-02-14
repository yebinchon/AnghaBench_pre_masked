
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct dlm_ls {scalar_t__ ls_recover_seq; int ls_recv_active; int ls_recover_lock; int ls_in_recovery; int ls_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dlm_ls *VAR_2, uint64_t VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_0(&VAR_2->ls_recv_active);

 FUNC_2(&VAR_2->ls_recover_lock);
 if (VAR_2->ls_recover_seq == VAR_3) {
  FUNC_1(VAR_1, &VAR_2->ls_flags);

  FUNC_4(&VAR_2->ls_in_recovery);
  VAR_4 = 0;
 }
 FUNC_3(&VAR_2->ls_recover_lock);

 FUNC_4(&VAR_2->ls_recv_active);
 return VAR_4;
}
