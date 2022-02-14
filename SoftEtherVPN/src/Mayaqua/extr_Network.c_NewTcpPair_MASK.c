
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ LocalPort; scalar_t__ RemotePort; TYPE_1__* BulkRecvTube; TYPE_1__* BulkSendTube; } ;
struct TYPE_13__ {int Ref; } ;
typedef TYPE_1__ TUBE ;
typedef int TCP_PAIR_HEADER ;
typedef int SOCK_EVENT ;
typedef TYPE_2__ SOCK ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (char*,scalar_t__) ;
 TYPE_2__* FUNC_3 (int,int) ;
 int * FUNC_4 () ;
 int FUNC_5 (TYPE_1__**,TYPE_1__**,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;

bool FUNC_9(SOCK **VAR_0, SOCK **VAR_1)
{
 SOCK *VAR_2;
 SOCK *VAR_3, *VAR_4;
 TUBE *VAR_5, *VAR_6;
 SOCK_EVENT *VAR_7, *VAR_8;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_3(1, 1);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_2("127.0.0.1", VAR_2->LocalPort);
 if (VAR_4 == ((void*)0))
 {
  FUNC_6(VAR_2);
  return 0;
 }

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0))
 {
  FUNC_6(VAR_4);
  FUNC_6(VAR_2);
  return 0;
 }

 FUNC_6(VAR_2);

 if ((VAR_3->LocalPort != VAR_4->RemotePort) || (VAR_3->RemotePort != VAR_4->LocalPort))
 {
  FUNC_6(VAR_3);
  FUNC_6(VAR_4);
  return 0;
 }

 FUNC_5(&VAR_5, &VAR_6, sizeof(TCP_PAIR_HEADER));


 VAR_7 = FUNC_4();
 VAR_8 = FUNC_4();

 FUNC_8(VAR_5, VAR_7);
 FUNC_8(VAR_6, VAR_8);

 FUNC_1(VAR_5->Ref);
 FUNC_1(VAR_6->Ref);
 VAR_3->BulkRecvTube = VAR_4->BulkSendTube = VAR_5;
 VAR_3->BulkSendTube = VAR_4->BulkRecvTube = VAR_6;

 FUNC_7(VAR_7);
 FUNC_7(VAR_8);

 *VAR_0 = VAR_3;
 *VAR_1 = VAR_4;

 return 1;
}
