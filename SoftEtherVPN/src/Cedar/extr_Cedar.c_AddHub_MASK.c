
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int HubList; } ;
struct TYPE_9__ {int ref; int Name; } ;
typedef TYPE_1__ HUB ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(CEDAR *VAR_1, HUB *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_1);
 {
  if (FUNC_2(VAR_1, VAR_2->Name))
  {

   FUNC_5(VAR_1);
   return;
  }


  FUNC_1(VAR_1->HubList, VAR_2);
  FUNC_0(VAR_2->ref);
 }
 FUNC_5(VAR_1);
}
