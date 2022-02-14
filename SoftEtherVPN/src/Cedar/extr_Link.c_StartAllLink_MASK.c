
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {int LinkList; } ;
struct TYPE_5__ {int Offline; } ;
typedef TYPE_1__ LINK ;
typedef TYPE_2__ HUB ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void FUNC_5(HUB *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0->LinkList);
 {
  UINT VAR_1;
  for (VAR_1 = 0;VAR_1 < FUNC_1(VAR_0->LinkList);VAR_1++)
  {
   LINK *VAR_2 = (LINK *)FUNC_0(VAR_0->LinkList, VAR_1);

   if (VAR_2->Offline == 0)
   {
    FUNC_3(VAR_2);
   }
  }
 }
 FUNC_4(VAR_0->LinkList);
}
