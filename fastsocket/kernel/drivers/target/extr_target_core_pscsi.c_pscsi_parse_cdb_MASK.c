
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {unsigned char* t_task_cdb; int se_cmd_flags; int execute_cmd; } ;
typedef int sense_reason_t ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (unsigned char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static sense_reason_t
FUNC_1(struct se_cmd *VAR_5)
{
 unsigned char *VAR_6 = VAR_5->t_task_cdb;

 if (VAR_5->se_cmd_flags & VAR_0)
  return VAR_2;

 FUNC_0(VAR_6);






 switch (VAR_6[0]) {
 case 133:
  VAR_5->execute_cmd = VAR_4;
  return 0;
 case 134:
 case 137:
 case 136:
 case 135:
 case 129:
 case 132:
 case 131:
 case 130:
 case 128:
  VAR_5->se_cmd_flags |= VAR_1;

 default:
  VAR_5->execute_cmd = VAR_3;
  return 0;
 }
}
