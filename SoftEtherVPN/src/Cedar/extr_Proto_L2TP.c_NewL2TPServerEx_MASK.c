
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int ref; } ;
struct TYPE_6__ {int IsIPsecIPv6; int CryptBlockSize; int * IkeServer; int ThreadList; int HaltCompletedEvent; void* TunnelList; void* SendPacketList; TYPE_2__* Cedar; int FlushList; } ;
typedef TYPE_1__ L2TP_SERVER ;
typedef int IKE_SERVER ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 void* FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (int) ;

L2TP_SERVER *FUNC_6(CEDAR *VAR_0, IKE_SERVER *VAR_1, bool VAR_2, UINT VAR_3)
{
 L2TP_SERVER *VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_5(sizeof(L2TP_SERVER));

 VAR_4->FlushList = FUNC_4();

 VAR_4->Cedar = VAR_0;
 FUNC_0(VAR_4->Cedar->ref);

 VAR_4->SendPacketList = FUNC_2(((void*)0));
 VAR_4->TunnelList = FUNC_2(((void*)0));

 VAR_4->HaltCompletedEvent = FUNC_1();

 VAR_4->ThreadList = FUNC_3();

 VAR_4->IkeServer = VAR_1;

 VAR_4->IsIPsecIPv6 = VAR_2;
 VAR_4->CryptBlockSize = VAR_3;

 return VAR_4;
}
