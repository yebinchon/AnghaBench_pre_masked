
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
struct TYPE_4__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef size_t UINT ;


 int FUNC_0 (char*,size_t,char*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 () ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,size_t,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,size_t) ;
 int FUNC_10 (char*,size_t) ;

void FUNC_11(wchar_t *VAR_1, UINT VAR_2, wchar_t *VAR_3)
{
 UNI_TOKEN_LIST *VAR_4;
 char *VAR_5;
 wchar_t *VAR_6;
 bool VAR_7 = 0;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_5 = FUNC_3();
 VAR_6 = FUNC_1(VAR_5);

 VAR_4 = FUNC_5(VAR_6);

 if (VAR_4 != ((void*)0))
 {
  UINT VAR_8;
  for (VAR_8 = 0;VAR_8 < VAR_4->NumTokens;VAR_8++)
  {
   wchar_t *VAR_9 = VAR_4->Token[VAR_8];
   wchar_t VAR_10[VAR_0];

   FUNC_0(VAR_10, sizeof(VAR_10), VAR_9, VAR_3);

   if (FUNC_4(VAR_10))
   {






    VAR_7 = 1;
    FUNC_7(VAR_1, VAR_2, VAR_10);
    break;
   }
  }

  FUNC_6(VAR_4);
 }

 FUNC_2(VAR_5);
 FUNC_2(VAR_6);

 if (VAR_7 == 0)
 {




  FUNC_10(VAR_1, VAR_2);

  FUNC_0(VAR_1, VAR_2, VAR_1, VAR_3);
 }
}
