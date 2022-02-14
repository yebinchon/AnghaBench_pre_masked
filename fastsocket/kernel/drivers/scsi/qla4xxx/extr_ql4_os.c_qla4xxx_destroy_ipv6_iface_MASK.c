
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int * iface_ipv6_1; int * iface_ipv6_0; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct scsi_qla_host *VAR_0)
{
 if (VAR_0->iface_ipv6_0) {
  FUNC_0(VAR_0->iface_ipv6_0);
  VAR_0->iface_ipv6_0 = ((void*)0);
 }
 if (VAR_0->iface_ipv6_1) {
  FUNC_0(VAR_0->iface_ipv6_1);
  VAR_0->iface_ipv6_1 = ((void*)0);
 }
}
