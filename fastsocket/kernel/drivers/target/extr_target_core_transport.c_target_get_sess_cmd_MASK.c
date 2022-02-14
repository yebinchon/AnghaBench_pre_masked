
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int sess_cmd_lock; int sess_cmd_list; scalar_t__ sess_tearing_down; } ;
struct se_cmd {int check_release; int se_cmd_list; int se_cmd_flags; int cmd_kref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct se_session *VAR_2, struct se_cmd *VAR_3,
          bool VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_1(&VAR_3->cmd_kref);





 if (VAR_4 == 1) {
  FUNC_0(&VAR_3->cmd_kref);
  VAR_3->se_cmd_flags |= VAR_1;
 }

 FUNC_3(&VAR_2->sess_cmd_lock, VAR_5);
 if (VAR_2->sess_tearing_down) {
  VAR_6 = -VAR_0;
  goto out;
 }
 FUNC_2(&VAR_3->se_cmd_list, &VAR_2->sess_cmd_list);
 VAR_3->check_release = 1;

out:
 FUNC_4(&VAR_2->sess_cmd_lock, VAR_5);
 return VAR_6;
}
