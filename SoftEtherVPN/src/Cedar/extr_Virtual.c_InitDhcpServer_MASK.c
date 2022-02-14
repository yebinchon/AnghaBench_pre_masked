
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* DhcpPendingLeaseList; void* DhcpLeaseList; } ;
typedef TYPE_1__ VH ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

void FUNC_1(VH *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }


 VAR_1->DhcpLeaseList = FUNC_0(VAR_0);
 VAR_1->DhcpPendingLeaseList = FUNC_0(VAR_0);
}
