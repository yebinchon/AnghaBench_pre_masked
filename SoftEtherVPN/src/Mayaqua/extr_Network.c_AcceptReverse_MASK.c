
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Type; int ListenMode; int ReverseAcceptEvent; int UnderlayProtocol; int ReverseAcceptQueue; scalar_t__ CancelAccept; scalar_t__ Disconnecting; } ;
typedef TYPE_1__ SOCK ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

SOCK *FUNC_5(SOCK *VAR_3)
{

 if (VAR_3 == ((void*)0) || VAR_3->Type != VAR_1 || VAR_3->ListenMode == 0)
 {
  return ((void*)0);
 }

 while (1)
 {
  SOCK *VAR_4;
  if (VAR_3->Disconnecting || VAR_3->CancelAccept)
  {
   return ((void*)0);
  }

  FUNC_1(VAR_3->ReverseAcceptQueue);
  {
   VAR_4 = FUNC_0(VAR_3->ReverseAcceptQueue);
  }
  FUNC_3(VAR_3->ReverseAcceptQueue);

  if (VAR_4 != ((void*)0))
  {
   FUNC_2(VAR_4->UnderlayProtocol, sizeof(VAR_4->UnderlayProtocol), VAR_2);

   return VAR_4;
  }

  FUNC_4(VAR_3->ReverseAcceptEvent, VAR_0);
 }
}
