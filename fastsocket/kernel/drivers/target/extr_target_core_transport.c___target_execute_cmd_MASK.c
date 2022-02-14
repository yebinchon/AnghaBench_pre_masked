
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int transport_state; int t_state_lock; scalar_t__ (* execute_cmd ) (struct se_cmd*) ;} ;
typedef scalar_t__ sense_reason_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct se_cmd*) ;
 int FUNC_3 (struct se_cmd*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct se_cmd *VAR_2)
{
 sense_reason_t VAR_3;

 FUNC_0(&VAR_2->t_state_lock);
 VAR_2->transport_state |= (VAR_0|VAR_1);
 FUNC_1(&VAR_2->t_state_lock);

 if (VAR_2->execute_cmd) {
  VAR_3 = VAR_2->execute_cmd(VAR_2);
  if (VAR_3) {
   FUNC_0(&VAR_2->t_state_lock);
   VAR_2->transport_state &= ~(VAR_0|VAR_1);
   FUNC_1(&VAR_2->t_state_lock);

   FUNC_3(VAR_2, VAR_3);
  }
 }
}
