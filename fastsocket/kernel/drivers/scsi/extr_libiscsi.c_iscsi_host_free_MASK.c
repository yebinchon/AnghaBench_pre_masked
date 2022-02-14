
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_host {int initiatorname; int hwaddress; int netdev; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct Scsi_Host*) ;
 struct iscsi_host* FUNC_2 (struct Scsi_Host*) ;

void FUNC_3(struct Scsi_Host *VAR_0)
{
 struct iscsi_host *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->netdev);
 FUNC_0(VAR_1->hwaddress);
 FUNC_0(VAR_1->initiatorname);
 FUNC_1(VAR_0);
}
