
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char ip_address; } ;
struct scsi_qla_host {char* name_string; TYPE_1__ ip_config; int my_mac; } ;
struct Scsi_Host {int dummy; } ;
typedef enum iscsi_host_param { ____Placeholder_iscsi_host_param } iscsi_host_param ;


 int VAR_0 ;





 int VAR_1 ;
 char* FUNC_0 (struct Scsi_Host*) ;
 char* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*,int ,int ) ;
 struct scsi_qla_host* FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_7(struct Scsi_Host *VAR_2,
      enum iscsi_host_param VAR_3, char *VAR_4)
{
 struct scsi_qla_host *VAR_5 = FUNC_6(VAR_2);
 int VAR_6;

 switch (VAR_3) {
 case 132:
  VAR_6 = FUNC_5(VAR_4, VAR_5->my_mac, VAR_1);
  break;
 case 130:
  VAR_6 = FUNC_4(VAR_4, "%pI4\n", &VAR_5->ip_config.ip_address);
  break;
 case 131:
  VAR_6 = FUNC_4(VAR_4, "%s\n", VAR_5->name_string);
  break;
 case 128:
  FUNC_3(VAR_2);
  VAR_6 = FUNC_4(VAR_4, "%s\n", FUNC_1(VAR_2));
  break;
 case 129:
  FUNC_2(VAR_2);
  VAR_6 = FUNC_4(VAR_4, "%s\n", FUNC_0(VAR_2));
  break;
 default:
  return -VAR_0;
 }

 return VAR_6;
}
