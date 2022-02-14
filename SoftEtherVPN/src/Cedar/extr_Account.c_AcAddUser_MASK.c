
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int ref; int Name; } ;
typedef TYPE_2__ USER ;
struct TYPE_11__ {TYPE_1__* HubDb; } ;
struct TYPE_9__ {int UserList; } ;
typedef TYPE_3__ HUB ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

bool FUNC_5(HUB *VAR_1, USER *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || FUNC_4(VAR_1))
 {
  return 0;
 }

 if (FUNC_3(VAR_1->HubDb->UserList) >= VAR_0)
 {
  return 0;
 }

 if (FUNC_0(VAR_1, VAR_2->Name) != 0)
 {
  return 0;
 }

 FUNC_2(VAR_1->HubDb->UserList, VAR_2);
 FUNC_1(VAR_2->ref);

 return 1;
}
