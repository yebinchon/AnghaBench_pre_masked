
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UINT ;
struct TYPE_3__ {int * Country; int * Local; int * State; int * Unit; int * Organization; int * CommonName; } ;
typedef TYPE_1__ NAME ;


 int FUNC_0 (int*,int,char*,int*,int *) ;
 int FUNC_1 (int*,int,char*) ;
 int FUNC_2 (int*) ;

void FUNC_3(wchar_t *VAR_0, UINT VAR_1, NAME *VAR_2)
{
 FUNC_1(VAR_0, VAR_1, L"");

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->CommonName != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1, L"%sCN=%s, ", VAR_0, VAR_2->CommonName);
 }
 if (VAR_2->Organization != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1, L"%sO=%s, ", VAR_0, VAR_2->Organization);
 }
 if (VAR_2->Unit != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1, L"%sOU=%s, ", VAR_0, VAR_2->Unit);
 }
 if (VAR_2->State != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1, L"%sS=%s, ", VAR_0, VAR_2->State);
 }
 if (VAR_2->Local != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1, L"%sL=%s, ", VAR_0, VAR_2->Local);
 }
 if (VAR_2->Country != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1, L"%sC=%s, ", VAR_0, VAR_2->Country);
 }

 if (FUNC_2(VAR_0) >= 3)
 {
  UINT VAR_3 = FUNC_2(VAR_0);
  if (VAR_0[VAR_3 - 2] == L',' &&
   VAR_0[VAR_3 - 1] == L' ')
  {
   VAR_0[VAR_3 - 2] = 0;
  }
 }
}
