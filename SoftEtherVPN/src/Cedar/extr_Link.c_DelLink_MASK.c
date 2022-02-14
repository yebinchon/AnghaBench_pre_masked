
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int LinkList; } ;
typedef int LINK ;
typedef TYPE_1__ HUB ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(HUB *VAR_0, LINK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->LinkList);
 {
  if (FUNC_0(VAR_0->LinkList, VAR_1))
  {
   FUNC_2(VAR_1);
  }
 }
 FUNC_3(VAR_0->LinkList);
}
