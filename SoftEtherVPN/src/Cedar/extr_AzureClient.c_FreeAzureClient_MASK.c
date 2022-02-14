
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int Halt; int Lock; int Event; int MainThread; TYPE_1__* CurrentSock; } ;
struct TYPE_7__ {int ref; } ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ AZURE_CLIENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

void FUNC_11(AZURE_CLIENT *VAR_1)
{
 SOCK *VAR_2 = ((void*)0);

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->Halt = 1;

 FUNC_4(VAR_1->Lock);
 {
  if (VAR_1->CurrentSock != ((void*)0))
  {
   VAR_2 = VAR_1->CurrentSock;

   FUNC_0(VAR_2->ref);
  }
 }
 FUNC_9(VAR_1->Lock);

 if (VAR_2 != ((void*)0))
 {
  FUNC_2(VAR_2);
  FUNC_6(VAR_2);
 }

 FUNC_8(VAR_1->Event);


 FUNC_10(VAR_1->MainThread, VAR_0);
 FUNC_7(VAR_1->MainThread);

 FUNC_5(VAR_1->Event);

 FUNC_1(VAR_1->Lock);

 FUNC_3(VAR_1);
}
