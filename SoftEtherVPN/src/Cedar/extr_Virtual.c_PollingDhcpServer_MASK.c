
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ LastDhcpPolling; scalar_t__ Now; int DhcpPendingLeaseList; int DhcpLeaseList; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ ExpireTime; } ;
typedef TYPE_2__ DHCP_LEASE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(VH *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->LastDhcpPolling != 0)
 {
  if ((VAR_1->LastDhcpPolling + (UINT64)VAR_0) > VAR_1->Now &&
   VAR_1->LastDhcpPolling < VAR_1->Now)
  {
   return;
  }
 }
 VAR_1->LastDhcpPolling = VAR_1->Now;

LIST_CLEANUP:
 for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_1->DhcpLeaseList); ++VAR_2)
 {
  DHCP_LEASE *VAR_3 = FUNC_2(VAR_1->DhcpLeaseList, VAR_2);

  if (VAR_3->ExpireTime < VAR_1->Now)
  {
   FUNC_1(VAR_3);
   FUNC_0(VAR_1->DhcpLeaseList, VAR_3);
   goto LIST_CLEANUP;
  }
 }

PENDING_LIST_CLEANUP:

 for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_1->DhcpPendingLeaseList); ++VAR_2)
 {
  DHCP_LEASE *VAR_4 = FUNC_2(VAR_1->DhcpPendingLeaseList, VAR_2);

  if (VAR_4->ExpireTime < VAR_1->Now)
  {
   FUNC_1(VAR_4);
   FUNC_0(VAR_1->DhcpPendingLeaseList, VAR_4);
   goto PENDING_LIST_CLEANUP;
  }
 }
}
