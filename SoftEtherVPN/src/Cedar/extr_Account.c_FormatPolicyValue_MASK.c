
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UINT ;
struct TYPE_3__ {int TypeInt; char* FormatStr; scalar_t__ AllowZero; } ;
typedef TYPE_1__ POLICY_ITEM ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int *,int ,char*) ;
 char* FUNC_3 (char*) ;

void FUNC_4(wchar_t *VAR_0, UINT VAR_1, UINT VAR_2, UINT VAR_3)
{
 POLICY_ITEM *VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->TypeInt == 0)
 {

  if (VAR_3 == 0)
  {
   FUNC_2(VAR_0, VAR_1, L"No");
  }
  else
  {
   FUNC_2(VAR_0, VAR_1, L"Yes");
  }
 }
 else
 {

  if (VAR_3 == 0 && VAR_4->AllowZero)
  {
   FUNC_2(VAR_0, VAR_1, FUNC_3("CMD_NO_SETTINGS"));
  }
  else
  {
   FUNC_1(VAR_0, VAR_1, FUNC_3(VAR_4->FormatStr), VAR_3);
  }
 }
}
