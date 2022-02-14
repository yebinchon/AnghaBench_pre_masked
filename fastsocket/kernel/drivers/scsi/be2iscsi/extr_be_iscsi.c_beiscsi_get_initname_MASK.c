
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int dummy; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_hba_name {char* initiator_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int,char*) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int,struct be_mcc_wrb**,int *) ;
 struct be_cmd_hba_name* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_4, struct beiscsi_hba *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 struct be_mcc_wrb *VAR_8;
 struct be_cmd_hba_name *VAR_9;

 VAR_7 = FUNC_0(VAR_5);
 if (!VAR_7) {
  FUNC_1(VAR_5, VAR_3, VAR_0,
       "BS_%d : Getting Initiator Name Failed\n");

  return -VAR_2;
 }

 VAR_6 = FUNC_2(VAR_5, VAR_7, &VAR_8, ((void*)0));
 if (VAR_6) {
  FUNC_1(VAR_5, VAR_3,
       VAR_0 | VAR_1,
       "BS_%d : Initiator Name MBX Failed\n");
  return VAR_6;
 }

 VAR_9 = FUNC_3(VAR_8);
 VAR_6 = FUNC_4(VAR_4, "%s\n", VAR_9->initiator_name);
 return VAR_6;
}
