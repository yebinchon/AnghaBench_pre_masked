
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int * iface_ipv4; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct scsi_qla_host *VAR_0)
{
 if (VAR_0->iface_ipv4) {
  FUNC_0(VAR_0->iface_ipv4);
  VAR_0->iface_ipv4 = ((void*)0);
 }
}
