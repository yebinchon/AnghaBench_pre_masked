
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int current_chain ;
typedef size_t UINT ;
struct TYPE_11__ {char* Chain; char* ConditionAndArgs; scalar_t__ LineNumber; } ;
struct TYPE_10__ {int EntryList; } ;
struct TYPE_9__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ IPTABLES_STATE ;
typedef TYPE_3__ IPTABLES_ENTRY ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 TYPE_1__* FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;
 void* FUNC_9 (int) ;

IPTABLES_STATE *FUNC_10()
{
 IPTABLES_STATE *VAR_0 = ((void*)0);
 TOKEN_LIST *VAR_1 = ((void*)0);





 if (VAR_1 != ((void*)0))
 {
  UINT VAR_2;
  UINT VAR_3 = 0;

  for (VAR_2 = 0;VAR_2 < VAR_1->NumTokens;VAR_2++)
  {
   char *VAR_4 = VAR_1->Token[VAR_2];
   if (FUNC_4(VAR_4, "Chain INPUT") ||
    FUNC_4(VAR_4, "Chain FORWARD") ||
    FUNC_4(VAR_4, "Chain OUTPUT"))
   {
    VAR_3++;
   }
  }

  if (VAR_3 >= 3)
  {
   char VAR_5[64];
   UINT VAR_6 = 0;

   FUNC_8(VAR_5, sizeof(VAR_5));

   for (VAR_2 = 0;VAR_2 < VAR_1->NumTokens;VAR_2++)
   {
    char *VAR_7 = VAR_1->Token[VAR_2];

    if (FUNC_4(VAR_7, "Chain"))
    {
     TOKEN_LIST *VAR_8 = FUNC_3(VAR_7, " \t");
     if (VAR_8 != ((void*)0))
     {
      if (VAR_8->NumTokens >= 4)
      {
       FUNC_5(VAR_5, sizeof(VAR_5), VAR_8->Token[1]);
       VAR_6 = 1;

       if (VAR_0 == ((void*)0))
       {
        VAR_0 = FUNC_9(sizeof(IPTABLES_STATE));
        VAR_0->EntryList = FUNC_2(((void*)0));
       }

      }
      FUNC_1(VAR_8);
     }
    }

    if (VAR_6 == 1)
    {
     if (FUNC_4(VAR_7, "num"))
     {
      VAR_6 = 2;
     }
    }
    else if (VAR_6 == 2)
    {
     TOKEN_LIST *VAR_9 = FUNC_3(VAR_7, " \t");
     if (VAR_9 != ((void*)0))
     {
      if (VAR_9->NumTokens >= 6 && FUNC_6(VAR_9->Token[0]) != 0)
      {
       IPTABLES_ENTRY *VAR_10 = FUNC_9(sizeof(IPTABLES_ENTRY));

       FUNC_5(VAR_10->Chain, sizeof(VAR_10->Chain), VAR_5);
       VAR_10->LineNumber = FUNC_6(VAR_9->Token[0]);
       FUNC_5(VAR_10->ConditionAndArgs, sizeof(VAR_10->ConditionAndArgs), VAR_7);

       FUNC_0(VAR_0->EntryList, VAR_10);
      }

      FUNC_1(VAR_9);
     }
    }
   }
  }

  FUNC_1(VAR_1);
 }

 return VAR_0;
}
