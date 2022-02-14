
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {int CancelAccept; int Disconnecting; int ServerMode; int IsReverseAcceptedSocket; int ReverseAcceptEvent; int ReverseAcceptQueue; int RemotePort; int RemoteIP; } ;
typedef TYPE_1__ SOCK ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(SOCK *VAR_0, SOCK *VAR_1, IP *VAR_2, UINT VAR_3)
{
 bool VAR_4 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0->ReverseAcceptQueue);
 {
  if (VAR_0->CancelAccept == 0 && VAR_0->Disconnecting == 0)
  {
   FUNC_2(VAR_0->ReverseAcceptQueue, VAR_1);

   VAR_4 = 1;

   VAR_1->ServerMode = 1;
   VAR_1->IsReverseAcceptedSocket = 1;

   FUNC_0(&VAR_1->RemoteIP, VAR_2, sizeof(IP));
   VAR_1->RemotePort = VAR_3;
  }
 }
 FUNC_6(VAR_0->ReverseAcceptQueue);

 if (VAR_4 == 0)
 {
  FUNC_1(VAR_1);
  FUNC_4(VAR_1);
 }
 else
 {
  FUNC_5(VAR_0->ReverseAcceptEvent);
 }
}
