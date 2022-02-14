
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {int LinkList; } ;
typedef int LINK ;
typedef TYPE_1__ HUB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int ** FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(HUB *VAR_0)
{
 LINK **VAR_1;
 UINT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0->LinkList);
 {
  VAR_2 = FUNC_2(VAR_0->LinkList);
  VAR_1 = FUNC_5(VAR_0->LinkList);
  FUNC_0(VAR_0->LinkList);
 }
 FUNC_6(VAR_0->LinkList);

 for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
 {
  LINK *VAR_4 = VAR_1[VAR_3];

  FUNC_4(VAR_4);
 }

 FUNC_1(VAR_1);
}
