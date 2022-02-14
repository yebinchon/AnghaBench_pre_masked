
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_8__ {scalar_t__ Buf; } ;
struct TYPE_7__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;

char *FUNC_5(TOKEN_LIST *VAR_0)
{
 UINT VAR_1;
 BUF *VAR_2;
 char *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_1();
 for (VAR_1 = 0;VAR_1 < VAR_0->NumTokens;VAR_1++)
 {
  if (VAR_0->Token[VAR_1] != ((void*)0))
  {
   FUNC_2(VAR_0->Token[VAR_1]);
   if (FUNC_3(VAR_0->Token[VAR_1]) == 0)
   {
    FUNC_4(VAR_2, "-", 1);
   }
   else
   {
    FUNC_4(VAR_2, VAR_0->Token[VAR_1], FUNC_3(VAR_0->Token[VAR_1]));
   }
  }
  else
  {
   FUNC_4(VAR_2, "-", 1);
  }
  if (VAR_1 != (VAR_0->NumTokens - 1))
  {
   FUNC_4(VAR_2, ",", 1);
  }
 }
 FUNC_4(VAR_2, "\0", 1);

 VAR_3 = (char *)VAR_2->Buf;

 FUNC_0(VAR_2);

 return VAR_3;
}
