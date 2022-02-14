
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {TYPE_1__* Sock; int FlushList; } ;
struct TYPE_4__ {int SendTube; } ;
typedef TYPE_2__ IPC ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,void*,scalar_t__,int *,int) ;

void FUNC_2(IPC *VAR_0, void *VAR_1, UINT VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return;
 }

 if (VAR_0->Sock == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->Sock->SendTube, VAR_1, VAR_2, ((void*)0), 1);
 FUNC_0(VAR_0->FlushList, VAR_0->Sock->SendTube);
}
