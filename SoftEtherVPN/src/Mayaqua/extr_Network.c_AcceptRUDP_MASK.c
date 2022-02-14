
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Protocol; int NewSockConnectEvent; int NewSockQueue; } ;
struct TYPE_6__ {scalar_t__ Type; int ListenMode; int UnderlayProtocol; scalar_t__ CancelAccept; scalar_t__ Disconnecting; TYPE_2__* R_UDP_Stack; } ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ RUDP_STACK ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int ) ;

SOCK *FUNC_3(SOCK *VAR_5)
{

 if (VAR_5 == ((void*)0) || VAR_5->Type != VAR_1 || VAR_5->ListenMode == 0)
 {
  return ((void*)0);
 }

 while (1)
 {
  RUDP_STACK *VAR_6 = VAR_5->R_UDP_Stack;
  SOCK *VAR_7;

  if (VAR_5->Disconnecting || VAR_5->CancelAccept)
  {
   return ((void*)0);
  }

  VAR_7 = FUNC_0(VAR_6->NewSockQueue);

  if (VAR_7 != ((void*)0))
  {
   switch (VAR_6->Protocol)
   {
   case 128:
    FUNC_1(VAR_7->UnderlayProtocol, sizeof(VAR_7->UnderlayProtocol), VAR_4);
    break;

   case 130:
    FUNC_1(VAR_7->UnderlayProtocol, sizeof(VAR_7->UnderlayProtocol), VAR_2);
    break;

   case 129:
    FUNC_1(VAR_7->UnderlayProtocol, sizeof(VAR_7->UnderlayProtocol), VAR_3);
    break;
   }

   return VAR_7;
  }

  FUNC_2(VAR_6->NewSockConnectEvent, VAR_0);
 }
}
