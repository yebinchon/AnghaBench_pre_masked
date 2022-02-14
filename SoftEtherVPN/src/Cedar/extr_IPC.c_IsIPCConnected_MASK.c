
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Sock; } ;
struct TYPE_4__ {int SendTube; int RecvTube; } ;
typedef TYPE_2__ IPC ;


 int FUNC_0 (int ) ;

bool FUNC_1(IPC *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_0->Sock->RecvTube) == 0 || FUNC_0(VAR_0->Sock->SendTube) == 0)
 {
  return 0;
 }

 return 1;
}
