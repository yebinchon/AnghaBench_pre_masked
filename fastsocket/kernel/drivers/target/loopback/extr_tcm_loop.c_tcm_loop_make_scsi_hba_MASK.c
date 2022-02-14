
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_wwn {int dummy; } ;
struct tcm_loop_hba {struct se_wwn tl_hba_wwn; struct Scsi_Host* sh; int * tl_wwn_address; int tl_proto_id; } ;
struct target_fabric_configfs {int dummy; } ;
struct config_group {int dummy; } ;
struct Scsi_Host {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_wwn* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct tcm_loop_hba*) ;
 struct tcm_loop_hba* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ,char const*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,scalar_t__,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,char*) ;
 int FUNC_8 (struct tcm_loop_hba*) ;
 int VAR_7 ;
 int FUNC_9 (struct tcm_loop_hba*,int ) ;

struct se_wwn *FUNC_10(
 struct target_fabric_configfs *VAR_8,
 struct config_group *VAR_9,
 const char *VAR_10)
{
 struct tcm_loop_hba *VAR_11;
 struct Scsi_Host *VAR_12;
 char *VAR_13;
 int VAR_14, VAR_15 = 0;

 VAR_11 = FUNC_2(sizeof(struct tcm_loop_hba), VAR_2);
 if (!VAR_11) {
  FUNC_4("Unable to allocate struct tcm_loop_hba\n");
  return FUNC_0(-VAR_1);
 }




 VAR_13 = FUNC_7(VAR_10, "naa.");
 if (VAR_13) {
  VAR_11->tl_proto_id = VAR_5;
  goto check_len;
 }
 VAR_13 = FUNC_7(VAR_10, "fc.");
 if (VAR_13) {
  VAR_11->tl_proto_id = VAR_3;
  VAR_15 = 3;
  goto check_len;
 }
 VAR_13 = FUNC_7(VAR_10, "iqn.");
 if (!VAR_13) {
  FUNC_4("Unable to locate prefix for emulated Target "
    "Port: %s\n", VAR_10);
  VAR_14 = -VAR_0;
  goto out;
 }
 VAR_11->tl_proto_id = VAR_4;

check_len:
 if (FUNC_6(VAR_10) >= VAR_6) {
  FUNC_4("Emulated NAA %s Address: %s, exceeds"
   " max: %d\n", VAR_10, FUNC_8(VAR_11),
   VAR_6);
  VAR_14 = -VAR_0;
  goto out;
 }
 FUNC_5(&VAR_11->tl_wwn_address[0], VAR_6, "%s", &VAR_10[VAR_15]);






 VAR_14 = FUNC_9(VAR_11, VAR_7);
 if (VAR_14)
  goto out;

 VAR_12 = VAR_11->sh;
 VAR_7++;
 FUNC_3("TCM_Loop_ConfigFS: Allocated emulated Target"
  " %s Address: %s at Linux/SCSI Host ID: %d\n",
  FUNC_8(VAR_11), VAR_10, VAR_12->host_no);

 return &VAR_11->tl_hba_wwn;
out:
 FUNC_1(VAR_11);
 return FUNC_0(VAR_14);
}
