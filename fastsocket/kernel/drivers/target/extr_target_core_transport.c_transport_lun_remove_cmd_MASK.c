
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_lun {int lun_cmd_lock; } ;
struct se_cmd {int transport_state; int se_lun_node; int t_state_lock; struct se_lun* se_lun; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct se_cmd*) ;

__attribute__((used)) static void FUNC_5(struct se_cmd *VAR_1)
{
 struct se_lun *VAR_2 = VAR_1->se_lun;
 unsigned long VAR_3;

 if (!VAR_2)
  return;

 FUNC_2(&VAR_1->t_state_lock, VAR_3);
 if (VAR_1->transport_state & VAR_0) {
  VAR_1->transport_state &= ~VAR_0;
  FUNC_4(VAR_1);
 }
 FUNC_3(&VAR_1->t_state_lock, VAR_3);

 FUNC_2(&VAR_2->lun_cmd_lock, VAR_3);
 if (!FUNC_1(&VAR_1->se_lun_node))
  FUNC_0(&VAR_1->se_lun_node);
 FUNC_3(&VAR_2->lun_cmd_lock, VAR_3);
}
