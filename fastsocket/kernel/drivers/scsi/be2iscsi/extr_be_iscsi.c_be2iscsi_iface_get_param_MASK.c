
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_iface {int dummy; } ;
struct beiscsi_hba {int dummy; } ;
struct TYPE_2__ {int addr; } ;
struct be_cmd_get_def_gateway_resp {TYPE_1__ ip_addr; } ;
struct Scsi_Host {int dummy; } ;
typedef int gateway ;
typedef enum iscsi_param_type { ____Placeholder_iscsi_param_type } iscsi_param_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*,struct iscsi_iface*,int,char*) ;
 struct beiscsi_hba* FUNC_1 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_2 (struct iscsi_iface*) ;
 int FUNC_3 (struct be_cmd_get_def_gateway_resp*,int ,int) ;
 int FUNC_4 (struct beiscsi_hba*,int ,struct be_cmd_get_def_gateway_resp*) ;
 int FUNC_5 (char*,char*,...) ;

int FUNC_6(struct iscsi_iface *VAR_2,
  enum iscsi_param_type VAR_3,
  int VAR_4, char *VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_2(VAR_2);
 struct beiscsi_hba *VAR_7 = FUNC_1(VAR_6);
 struct be_cmd_get_def_gateway_resp VAR_8;
 int VAR_9 = -VAR_1;

 switch (VAR_4) {
 case 135:
 case 132:
 case 134:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_9 = FUNC_0(VAR_7, VAR_2, VAR_4, VAR_5);
  break;
 case 136:
  VAR_9 = FUNC_5(VAR_5, "enabled\n");
  break;
 case 133:
  FUNC_3(&VAR_8, 0, sizeof(VAR_8));
  VAR_9 = FUNC_4(VAR_7, VAR_0, &VAR_8);
  if (!VAR_9)
   VAR_9 = FUNC_5(VAR_5, "%pI4\n", &VAR_8.ip_addr.addr);
  break;
 default:
  VAR_9 = -VAR_1;
 }

 return VAR_9;
}
