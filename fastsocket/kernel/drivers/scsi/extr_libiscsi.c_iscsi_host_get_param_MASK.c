
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_host {char* netdev; char* hwaddress; char* initiatorname; } ;
struct Scsi_Host {int dummy; } ;
typedef enum iscsi_host_param { ____Placeholder_iscsi_host_param } iscsi_host_param ;


 int VAR_0 ;



 struct iscsi_host* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (char*,char*,char*) ;

int FUNC_2(struct Scsi_Host *VAR_1, enum iscsi_host_param VAR_2,
    char *VAR_3)
{
 struct iscsi_host *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 switch (VAR_2) {
 case 128:
  VAR_5 = FUNC_1(VAR_3, "%s\n", VAR_4->netdev);
  break;
 case 130:
  VAR_5 = FUNC_1(VAR_3, "%s\n", VAR_4->hwaddress);
  break;
 case 129:
  VAR_5 = FUNC_1(VAR_3, "%s\n", VAR_4->initiatorname);
  break;
 default:
  return -VAR_0;
 }

 return VAR_5;
}
