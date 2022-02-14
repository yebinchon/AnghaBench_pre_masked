
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_9__ {int StopAllLinkFlag; int LinkList; } ;
struct TYPE_8__ {int ref; } ;
typedef TYPE_1__ LINK ;
typedef TYPE_2__ HUB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__**) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__** FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(HUB *VAR_0)
{
 LINK **VAR_1;
 UINT VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_0->StopAllLinkFlag = 1;

 FUNC_3(VAR_0->LinkList);
 {
  VAR_1 = FUNC_6(VAR_0->LinkList);
  VAR_2 = FUNC_2(VAR_0->LinkList);
  for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
  {
   FUNC_0(VAR_1[VAR_3]->ref);
  }
 }
 FUNC_7(VAR_0->LinkList);

 for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
 {
  FUNC_5(VAR_1[VAR_3]);
  FUNC_4(VAR_1[VAR_3]);
 }

 FUNC_1(VAR_1);

 VAR_0->StopAllLinkFlag = 0;
}
