
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * json_subitem_names; int CurrentJsonHint_GroupName; } ;
typedef TYPE_1__ PACK ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ,int,char*) ;

void FUNC_4(PACK *VAR_0, char *VAR_1)
{
 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_1 == ((void*)0))
 {
  FUNC_1(VAR_0->CurrentJsonHint_GroupName, sizeof(VAR_0->CurrentJsonHint_GroupName));
 }
 else
 {
  FUNC_3(VAR_0->CurrentJsonHint_GroupName, sizeof(VAR_0->CurrentJsonHint_GroupName), VAR_1);

  if (VAR_0->json_subitem_names == ((void*)0))
  {
   VAR_0->json_subitem_names = FUNC_2();
  }

  FUNC_0(VAR_0->json_subitem_names, VAR_1);
 }
}
