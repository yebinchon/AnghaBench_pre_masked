
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * DhcpPendingLeaseList; int * DhcpLeaseList; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT ;
typedef int DHCP_LEASE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(VH *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 for (VAR_1 = 0; VAR_1 < FUNC_2(VAR_0->DhcpLeaseList); ++VAR_1)
 {
  DHCP_LEASE *VAR_2 = FUNC_1(VAR_0->DhcpLeaseList, VAR_1);
  FUNC_0(VAR_2);
 }

 FUNC_3(VAR_0->DhcpLeaseList);
 VAR_0->DhcpLeaseList = ((void*)0);

 for (VAR_1 = 0; VAR_1 < FUNC_2(VAR_0->DhcpPendingLeaseList); ++VAR_1)
 {
  DHCP_LEASE *VAR_3 = FUNC_1(VAR_0->DhcpPendingLeaseList, VAR_1);
  FUNC_0(VAR_3);
 }

 FUNC_3(VAR_0->DhcpPendingLeaseList);
 VAR_0->DhcpPendingLeaseList = ((void*)0);
}
