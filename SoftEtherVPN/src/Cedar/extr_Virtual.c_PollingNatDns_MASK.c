
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VH ;
struct TYPE_4__ {int DnsPollingFlag; int DisconnectNow; scalar_t__ DnsFinished; } ;
typedef TYPE_1__ NAT_ENTRY ;


 int FUNC_0 (int *,TYPE_1__*) ;

void FUNC_1(VH *VAR_0, NAT_ENTRY *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->DnsFinished)
 {
  if (VAR_1->DnsPollingFlag == 0)
  {
   VAR_1->DnsPollingFlag = 1;

   FUNC_0(VAR_0, VAR_1);


   VAR_1->DisconnectNow = 1;
  }
 }
}
