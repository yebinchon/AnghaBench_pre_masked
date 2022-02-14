
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char wchar_t ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int FOLDER ;
typedef int BUF ;


 int FUNC_0 (void*,char*,int) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,void*,int) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,char*) ;
 int * FUNC_7 (int *,char*) ;
 char* FUNC_8 (int *) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_1__*) ;
 void* FUNC_12 (int) ;
 TYPE_1__* FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 scalar_t__ FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,scalar_t__,char*,int) ;

bool FUNC_19(BUF *VAR_7, FOLDER *VAR_8)
{
 char *VAR_9;
 TOKEN_LIST *VAR_10;
 char *VAR_11;
 char *VAR_12;
 char *VAR_13;
 bool VAR_14;
 FOLDER *VAR_15;


 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
 {
  return 0;
 }

 VAR_14 = 1;


 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9 == ((void*)0))
 {
  return 0;
 }


 VAR_10 = FUNC_13(VAR_9, "\t ");
 if (VAR_10 == ((void*)0))
 {
  FUNC_10(VAR_9);
  return 0;
 }

 if (VAR_10->NumTokens >= 1)
 {
  if (!FUNC_14(VAR_10->Token[0], VAR_2))
  {
   if (VAR_10->NumTokens >= 2)
   {

    VAR_11 = FUNC_9(VAR_10->Token[1]);


    VAR_15 = FUNC_7(VAR_8, VAR_11);


    while (1)
    {
     if (FUNC_19(VAR_7, VAR_15) == 0)
     {
      break;
     }
    }

    FUNC_10(VAR_11);
   }
  }
  if (!FUNC_14(VAR_10->Token[0], "}"))
  {

   VAR_14 = 0;
  }
  if (VAR_10->NumTokens >= 3)
  {
   VAR_11 = FUNC_9(VAR_10->Token[1]);
   VAR_13 = VAR_10->Token[2];

   if (!FUNC_14(VAR_10->Token[0], VAR_5))
   {

    wchar_t *VAR_16;
    UINT VAR_17;
    VAR_12 = FUNC_9(VAR_13);
    VAR_17 = FUNC_1(VAR_12, FUNC_15(VAR_12));
    if (VAR_17 != 0)
    {
     VAR_16 = FUNC_12(VAR_17);
     FUNC_18(VAR_16, VAR_17, VAR_12, FUNC_15(VAR_12));
     FUNC_6(VAR_8, VAR_11, VAR_16);
     FUNC_10(VAR_16);
    }
    FUNC_10(VAR_12);
   }
   if (!FUNC_14(VAR_10->Token[0], VAR_3))
   {

    FUNC_4(VAR_8, VAR_11, FUNC_16(VAR_13));
   }
   if (!FUNC_14(VAR_10->Token[0], VAR_4))
   {

    FUNC_5(VAR_8, VAR_11, FUNC_17(VAR_13));
   }
   if (!FUNC_14(VAR_10->Token[0], VAR_0))
   {

    bool VAR_18 = 0;
    if (!FUNC_14(VAR_13, VAR_6))
    {
     VAR_18 = 1;
    }
    else if (FUNC_16(VAR_13) != 0)
    {
     VAR_18 = 1;
    }
    FUNC_2(VAR_8, VAR_11, VAR_18);
   }
   if (!FUNC_14(VAR_10->Token[0], VAR_1))
   {

    char *VAR_19 = FUNC_9(VAR_13);
    void *VAR_20 = FUNC_12(FUNC_15(VAR_19) * 4 + 64);
    int VAR_21 = FUNC_0(VAR_20, VAR_19, FUNC_15(VAR_19));
    FUNC_3(VAR_8, VAR_11, VAR_20, VAR_21);
    FUNC_10(VAR_20);
    FUNC_10(VAR_19);
   }

   FUNC_10(VAR_11);
  }
 }


 FUNC_11(VAR_10);

 FUNC_10(VAR_9);

 return VAR_14;
}
