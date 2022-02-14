
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int LIST ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (scalar_t__) ;
 int * FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (int *) ;
 size_t FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 void* FUNC_11 (int) ;

TOKEN_LIST *FUNC_12(char *VAR_0)
{
 TOKEN_LIST *VAR_1;
 LIST *VAR_2;
 UINT VAR_3, VAR_4, VAR_5, VAR_6;
 char VAR_7;
 char *VAR_8;
 bool VAR_9 = 0;

 if (VAR_0 == ((void*)0))
 {

  return FUNC_7();
 }

 VAR_2 = FUNC_6(((void*)0));
 VAR_8 = FUNC_5(FUNC_10(VAR_0) + 32);

 VAR_5 = 0;
 VAR_6 = 0;

 VAR_4 = FUNC_9(VAR_0);
 for (VAR_3 = 0;VAR_3 < VAR_4;VAR_3++)
 {
  VAR_7 = VAR_0[VAR_3];

  switch (VAR_6)
  {
  case 0:

   if (VAR_7 == ' ' || VAR_7 == '\t')
   {

   }
   else
   {

    if (VAR_7 == '\"')
    {
     if (VAR_0[VAR_3 + 1] == '\"')
     {

      VAR_8[VAR_5++] = '\"';
      VAR_3++;
     }
     else
     {

      VAR_9 = 1;
     }
    }
    else
    {
     VAR_8[VAR_5++] = VAR_7;
    }

    VAR_6 = 1;
   }
   break;

  case 1:
   if (VAR_9 == 0 && (VAR_7 == ' ' || VAR_7 == '\t'))
   {

    VAR_8[VAR_5++] = 0;
    VAR_5 = 0;

    FUNC_2(VAR_2, FUNC_0(VAR_8));
    VAR_6 = 0;
   }
   else
   {
    if (VAR_7 == '\"')
    {
     if (VAR_0[VAR_3 + 1] == '\"')
     {

      VAR_8[VAR_5++] = L'\"';
      VAR_3++;
     }
     else
     {
      if (VAR_9 == 0)
      {

       VAR_9 = 1;
      }
      else
      {

       VAR_9 = 0;
      }
     }
    }
    else
    {
     VAR_8[VAR_5++] = VAR_7;
    }
   }
   break;
  }
 }

 if (VAR_5 != 0)
 {
  VAR_8[VAR_5++] = 0;
  FUNC_2(VAR_2, FUNC_0(VAR_8));
 }

 FUNC_1(VAR_8);

 VAR_1 = FUNC_11(sizeof(TOKEN_LIST));
 VAR_1->NumTokens = FUNC_4(VAR_2);
 VAR_1->Token = FUNC_11(sizeof(char *) * VAR_1->NumTokens);
 for (VAR_3 = 0;VAR_3 < VAR_1->NumTokens;VAR_3++)
 {
  VAR_1->Token[VAR_3] = FUNC_3(VAR_2, VAR_3);
 }

 FUNC_8(VAR_2);

 return VAR_1;
}
