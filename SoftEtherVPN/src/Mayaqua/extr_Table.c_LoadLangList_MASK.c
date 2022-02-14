
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_9__ {int * LangList; int LcidList; int TitleLocal; int TitleEnglish; int Name; void* Id; } ;
struct TYPE_8__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int LIST ;
typedef TYPE_2__ LANGLIST ;
typedef int BUF ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int ,size_t) ;
 char* FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int) ;
 void* FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (char*,char*) ;
 int * FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int ,int,char*) ;
 int FUNC_15 (char*) ;
 void* FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ,int,int ,char*,char*,int) ;
 int FUNC_19 (int ,int,char*,int ) ;
 TYPE_2__* FUNC_20 (int) ;

LIST *FUNC_21()
{
 LIST *VAR_2 = FUNC_10(((void*)0));
 char *VAR_3 = VAR_0;
 BUF *VAR_4;
 VAR_4 = FUNC_12(VAR_3);
 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 while (1)
 {
  char *VAR_5 = FUNC_2(VAR_4);

  if (VAR_5 == ((void*)0))
  {
   break;
  }

  FUNC_17(VAR_5);

  if (FUNC_7(VAR_5) == 0 && FUNC_13(VAR_5, "#") == 0)
  {
   TOKEN_LIST *VAR_6 = FUNC_11(VAR_5, "\t ");
   if (VAR_6 != ((void*)0))
   {
    if (VAR_6->NumTokens == 6)
    {
     LANGLIST *VAR_7 = FUNC_20(sizeof(LANGLIST));
     TOKEN_LIST *VAR_8;

     VAR_7->Id = FUNC_16(VAR_6->Token[0]);
     FUNC_14(VAR_7->Name, sizeof(VAR_7->Name), VAR_6->Token[1]);
     FUNC_19(VAR_7->TitleEnglish, sizeof(VAR_7->TitleEnglish), VAR_6->Token[2], FUNC_15(VAR_6->Token[2]));
     FUNC_19(VAR_7->TitleLocal, sizeof(VAR_7->TitleLocal), VAR_6->Token[3], FUNC_15(VAR_6->Token[3]));

     FUNC_18(VAR_7->TitleEnglish, sizeof(VAR_7->TitleEnglish), VAR_7->TitleEnglish,
      L"_", L" ", 1);

     FUNC_18(VAR_7->TitleLocal, sizeof(VAR_7->TitleLocal), VAR_7->TitleLocal,
      L"_", L" ", 1);

     VAR_7->LcidList = FUNC_9(0);

     VAR_8 = FUNC_11(VAR_6->Token[4], ",");
     if (VAR_8 != ((void*)0))
     {
      UINT VAR_9;

      for (VAR_9 = 0;VAR_9 < VAR_8->NumTokens;VAR_9++)
      {
       UINT VAR_10 = FUNC_16(VAR_8->Token[VAR_9]);

       FUNC_1(VAR_7->LcidList, VAR_10);
      }

      FUNC_6(VAR_8);
     }

     VAR_7->LangList = FUNC_10(((void*)0));

     VAR_8 = FUNC_11(VAR_6->Token[5], ",");
     if (VAR_8 != ((void*)0))
     {
      UINT VAR_11;

      for (VAR_11 = 0;VAR_11 < VAR_8->NumTokens;VAR_11++)
      {
       FUNC_0(VAR_7->LangList, FUNC_3(VAR_8->Token[VAR_11]));
      }

      FUNC_6(VAR_8);
     }

     FUNC_0(VAR_2, VAR_7);
    }

    FUNC_6(VAR_6);
   }
  }

  FUNC_4(VAR_5);
 }

 FUNC_5(VAR_4);

 return VAR_2;
}
