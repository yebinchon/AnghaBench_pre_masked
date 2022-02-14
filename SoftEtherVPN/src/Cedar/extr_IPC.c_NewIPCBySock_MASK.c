
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int ref; } ;
struct TYPE_9__ {int FlushList; int IPv4ReceivedQueue; int ArpTable; int Interrupt; int MacAddress; TYPE_1__* Sock; TYPE_3__* Cedar; } ;
struct TYPE_8__ {int ref; } ;
typedef TYPE_1__ SOCK ;
typedef TYPE_2__ IPC ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (int) ;

IPC *FUNC_7(CEDAR *VAR_1, SOCK *VAR_2, void *VAR_3)
{
 IPC *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_6(sizeof(IPC));

 VAR_4->Cedar = VAR_1;
 FUNC_0(VAR_1->ref);

 VAR_4->Sock = VAR_2;
 FUNC_0(VAR_2->ref);

 FUNC_1(VAR_4->MacAddress, VAR_3, 6);

 VAR_4->Interrupt = FUNC_2();


 VAR_4->ArpTable = FUNC_3(VAR_0);


 VAR_4->IPv4ReceivedQueue = FUNC_4();

 VAR_4->FlushList = FUNC_5();

 return VAR_4;
}
