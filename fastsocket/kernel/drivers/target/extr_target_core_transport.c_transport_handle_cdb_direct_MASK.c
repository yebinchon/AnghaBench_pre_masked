
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int transport_state; int t_state; int se_lun; } ;
typedef scalar_t__ sense_reason_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct se_cmd*) ;
 int FUNC_4 (struct se_cmd*,scalar_t__) ;

int FUNC_5(
 struct se_cmd *VAR_3)
{
 sense_reason_t VAR_4;

 if (!VAR_3->se_lun) {
  FUNC_0();
  FUNC_2("cmd->se_lun is NULL\n");
  return -VAR_1;
 }
 if (FUNC_1()) {
  FUNC_0();
  FUNC_2("transport_generic_handle_cdb cannot be called"
    " from interrupt context\n");
  return -VAR_1;
 }
 VAR_3->t_state = VAR_2;
 VAR_3->transport_state |= VAR_0;






 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  FUNC_4(VAR_3, VAR_4);
 return 0;
}
