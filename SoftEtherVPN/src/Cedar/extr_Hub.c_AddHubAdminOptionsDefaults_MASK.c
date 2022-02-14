
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int t ;
typedef size_t UINT ;
struct TYPE_11__ {int Value; int Name; } ;
struct TYPE_10__ {int AdminOptionList; } ;
typedef TYPE_1__ HUB ;
typedef TYPE_2__ ADMIN_OPTION ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_6 (int) ;
 TYPE_2__* VAR_0 ;
 size_t VAR_1 ;

void FUNC_7(HUB *VAR_2, bool VAR_3)
{
 UINT VAR_4;

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_3)
 {
  FUNC_1(VAR_2->AdminOptionList);
 }

 for (VAR_4 = 0;VAR_4 < VAR_1;VAR_4++)
 {
  ADMIN_OPTION *VAR_5 = &VAR_0[VAR_4];
  ADMIN_OPTION VAR_6, *VAR_7;

  FUNC_5(&VAR_6, sizeof(VAR_6));
  FUNC_3(VAR_6.Name, sizeof(VAR_6.Name), VAR_5->Name);

  VAR_7 = FUNC_2(VAR_2->AdminOptionList, &VAR_6);
  if (VAR_7 == ((void*)0))
  {
   ADMIN_OPTION *VAR_8 = FUNC_6(sizeof(ADMIN_OPTION));

   FUNC_3(VAR_8->Name, sizeof(VAR_8->Name), VAR_5->Name);
   VAR_8->Value = VAR_5->Value;

   FUNC_0(VAR_2->AdminOptionList, VAR_8);
  }
 }

 if (VAR_3)
 {
  FUNC_4(VAR_2->AdminOptionList);
 }
}
