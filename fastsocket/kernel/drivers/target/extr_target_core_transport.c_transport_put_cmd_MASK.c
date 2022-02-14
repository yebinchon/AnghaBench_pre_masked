
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int transport_state; int t_state_lock; int t_fe_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct se_cmd*) ;
 int FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*) ;

__attribute__((used)) static void FUNC_7(struct se_cmd *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->t_state_lock, VAR_2);
 if (FUNC_1(&VAR_1->t_fe_count) &&
     !FUNC_0(&VAR_1->t_fe_count)) {
  FUNC_3(&VAR_1->t_state_lock, VAR_2);
  return;
 }

 if (VAR_1->transport_state & VAR_0) {
  VAR_1->transport_state &= ~VAR_0;
  FUNC_4(VAR_1);
 }
 FUNC_3(&VAR_1->t_state_lock, VAR_2);

 FUNC_5(VAR_1);
 FUNC_6(VAR_1);
 return;
}
