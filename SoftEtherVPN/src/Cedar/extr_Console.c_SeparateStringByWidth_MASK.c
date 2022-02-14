
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int NumTokens; int** Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef int UINT ;
typedef int LIST ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *,int ) ;
 int* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int*) ;
 TYPE_1__* FUNC_9 () ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int*) ;
 void* FUNC_13 (int) ;

UNI_TOKEN_LIST *FUNC_14(wchar_t *VAR_0, UINT VAR_1)
{
 UINT VAR_2;
 wchar_t *VAR_3;
 UINT VAR_4, VAR_5;
 LIST *VAR_6;
 UNI_TOKEN_LIST *VAR_7;

 if (VAR_0 == ((void*)0))
 {
  return FUNC_9();
 }
 if (VAR_1 == 0)
 {
  VAR_1 = 1;
 }

 VAR_6 = FUNC_6(((void*)0));

 VAR_4 = FUNC_10(VAR_0);
 VAR_3 = FUNC_13(sizeof(wchar_t) * (VAR_4 + 32));
 VAR_2 = 0;

 for (VAR_5 = 0;VAR_5 < (VAR_4 + 1);VAR_5++)
 {
  wchar_t VAR_8 = VAR_0[VAR_5];
  UINT VAR_9;
  UINT VAR_10;

  switch (VAR_8)
  {
  case 0:
  case L'\r':
  case L'\n':
   if (VAR_8 == L'\r')
   {
    if (VAR_0[VAR_5 + 1] == L'\n')
    {
     VAR_5++;
    }
   }

   VAR_3[VAR_2++] = 0;
   VAR_2 = 0;

   FUNC_3(VAR_6, FUNC_8(VAR_3));
   break;

  default:
   VAR_9 = FUNC_2(&VAR_0[VAR_5]);
   VAR_10 = (VAR_1 - FUNC_11(VAR_3));

   if ((VAR_10 >= 1) && (VAR_9 > VAR_10) && (VAR_9 <= VAR_1))
   {
    VAR_3[VAR_2++] = 0;
    VAR_2 = 0;

    FUNC_3(VAR_6, FUNC_8(VAR_3));
   }

   VAR_3[VAR_2++] = VAR_8;
   VAR_3[VAR_2] = 0;
   if (FUNC_11(VAR_3) >= VAR_1)
   {
    VAR_3[VAR_2++] = 0;
    VAR_2 = 0;

    FUNC_3(VAR_6, FUNC_8(VAR_3));
   }
   break;
  }
 }

 if (FUNC_5(VAR_6) == 0)
 {
  FUNC_3(VAR_6, FUNC_0(L""));
 }

 VAR_7 = FUNC_13(sizeof(UNI_TOKEN_LIST));
 VAR_7->NumTokens = FUNC_5(VAR_6);
 VAR_7->Token = FUNC_13(sizeof(wchar_t *) * VAR_7->NumTokens);

 for (VAR_5 = 0;VAR_5 < FUNC_5(VAR_6);VAR_5++)
 {
  wchar_t *VAR_11 = FUNC_4(VAR_6, VAR_5);

  FUNC_12(VAR_11);

  VAR_7->Token[VAR_5] = VAR_11;
 }

 FUNC_7(VAR_6);
 FUNC_1(VAR_3);

 return VAR_7;
}
