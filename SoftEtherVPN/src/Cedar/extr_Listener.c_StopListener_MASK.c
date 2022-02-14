
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int Halt; int ShadowIPv6; scalar_t__ Protocol; int Cedar; struct TYPE_8__* ShadowListener; int Thread; int Event; int Port; int lock; TYPE_1__* Sock; } ;
struct TYPE_7__ {int ref; } ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ LISTENER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

void FUNC_9(LISTENER *VAR_2)
{
 UINT VAR_3;
 SOCK *VAR_4 = ((void*)0);

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_2->lock);
 if (VAR_2->Halt)
 {
  FUNC_7(VAR_2->lock);
  return;
 }


 VAR_2->Halt = 1;

 if (VAR_2->Sock != ((void*)0))
 {
  VAR_4 = VAR_2->Sock;

  FUNC_0(VAR_4->ref);
 }

 FUNC_7(VAR_2->lock);

 VAR_3 = VAR_2->Port;

 if (VAR_2->ShadowIPv6 == 0 && VAR_2->Protocol == VAR_1)
 {
  FUNC_5(VAR_2->Cedar, "LS_LISTENER_STOP_1", VAR_3);
 }


 if (VAR_4 != ((void*)0))
 {
  FUNC_1(VAR_4);
  FUNC_4(VAR_4);
  VAR_4 = ((void*)0);
 }


 FUNC_6(VAR_2->Event);


 FUNC_8(VAR_2->Thread, VAR_0);


 if (VAR_2->ShadowIPv6 == 0)
 {
  if (VAR_2->ShadowListener != ((void*)0))
  {
   FUNC_9(VAR_2->ShadowListener);

   FUNC_3(VAR_2->ShadowListener);

   VAR_2->ShadowListener = ((void*)0);
  }
 }

 if (VAR_2->ShadowIPv6 == 0 && VAR_2->Protocol == VAR_1)
 {
  FUNC_5(VAR_2->Cedar, "LS_LISTENER_STOP_2", VAR_3);
 }
}
