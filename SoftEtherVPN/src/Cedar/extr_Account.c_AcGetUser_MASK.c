
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* Name; int ref; } ;
typedef TYPE_2__ USER ;
struct TYPE_11__ {TYPE_1__* HubDb; } ;
struct TYPE_9__ {int UserList; } ;
typedef TYPE_3__ HUB ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*) ;

USER *FUNC_3(HUB *VAR_0, char *VAR_1)
{
 USER *VAR_2, VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || FUNC_1(VAR_0))
 {
  return ((void*)0);
 }

 VAR_3.Name = VAR_1;
 VAR_2 = FUNC_2(VAR_0->HubDb->UserList, &VAR_3);
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }
 FUNC_0(VAR_2->ref);

 return VAR_2;
}
