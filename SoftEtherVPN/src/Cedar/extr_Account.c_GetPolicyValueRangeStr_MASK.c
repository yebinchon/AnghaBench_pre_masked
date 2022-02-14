
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp2 ;
typedef int tmp1 ;
typedef int UINT ;
struct TYPE_3__ {int TypeInt; char* FormatStr; int MaxValue; int MinValue; scalar_t__ AllowZero; } ;
typedef TYPE_1__ POLICY_ITEM ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int *,int *,...) ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (char*) ;

void FUNC_4(wchar_t *VAR_0, UINT VAR_1, UINT VAR_2)
{
 POLICY_ITEM *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->TypeInt == 0)
 {

  FUNC_2(VAR_0, VAR_1, FUNC_3("CMD_PolicyList_Range_Bool"));
 }
 else
 {
  wchar_t *VAR_4;
  wchar_t VAR_5[256], VAR_6[256];


  if (VAR_3->AllowZero)
  {
   VAR_4 = FUNC_3("CMD_PolicyList_Range_Int_2");
  }
  else
  {
   VAR_4 = FUNC_3("CMD_PolicyList_Range_Int_1");
  }

  FUNC_1(VAR_5, sizeof(VAR_5), FUNC_3(VAR_3->FormatStr), &VAR_3->MinValue);
  FUNC_1(VAR_6, sizeof(VAR_6), FUNC_3(VAR_3->FormatStr), &VAR_3->MaxValue);

  FUNC_1(VAR_0, VAR_1, VAR_4, VAR_5, VAR_6);
 }
}
