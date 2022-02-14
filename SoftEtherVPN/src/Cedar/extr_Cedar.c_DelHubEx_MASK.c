
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int HubList; } ;
typedef int HUB ;
typedef TYPE_1__ CEDAR ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(CEDAR *VAR_0, HUB *VAR_1, bool VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_2 == 0)
 {
  FUNC_1(VAR_0);
 }

 if (FUNC_0(VAR_0->HubList, VAR_1))
 {
  FUNC_2(VAR_1);
 }

 if (VAR_2 == 0)
 {
  FUNC_3(VAR_0);
 }
}
