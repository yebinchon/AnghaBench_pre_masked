
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int USERGROUP ;
struct TYPE_9__ {int lock; int * Group; } ;
typedef TYPE_2__ USER ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {TYPE_1__* HubDb; } ;
struct TYPE_8__ {int UserList; int GroupList; } ;
typedef TYPE_3__ HUB ;


 int * FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

bool FUNC_8(HUB *VAR_0, char *VAR_1)
{
 USERGROUP *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(VAR_0->HubDb->GroupList, VAR_2))
 {
  FUNC_6(VAR_2);
 }

 for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_0->HubDb->UserList);VAR_3++)
 {
  USER *VAR_4 = FUNC_3(VAR_0->HubDb->UserList, VAR_3);
  FUNC_5(VAR_4->lock);
  {
   if (VAR_4->Group == VAR_2)
   {
    FUNC_2(VAR_4, ((void*)0));
   }
  }
  FUNC_7(VAR_4->lock);
 }

 FUNC_6(VAR_2);

 return 1;
}
