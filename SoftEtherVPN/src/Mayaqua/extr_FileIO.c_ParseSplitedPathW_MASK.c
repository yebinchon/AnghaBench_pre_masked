
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char wchar_t ;
struct TYPE_4__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef size_t UINT ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

UNI_TOKEN_LIST *FUNC_5(wchar_t *VAR_0)
{
 UNI_TOKEN_LIST *VAR_1;
 wchar_t *VAR_2 = FUNC_1(VAR_0);
 wchar_t *VAR_3;
 UINT VAR_4;

 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);




 VAR_3 = L":";


 VAR_1 = FUNC_2(VAR_2, VAR_3);

 if (VAR_1 != ((void*)0))
 {
  for (VAR_4 = 0;VAR_4 < VAR_1->NumTokens;VAR_4++)
  {
   FUNC_3(VAR_1->Token[VAR_4]);
   FUNC_4(VAR_1->Token[VAR_4]);
   FUNC_3(VAR_1->Token[VAR_4]);
   FUNC_4(VAR_1->Token[VAR_4]);
  }
 }

 FUNC_0(VAR_2);

 return VAR_1;
}
