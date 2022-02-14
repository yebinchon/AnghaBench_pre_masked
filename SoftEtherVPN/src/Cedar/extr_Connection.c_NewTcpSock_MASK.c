
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ref; } ;
struct TYPE_7__ {int LastCommTime; int LastRecvTime; int EstablishedTick; void* SendFifo; void* RecvFifo; TYPE_2__* Sock; } ;
typedef TYPE_1__ TCPSOCK ;
typedef TYPE_2__ SOCK ;


 int FUNC_0 (int ) ;
 void* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int) ;

TCPSOCK *FUNC_5(SOCK *VAR_1)
{
 TCPSOCK *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_4(sizeof(TCPSOCK));

 VAR_2->Sock = VAR_1;
 FUNC_0(VAR_1->ref);

 VAR_2->RecvFifo = FUNC_1();
 VAR_2->SendFifo = FUNC_1();
 VAR_2->EstablishedTick = VAR_2->LastRecvTime = VAR_2->LastCommTime = FUNC_3();


 FUNC_2(VAR_1, VAR_0);

 return VAR_2;
}
