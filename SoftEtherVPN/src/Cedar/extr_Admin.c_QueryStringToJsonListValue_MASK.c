
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int LIST ;
typedef int JSON_VALUE ;
typedef int JSON_OBJECT ;


 scalar_t__ FUNC_0 (int *,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 size_t VAR_0 ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,char*,char*) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 () ;
 TYPE_1__* FUNC_9 (char*,char*) ;
 size_t FUNC_10 (char*,char*,int ) ;
 char* FUNC_11 (char*) ;

JSON_VALUE *FUNC_12(char *VAR_1)
{
 TOKEN_LIST *VAR_2;
 UINT VAR_3;
 LIST *VAR_4 = ((void*)0);
 JSON_VALUE *VAR_5 = ((void*)0);
 JSON_OBJECT *VAR_6 = ((void*)0);
 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_9(VAR_1, "&");
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_8();

 VAR_5 = FUNC_5();
 VAR_6 = FUNC_7(VAR_5);

 for (VAR_3 = 0;VAR_3 < VAR_2->NumTokens;VAR_3++)
 {
  char *VAR_7 = VAR_2->Token[VAR_3];
  UINT VAR_8;

  VAR_8 = FUNC_10(VAR_7, "=", 0);
  if (VAR_8 != VAR_0)
  {
   char *VAR_9;
   char *VAR_10;
   char *VAR_11 = FUNC_1(VAR_7);
   char *VAR_12 = FUNC_1(VAR_7 + VAR_8 + 1);

   VAR_11[VAR_8] = 0;
   VAR_9 = FUNC_11(VAR_11);
   VAR_10 = FUNC_11(VAR_12);

   if (VAR_9 != ((void*)0) && VAR_10 != ((void*)0))
   {
    if (FUNC_0(VAR_4, VAR_9))
    {
     FUNC_6(VAR_6, VAR_9, VAR_10);
    }
   }

   FUNC_2(VAR_10);
   FUNC_2(VAR_9);
   FUNC_2(VAR_11);
   FUNC_2(VAR_12);
  }
 }

 FUNC_4(VAR_2);

 FUNC_3(VAR_4);

 return VAR_5;
}
