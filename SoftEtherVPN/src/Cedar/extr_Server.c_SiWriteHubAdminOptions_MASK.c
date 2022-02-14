
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {int Value; int Name; } ;
struct TYPE_5__ {int AdminOptionList; } ;
typedef TYPE_1__ HUB ;
typedef int FOLDER ;
typedef TYPE_2__ ADMIN_OPTION ;


 int FUNC_0 (int *,int ,int ) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(FOLDER *VAR_0, HUB *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_1->AdminOptionList);
 {
  UINT VAR_2;
  for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_1->AdminOptionList);VAR_2++)
  {
   ADMIN_OPTION *VAR_3 = FUNC_1(VAR_1->AdminOptionList, VAR_2);

   FUNC_0(VAR_0, VAR_3->Name, VAR_3->Value);
  }
 }
 FUNC_4(VAR_1->AdminOptionList);
}
