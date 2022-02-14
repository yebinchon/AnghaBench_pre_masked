
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int HubList; } ;
struct TYPE_9__ {char* Name; int ref; } ;
typedef TYPE_1__ HUB ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;

HUB *FUNC_4(CEDAR *VAR_0, char *VAR_1)
{
 HUB *VAR_2, VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_1(VAR_0);

 VAR_3.Name = VAR_1;
 VAR_2 = FUNC_2(VAR_0->HubList, &VAR_3);
 if (VAR_2 == ((void*)0))
 {
  FUNC_3(VAR_0);
  return ((void*)0);
 }

 FUNC_0(VAR_2->ref);

 FUNC_3(VAR_0);

 return VAR_2;
}
