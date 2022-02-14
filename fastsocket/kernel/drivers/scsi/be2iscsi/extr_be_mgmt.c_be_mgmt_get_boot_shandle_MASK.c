
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct beiscsi_hba {int dummy; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_get_boot_target_resp {unsigned int boot_session_handle; int boot_session_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int,char*) ;
 int FUNC_1 (struct beiscsi_hba*,unsigned int,struct be_mcc_wrb**,int *) ;
 struct be_cmd_get_boot_target_resp* FUNC_2 (struct be_mcc_wrb*) ;
 unsigned int FUNC_3 (struct beiscsi_hba*) ;
 unsigned int FUNC_4 (struct beiscsi_hba*,int ,unsigned int) ;

int FUNC_5(struct beiscsi_hba *VAR_9,
         unsigned int *VAR_10)
{
 struct be_cmd_get_boot_target_resp *VAR_11;
 struct be_mcc_wrb *VAR_12;
 unsigned int VAR_13;
 uint8_t VAR_14 = 3;
 int VAR_15;

 do {

  VAR_13 = FUNC_3(VAR_9);
  if (!VAR_13) {
   FUNC_0(VAR_9, VAR_7,
        VAR_0 | VAR_1,
        "BG_%d : Getting Boot Target Info Failed\n");
   return -VAR_3;
  }

  VAR_15 = FUNC_1(VAR_9, VAR_13, &VAR_12, ((void*)0));
  if (VAR_15) {
   FUNC_0(VAR_9, VAR_7,
        VAR_1 | VAR_0,
        "BG_%d : MBX CMD get_boot_target Failed\n");
   return -VAR_4;
  }

  VAR_11 = FUNC_2(VAR_12);


  if (!VAR_11->boot_session_count) {
   FUNC_0(VAR_9, VAR_8,
        VAR_1 | VAR_0,
        "BG_%d  ;No boot targets configured\n");
   return -VAR_5;
  }


  if (VAR_11->boot_session_handle != VAR_6) {
   *VAR_10 = VAR_11->boot_session_handle;
   return 0;
  }


  VAR_13 = FUNC_4(VAR_9, VAR_2,
       VAR_6);
  if (!VAR_13) {
   FUNC_0(VAR_9, VAR_7,
        VAR_1 | VAR_0,
        "BG_%d : mgmt_reopen_session Failed\n");
   return -VAR_3;
  }

  VAR_15 = FUNC_1(VAR_9, VAR_13, ((void*)0), ((void*)0));
  if (VAR_15) {
   FUNC_0(VAR_9, VAR_7,
        VAR_1 | VAR_0,
        "BG_%d : mgmt_reopen_session Failed");
   return VAR_15;
  }
 } while (--VAR_14);


 FUNC_0(VAR_9, VAR_7,
      VAR_1 | VAR_0,
      "BG_%d : Login to Boot Target Failed\n");
 return -VAR_5;
}
