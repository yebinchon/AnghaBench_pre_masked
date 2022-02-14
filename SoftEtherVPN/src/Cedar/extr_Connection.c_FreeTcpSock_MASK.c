
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ RecvKey; scalar_t__ SendKey; int SendFifo; int RecvFifo; int Sock; } ;
typedef TYPE_1__ TCPSOCK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(TCPSOCK *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->Sock);
 FUNC_4(VAR_0->Sock);
 FUNC_3(VAR_0->RecvFifo);
 FUNC_3(VAR_0->SendFifo);

 if (VAR_0->SendKey)
 {
  FUNC_2(VAR_0->SendKey);
 }
 if (VAR_0->RecvKey)
 {
  FUNC_2(VAR_0->RecvKey);
 }

 FUNC_1(VAR_0);
}
