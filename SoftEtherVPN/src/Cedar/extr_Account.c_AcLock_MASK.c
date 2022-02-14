
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* HubDb; } ;
struct TYPE_5__ {int UserList; int GroupList; } ;
typedef TYPE_2__ HUB ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

void FUNC_2(HUB *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }
 if (FUNC_1(VAR_0))
 {
  return;
 }


 FUNC_0(VAR_0->HubDb->GroupList);
 FUNC_0(VAR_0->HubDb->UserList);
}
