
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_15__ {int AllList; } ;
struct TYPE_14__ {int Halt; TYPE_7__* NatTableForRecv; TYPE_7__* NatTableForSend; int Cancel; int SendQueue; int RecvQueue; TYPE_1__* HaltTube3; TYPE_1__* HaltTube2; int HaltEvent; int CancelLock; int Lock; int Thread; TYPE_1__* HaltTube; } ;
struct TYPE_13__ {int Ref; } ;
typedef TYPE_1__ TUBE ;
typedef TYPE_2__ NATIVE_NAT_ENTRY ;
typedef TYPE_2__ NATIVE_NAT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;

void FUNC_20(NATIVE_NAT *VAR_1)
{
 TUBE *VAR_2;
 UINT VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->Halt = 1;

 FUNC_5(VAR_1->Lock);
 {
  VAR_2 = VAR_1->HaltTube;

  if (VAR_2 != ((void*)0))
  {
   FUNC_0(VAR_2->Ref);
  }
 }
 FUNC_18(VAR_1->Lock);

 if (VAR_2 != ((void*)0))
 {
  FUNC_17(VAR_2, 1);

  FUNC_15(100);

  FUNC_16(VAR_2);

  FUNC_13(VAR_2);
 }

 FUNC_16(VAR_1->HaltTube2);
 FUNC_16(VAR_1->HaltTube3);

 FUNC_14(VAR_1->HaltEvent);

 FUNC_19(VAR_1->Thread, VAR_0);

 FUNC_12(VAR_1->Thread);

 FUNC_1(VAR_1->Lock);

 FUNC_1(VAR_1->CancelLock);

 FUNC_9(VAR_1->HaltEvent);

 FUNC_13(VAR_1->HaltTube2);
 FUNC_13(VAR_1->HaltTube3);

 FUNC_6(VAR_1);

 FUNC_11(VAR_1->RecvQueue);
 FUNC_11(VAR_1->SendQueue);

 FUNC_8(VAR_1->Cancel);


 for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_1->NatTableForSend->AllList);VAR_3++)
 {
  NATIVE_NAT_ENTRY *VAR_4 = FUNC_3(VAR_1->NatTableForSend->AllList, VAR_3);

  FUNC_2(VAR_4);
 }

 FUNC_10(VAR_1->NatTableForSend);
 FUNC_10(VAR_1->NatTableForRecv);

 FUNC_7(VAR_1);

 FUNC_2(VAR_1);
}
