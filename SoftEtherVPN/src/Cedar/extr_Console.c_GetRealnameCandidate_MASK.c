
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_6__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int LIST ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*,char*) ;

TOKEN_LIST *FUNC_8(char *VAR_0, TOKEN_LIST *VAR_1)
{
 TOKEN_LIST *VAR_2;
 LIST *VAR_3;
 UINT VAR_4;
 bool VAR_5 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return FUNC_5();
 }

 VAR_3 = FUNC_4(((void*)0));

 for (VAR_4 = 0;VAR_4 < VAR_1->NumTokens;VAR_4++)
 {
  char *VAR_6 = VAR_1->Token[VAR_4];


  if (FUNC_7(VAR_6, VAR_0) == 0)
  {
   FUNC_0(VAR_3, VAR_6);
   VAR_5 = 1;
   break;
  }
 }

 if (VAR_5 == 0)
 {

  for (VAR_4 = 0;VAR_4 < VAR_1->NumTokens;VAR_4++)
  {
   char *VAR_7 = VAR_1->Token[VAR_4];

   if (FUNC_2(VAR_0, VAR_7) || FUNC_1(VAR_0, VAR_7))
   {

    FUNC_0(VAR_3, VAR_7);
    VAR_5 = 1;
   }
  }
 }

 if (VAR_5)
 {

  VAR_2 = FUNC_3(VAR_3);
 }
 else
 {
  VAR_2 = FUNC_5();
 }

 FUNC_6(VAR_3);

 return VAR_2;
}
