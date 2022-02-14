
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ServerAddress; } ;
struct TYPE_6__ {int Halt; int Cedar; int Sock2; int Sock1; int Cancel; int * Ipc; int Eth; int MainThread; TYPE_3__ CurrentDhcpOptionList; } ;
typedef TYPE_1__ NATIVE_STACK ;
typedef int IP ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ,int ) ;

void FUNC_15(NATIVE_STACK *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->Ipc != ((void*)0) && FUNC_6(&VAR_1->CurrentDhcpOptionList, sizeof(VAR_1->CurrentDhcpOptionList)) == 0)
 {
  IP VAR_2;

  FUNC_13(&VAR_2, VAR_1->CurrentDhcpOptionList.ServerAddress);

  FUNC_5(VAR_1->Ipc, &VAR_2);
  FUNC_12(200);
 }

 VAR_1->Halt = 1;
 FUNC_0(VAR_1->Cancel);
 FUNC_2(VAR_1->Sock1);
 FUNC_2(VAR_1->Sock2);

 FUNC_14(VAR_1->MainThread, VAR_0);

 FUNC_11(VAR_1->MainThread);

 FUNC_1(VAR_1->Eth);
 FUNC_4(VAR_1->Ipc);

 FUNC_7(VAR_1);

 FUNC_8(VAR_1->Cancel);

 FUNC_10(VAR_1->Sock1);
 FUNC_10(VAR_1->Sock2);

 FUNC_9(VAR_1->Cedar);

 FUNC_3(VAR_1);
}
