
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_host {int initiatorname; int hwaddress; int netdev; } ;
struct Scsi_Host {int dummy; } ;
typedef enum iscsi_host_param { ____Placeholder_iscsi_host_param } iscsi_host_param ;


 int VAR_0 ;



 int FUNC_0 (int *,char*) ;
 struct iscsi_host* FUNC_1 (struct Scsi_Host*) ;

int FUNC_2(struct Scsi_Host *VAR_1, enum iscsi_host_param VAR_2,
    char *VAR_3, int VAR_4)
{
 struct iscsi_host *VAR_5 = FUNC_1(VAR_1);

 switch (VAR_2) {
 case 128:
  return FUNC_0(&VAR_5->netdev, VAR_3);
 case 130:
  return FUNC_0(&VAR_5->hwaddress, VAR_3);
 case 129:
  return FUNC_0(&VAR_5->initiatorname, VAR_3);
 default:
  return -VAR_0;
 }

 return 0;
}
