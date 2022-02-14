
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef size_t UINT ;
typedef int LIST ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *) ;
 int* FUNC_4 (scalar_t__) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int*) ;
 TYPE_1__* FUNC_8 () ;
 size_t FUNC_9 (int*) ;
 scalar_t__ FUNC_10 (int*) ;
 void* FUNC_11 (int) ;

UNI_TOKEN_LIST *FUNC_12(wchar_t *VAR_0)
{
 UNI_TOKEN_LIST *VAR_1;
 LIST *VAR_2;
 UINT VAR_3, VAR_4, VAR_5, VAR_6;
 wchar_t VAR_7;
 wchar_t *VAR_8;
 bool VAR_9 = 0;

 if (VAR_0 == ((void*)0))
 {

  return FUNC_8();
 }

 VAR_2 = FUNC_5(((void*)0));
 VAR_8 = FUNC_4(FUNC_10(VAR_0) + 32);

 VAR_5 = 0;
 VAR_6 = 0;

 VAR_4 = FUNC_9(VAR_0);
 for (VAR_3 = 0;VAR_3 < VAR_4;VAR_3++)
 {
  VAR_7 = VAR_0[VAR_3];

  switch (VAR_6)
  {
  case 0:

   if (VAR_7 == L' ' || VAR_7 == L'\t')
   {

   }
   else
   {

    if (VAR_7 == L'\"')
    {
     if (VAR_0[VAR_3 + 1] == L'\"')
     {

      VAR_8[VAR_5++] = L'\"';
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
   if (VAR_9 == 0 && (VAR_7 == L' ' || VAR_7 == L'\t'))
   {

    VAR_8[VAR_5++] = 0;
    VAR_5 = 0;

    FUNC_1(VAR_2, FUNC_7(VAR_8));
    VAR_6 = 0;
   }
   else
   {
    if (VAR_7 == L'\"')
    {
     if (VAR_0[VAR_3 + 1] == L'\"')
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
  FUNC_1(VAR_2, FUNC_7(VAR_8));
 }

 FUNC_0(VAR_8);

 VAR_1 = FUNC_11(sizeof(UNI_TOKEN_LIST));
 VAR_1->NumTokens = FUNC_3(VAR_2);
 VAR_1->Token = FUNC_11(sizeof(wchar_t *) * VAR_1->NumTokens);
 for (VAR_3 = 0;VAR_3 < VAR_1->NumTokens;VAR_3++)
 {
  VAR_1->Token[VAR_3] = FUNC_2(VAR_2, VAR_3);
 }

 FUNC_6(VAR_2);

 return VAR_1;
}
