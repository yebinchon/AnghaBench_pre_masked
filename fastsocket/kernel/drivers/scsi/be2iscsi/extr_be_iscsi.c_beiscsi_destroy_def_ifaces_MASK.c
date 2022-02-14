
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {scalar_t__ ipv4_iface; scalar_t__ ipv6_iface; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct beiscsi_hba *VAR_0)
{
 if (VAR_0->ipv6_iface)
  FUNC_0(VAR_0->ipv6_iface);
 if (VAR_0->ipv4_iface)
  FUNC_0(VAR_0->ipv4_iface);
}
