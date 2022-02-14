
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ LatestIgnoreBuild; } ;
struct TYPE_9__ {scalar_t__ MyBuild; scalar_t__ LatestBuild; int Param; int HaltFlag; int (* Callback ) (TYPE_2__*,scalar_t__,scalar_t__,int ,int ,int *,int ) ;TYPE_1__ Setting; int FamilyName; } ;
typedef TYPE_2__ UPDATE_CLIENT ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {int NumTokens; int * Token; } ;
typedef TYPE_3__ TOKEN_LIST ;
typedef int BUF ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*) ;
 TYPE_3__* FUNC_4 (char*,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*,scalar_t__,scalar_t__,int ,int ,int *,int ) ;

void FUNC_12(UPDATE_CLIENT *VAR_0, BUF *VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_1);

 while (1)
 {
  char *VAR_3 = FUNC_0(VAR_1);
  if (VAR_3 == ((void*)0))
  {
   break;
  }

  FUNC_10(VAR_3);

  if (FUNC_7(VAR_3, "#") == 0 && FUNC_3(VAR_3) == 0)
  {
   TOKEN_LIST *VAR_4 = FUNC_4(VAR_3, " \t");

   if (VAR_4 != ((void*)0))
   {
    if (VAR_4->NumTokens >= 5)
    {
     if (FUNC_8(VAR_4->Token[0], VAR_0->FamilyName) == 0)
     {

      UINT64 VAR_5 = FUNC_6(VAR_4->Token[1]);
      if (VAR_5 != 0)
      {
       UINT VAR_6 = FUNC_9(VAR_4->Token[2]);
       if (VAR_6 != 0)
       {
        if (VAR_6 > VAR_0->MyBuild && VAR_6 > VAR_0->LatestBuild && VAR_6 > VAR_0->Setting.LatestIgnoreBuild)
        {
         VAR_0->Callback(VAR_0, VAR_6, VAR_5, VAR_4->Token[3], VAR_4->Token[4], &VAR_0->HaltFlag, VAR_0->Param);

         VAR_0->LatestBuild = VAR_6;

         VAR_2 = 1;
        }
       }
      }
     }
    }

    FUNC_2(VAR_4);
   }
  }

  FUNC_1(VAR_3);

  if (VAR_2)
  {
   break;
  }
 }
}
