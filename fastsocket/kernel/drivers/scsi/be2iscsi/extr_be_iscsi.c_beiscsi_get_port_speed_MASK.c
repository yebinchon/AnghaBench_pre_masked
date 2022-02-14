
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_host {int port_speed; } ;
struct beiscsi_hba {int dummy; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_ntwk_link_status_resp {int mac_speed; } ;
struct Scsi_Host {struct iscsi_cls_host* shost_data; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int,char*) ;
 int FUNC_2 (struct beiscsi_hba*,unsigned int,struct be_mcc_wrb**,int *) ;
 struct be_cmd_ntwk_link_status_resp* FUNC_3 (struct be_mcc_wrb*) ;
 struct beiscsi_hba* FUNC_4 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_5(struct Scsi_Host *VAR_8)
{
 int VAR_9;
 unsigned int VAR_10;
 struct be_mcc_wrb *VAR_11;
 struct be_cmd_ntwk_link_status_resp *VAR_12;
 struct beiscsi_hba *VAR_13 = FUNC_4(VAR_8);
 struct iscsi_cls_host *VAR_14 = VAR_8->shost_data;

 VAR_10 = FUNC_0(VAR_13);
 if (!VAR_10) {
  FUNC_1(VAR_13, VAR_7, VAR_0,
       "BS_%d : Getting Port Speed Failed\n");

   return -VAR_2;
 }
 VAR_9 = FUNC_2(VAR_13, VAR_10, &VAR_11, ((void*)0));
 if (VAR_9) {
  FUNC_1(VAR_13, VAR_7,
       VAR_0 | VAR_1,
       "BS_%d : Port Speed MBX Failed\n");
  return VAR_9;
 }
 VAR_12 = FUNC_3(VAR_11);

 switch (VAR_12->mac_speed) {
 case 129:
  VAR_14->port_speed = VAR_4;
  break;
 case 131:
  VAR_14->port_speed = 131;
  break;
 case 128:
  VAR_14->port_speed = VAR_5;
  break;
 case 130:
  VAR_14->port_speed = VAR_3;
  break;
 default:
  VAR_14->port_speed = VAR_6;
 }
 return 0;
}
