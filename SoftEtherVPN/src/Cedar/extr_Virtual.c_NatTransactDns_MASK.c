
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int NatDoCancelFlag; int NatTable; } ;
typedef TYPE_1__ VH ;
struct TYPE_8__ {int DnsFinished; int lock; struct TYPE_8__* DnsResponseHostName; struct TYPE_8__* DnsTargetHostName; int * DnsThread; scalar_t__ DisconnectNow; } ;
typedef int THREAD ;
typedef TYPE_2__ NAT_ENTRY ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int ,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

bool FUNC_7(VH *VAR_2, NAT_ENTRY *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 1;
 }

 if (VAR_3->DisconnectNow)
 {
  goto DISCONNECT;
 }

 if (VAR_3->DnsThread == ((void*)0) && VAR_3->DnsFinished == 0)
 {

  THREAD *VAR_4 = FUNC_3(VAR_1, (void *)VAR_3);
  FUNC_6(VAR_4);
  VAR_3->DnsThread = VAR_4;
 }
 else
 {

  if (VAR_3->DnsFinished)
  {

   FUNC_5(VAR_3->DnsThread, VAR_0);
   FUNC_4(VAR_3->DnsThread);
   VAR_3->DnsThread = ((void*)0);

   VAR_2->NatDoCancelFlag = 1;
  }
 }

 return 1;

DISCONNECT:


 if (VAR_3->DnsThread != ((void*)0))
 {
  FUNC_5(VAR_3->DnsThread, VAR_0);
  FUNC_4(VAR_3->DnsThread);
  VAR_3->DnsThread = ((void*)0);
 }

 if (VAR_3->DnsTargetHostName != ((void*)0))
 {
  FUNC_2(VAR_3->DnsTargetHostName);
  VAR_3->DnsTargetHostName = ((void*)0);
 }

 if (VAR_3->DnsResponseHostName != ((void*)0))
 {
  FUNC_2(VAR_3->DnsResponseHostName);
  VAR_3->DnsResponseHostName = ((void*)0);
 }

 FUNC_1(VAR_3->lock);
 FUNC_0(VAR_2->NatTable, VAR_3);
 FUNC_2(VAR_3);

 return 0;
}
