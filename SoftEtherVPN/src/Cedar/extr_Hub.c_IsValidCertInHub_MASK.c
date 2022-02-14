
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X ;
struct TYPE_5__ {TYPE_1__* HubDb; } ;
struct TYPE_4__ {int CrlList; } ;
typedef TYPE_2__ HUB ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(HUB *VAR_0, X *VAR_1)
{
 bool VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->HubDb == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_0->HubDb->CrlList);
 {
  VAR_2 = FUNC_0(VAR_1, VAR_0->HubDb->CrlList);
 }
 FUNC_2(VAR_0->HubDb->CrlList);

 if (VAR_2)
 {

  return 0;
 }


 return 1;
}
