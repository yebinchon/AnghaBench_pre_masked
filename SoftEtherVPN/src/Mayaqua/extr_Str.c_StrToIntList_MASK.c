
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int LIST ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int * FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

LIST *FUNC_7(char *VAR_0, bool VAR_1)
{
 LIST *VAR_2;
 TOKEN_LIST *VAR_3;

 VAR_2 = FUNC_4(VAR_1);

 VAR_3 = FUNC_5(VAR_0, " ,/;\t");

 if (VAR_3 != ((void*)0))
 {
  UINT VAR_4;

  for (VAR_4 = 0;VAR_4 < VAR_3->NumTokens;VAR_4++)
  {
   char *VAR_5 = VAR_3->Token[VAR_4];

   if (FUNC_2(VAR_5) == 0)
   {
    if (FUNC_3(VAR_5))
    {
     FUNC_1(VAR_2, FUNC_6(VAR_5));
    }
   }
  }

  FUNC_0(VAR_3);
 }

 return VAR_2;
}
