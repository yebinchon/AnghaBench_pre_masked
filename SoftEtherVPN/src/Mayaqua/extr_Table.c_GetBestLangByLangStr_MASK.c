
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int * LangList; } ;
typedef int LIST ;
typedef TYPE_1__ LANGLIST ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

LANGLIST *FUNC_5(LIST *VAR_0, char *VAR_1)
{
 UINT VAR_2;
 LANGLIST *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_0);VAR_2++)
 {
  LANGLIST *VAR_4 = FUNC_1(VAR_0, VAR_2);
  UINT VAR_5;

  for (VAR_5 = 0;VAR_5 < FUNC_2(VAR_4->LangList);VAR_5++)
  {
   char *VAR_6 = FUNC_1(VAR_4->LangList, VAR_5);

   if (FUNC_4(VAR_6, VAR_1) == 0)
   {
    return VAR_4;
   }
  }
 }

 for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_0);VAR_2++)
 {
  LANGLIST *VAR_7 = FUNC_1(VAR_0, VAR_2);
  UINT VAR_8;

  for (VAR_8 = 0;VAR_8 < FUNC_2(VAR_7->LangList);VAR_8++)
  {
   char *VAR_9 = FUNC_1(VAR_7->LangList, VAR_8);

   if (FUNC_3(VAR_1, VAR_9) || FUNC_3(VAR_9, VAR_1))
   {
    return VAR_7;
   }
  }
 }

 VAR_3 = FUNC_0(VAR_0, "en");

 return VAR_3;
}
