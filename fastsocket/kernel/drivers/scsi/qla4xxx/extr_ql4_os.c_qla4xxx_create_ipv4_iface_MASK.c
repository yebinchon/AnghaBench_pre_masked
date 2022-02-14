
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {scalar_t__ iface_ipv4; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ,int ) ;
 int FUNC_1 (int ,struct scsi_qla_host*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct scsi_qla_host *VAR_3)
{
 if (VAR_3->iface_ipv4)
  return;


 VAR_3->iface_ipv4 = FUNC_0(VAR_3->host,
         &VAR_2,
         VAR_0, 0, 0);
 if (!VAR_3->iface_ipv4)
  FUNC_1(VAR_1, VAR_3, "Could not create IPv4 iSCSI "
      "iface0.\n");
}
