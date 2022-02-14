
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
struct TYPE_10__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef int UINT ;
struct TYPE_12__ {int (* Write ) (TYPE_3__*,char*) ;} ;
struct TYPE_11__ {int NumTokens; char** Token; } ;
typedef TYPE_2__ TOKEN_LIST ;
typedef int LIST ;
typedef TYPE_3__ CONSOLE ;


 int * VAR_0 ;
 int FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char**,int *,int *) ;
 int FUNC_3 (char*,char*,char**) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int) ;
 char* FUNC_9 (char,int) ;
 char* FUNC_10 (int) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (char*,int) ;
 int FUNC_14 (char*,int,char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*,int,char*,char*,char*,char*,...) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_3__*,char*) ;

void FUNC_20(CONSOLE *VAR_1, char *VAR_2, TOKEN_LIST *VAR_3, UINT VAR_4)
{
 UINT VAR_5;
 UINT VAR_6;
 LIST *VAR_7;
 UINT VAR_8;
 wchar_t *VAR_9;
 UINT VAR_10;
 char *VAR_11;
 char *VAR_12;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }


 VAR_5 = FUNC_4(VAR_1) - 1;

 VAR_10 = sizeof(wchar_t) * (VAR_5 + 32);
 VAR_9 = FUNC_10(VAR_10);

 VAR_11 = FUNC_9(' ', VAR_4);



 VAR_7 = FUNC_11(VAR_2 == ((void*)0) ? VAR_0 : ((void*)0));

 VAR_6 = 0;

 for (VAR_8 = 0;VAR_8 < VAR_3->NumTokens;VAR_8++)
 {
  UINT VAR_13;


  FUNC_5(VAR_7, VAR_3->Token[VAR_8]);

  VAR_13 = FUNC_16(VAR_3->Token[VAR_8]);
  if (VAR_2 != ((void*)0))
  {
   if (VAR_3->Token[VAR_8][0] != '[')
   {
    VAR_13 += 1;
   }
   else
   {
    VAR_13 -= 2;
   }
  }

  VAR_6 = FUNC_8(VAR_6, VAR_13);
 }

 VAR_12 = FUNC_9(' ', VAR_6);


 for (VAR_8 = 0;VAR_8 < FUNC_7(VAR_7);VAR_8++)
 {
  char VAR_14[128];
  char *VAR_15 = FUNC_6(VAR_7, VAR_8);
  UNI_TOKEN_LIST *VAR_16;
  wchar_t *VAR_17;
  UINT VAR_18;
  UINT VAR_19 = VAR_4;
  UINT VAR_20 = VAR_4 + VAR_6 + 1;
  UINT VAR_21;
  char *VAR_22;

  if (VAR_5 >= (VAR_20 + 5))
  {
   VAR_21 = VAR_5 - VAR_20 - 3;
  }
  else
  {
   VAR_21 = 2;
  }


  if (VAR_2 != ((void*)0) && VAR_15[0] != '[')
  {

   FUNC_0(VAR_14, sizeof(VAR_14), "/%s", VAR_15);
  }
  else
  {

   if (VAR_2 == ((void*)0))
   {
    FUNC_14(VAR_14, sizeof(VAR_14), VAR_15);
   }
   else
   {
    FUNC_14(VAR_14, sizeof(VAR_14), VAR_15 + 1);
    if (FUNC_15(VAR_14) >= 1)
    {
     VAR_14[FUNC_15(VAR_14) - 1] = 0;
    }
   }
  }


  if (VAR_2 == ((void*)0))
  {
   FUNC_2(VAR_15, &VAR_17, ((void*)0), ((void*)0));
  }
  else
  {
   FUNC_3(VAR_2, VAR_15, &VAR_17);
  }

  VAR_22 = FUNC_9(' ', VAR_6 - FUNC_16(VAR_15) - (VAR_2 == ((void*)0) ? 0 : (VAR_15[0] != '[' ? 1 : -2)));

  VAR_16 = FUNC_13(VAR_17, VAR_21);

  for (VAR_18 = 0;VAR_18 < VAR_16->NumTokens;VAR_18++)
  {
   if (VAR_18 == 0)
   {
    FUNC_17(VAR_9, VAR_10, L"%S%S%S - %s",
     VAR_11, VAR_14, VAR_22, VAR_16->Token[VAR_18]);
   }
   else
   {
    FUNC_17(VAR_9, VAR_10, L"%S%S   %s",
     VAR_11, VAR_12, VAR_16->Token[VAR_18]);
   }

   VAR_1->Write(VAR_1, VAR_9);
  }

  FUNC_1(VAR_22);

  FUNC_18(VAR_16);
 }

 FUNC_12(VAR_7);

 FUNC_1(VAR_12);
 FUNC_1(VAR_9);
 FUNC_1(VAR_11);
}
