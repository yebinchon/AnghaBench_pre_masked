
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int DhcpPendingLeaseList; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {scalar_t__ IpAddress; } ;
typedef TYPE_2__ DHCP_LEASE ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

DHCP_LEASE *FUNC_2(VH *VAR_0, UINT VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0->DhcpPendingLeaseList); ++VAR_2)
 {
  DHCP_LEASE *VAR_3 = FUNC_0(VAR_0->DhcpPendingLeaseList, VAR_2);
  if (VAR_3->IpAddress == VAR_1)
  {
   return VAR_3;
  }
 }

 return ((void*)0);
}
