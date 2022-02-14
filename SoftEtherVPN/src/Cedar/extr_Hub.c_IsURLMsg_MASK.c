
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {size_t NumTokens; int ** Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef size_t UINT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,size_t,int *) ;
 int FUNC_5 (int *) ;

bool FUNC_6(wchar_t *VAR_0, char *VAR_1, UINT VAR_2)
{
 UNI_TOKEN_LIST *VAR_3;
 bool VAR_4 = 0;
 UINT VAR_5;
 UINT VAR_6 = 0;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_2(VAR_0, L"\r\n");

 for (VAR_5 = 0;VAR_5 < VAR_3->NumTokens;VAR_5++)
 {
  wchar_t *VAR_7 = VAR_3->Token[VAR_5];

  if (FUNC_0(VAR_7) == 0)
  {
   VAR_6++;

   FUNC_5(VAR_7);

   if (VAR_6 == 1)
   {
    if (FUNC_3(VAR_7, L"http://") ||
     FUNC_3(VAR_7, L"https://") ||
     FUNC_3(VAR_7, L"ftp://"))
    {
     VAR_4 = 1;

     FUNC_4(VAR_1, VAR_2, VAR_7);
    }
   }
  }
 }

 if (VAR_6 != 1)
 {
  VAR_4 = 0;
 }

 FUNC_1(VAR_3);

 return VAR_4;
}
