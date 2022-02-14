
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hostname ;
typedef int UINT ;
struct TYPE_9__ {int TcpMakeConnectionFailed; int TcpMakeConnectionSucceed; int * Sock; int NatTcpCancelFlag; TYPE_1__* v; int DestPort; int DestIp; } ;
struct TYPE_8__ {int ref; } ;
struct TYPE_7__ {TYPE_2__* SockEvent; } ;
typedef int THREAD ;
typedef TYPE_2__ SOCK_EVENT ;
typedef int SOCK ;
typedef TYPE_3__ NAT_ENTRY ;
typedef int IP ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (char*,int ,int ,int *,int *,int *,int,int) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,int,int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int ) ;

void FUNC_9(THREAD *VAR_1, void *VAR_2)
{
 NAT_ENTRY *VAR_3 = (NAT_ENTRY *)VAR_2;
 IP VAR_4;
 char VAR_5[VAR_0];
 UINT VAR_6;
 SOCK *VAR_7;
 SOCK_EVENT *VAR_8;

 if (VAR_3 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_8(&VAR_4, VAR_3->DestIp);
 FUNC_3(VAR_5, sizeof(VAR_5), &VAR_4);
 VAR_6 = VAR_3->DestPort;
 VAR_8 = VAR_3->v->SockEvent;
 FUNC_0(VAR_8->ref);


 FUNC_5(VAR_1);


 FUNC_2("NatTcpConnect Connecting to %s:%u\n", VAR_5, VAR_6);
 VAR_7 = FUNC_1(VAR_5, VAR_6, 0, &VAR_3->NatTcpCancelFlag, ((void*)0), ((void*)0), 0, 1);
 if (VAR_7 == ((void*)0))
 {

  VAR_3->TcpMakeConnectionFailed = 1;
 }
 else
 {

  VAR_3->TcpMakeConnectionSucceed = 1;
 }
 VAR_3->Sock = VAR_7;
 FUNC_4(VAR_7, VAR_8);
 FUNC_7(VAR_8);

 FUNC_6(VAR_8);
}
