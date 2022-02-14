
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_15__ {int AdminList; scalar_t__ Halt; TYPE_1__* AdminListenSock; int HaltEvent; } ;
struct TYPE_14__ {TYPE_1__* Sock; int * Thread; TYPE_3__* Nat; } ;
struct TYPE_13__ {int ref; } ;
typedef int THREAD ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ NAT_ADMIN ;
typedef TYPE_3__ NAT ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 TYPE_2__* FUNC_18 (int) ;

void FUNC_19(THREAD *VAR_4, void *VAR_5)
{
 NAT *VAR_6 = (NAT *)VAR_5;
 SOCK *VAR_7;
 UINT VAR_8;
 bool VAR_9 = 0;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }


 VAR_6->AdminList = FUNC_8(((void*)0));

 while (1)
 {
  VAR_7 = FUNC_6(VAR_0);
  if (VAR_9 == 0)
  {
   VAR_9 = 1;
   FUNC_10(VAR_4);
  }
  if (VAR_7 != ((void*)0))
  {
   break;
  }

  FUNC_15(VAR_6->HaltEvent, VAR_2);
  if (VAR_6->Halt)
  {
   return;
  }
 }

 VAR_6->AdminListenSock = VAR_7;
 FUNC_1(VAR_7->ref);


 while (1)
 {
  SOCK *VAR_10 = FUNC_0(VAR_7);
  THREAD *VAR_11;
  NAT_ADMIN *VAR_12;
  if (VAR_10 == ((void*)0))
  {
   break;
  }
  if (VAR_6->Halt)
  {
   FUNC_12(VAR_10);
   break;
  }

  VAR_12 = FUNC_18(sizeof(NAT_ADMIN));
  VAR_12->Nat = VAR_6;
  VAR_12->Sock = VAR_10;
  VAR_11 = FUNC_9(VAR_3, VAR_12);
  FUNC_17(VAR_11);
  FUNC_13(VAR_11);
 }


 FUNC_7(VAR_6->AdminList);
 {
  for (VAR_8 = 0;VAR_8 < FUNC_5(VAR_6->AdminList);VAR_8++)
  {
   NAT_ADMIN *VAR_13 = FUNC_4(VAR_6->AdminList, VAR_8);
   FUNC_2(VAR_13->Sock);
   FUNC_16(VAR_13->Thread, VAR_1);
   FUNC_13(VAR_13->Thread);
   FUNC_12(VAR_13->Sock);
   FUNC_3(VAR_13);
  }
 }
 FUNC_14(VAR_6->AdminList);

 FUNC_11(VAR_6->AdminList);

 FUNC_12(VAR_7);
}
