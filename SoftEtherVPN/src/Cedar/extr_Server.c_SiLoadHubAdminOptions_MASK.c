
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_13__ {size_t Value; int Name; } ;
struct TYPE_12__ {int AdminOptionList; } ;
struct TYPE_11__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ HUB ;
typedef int FOLDER ;
typedef TYPE_3__ ADMIN_OPTION ;


 int FUNC_0 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_1 (int *) ;
 size_t FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 TYPE_3__* FUNC_10 (int) ;

void FUNC_11(HUB *VAR_0, FOLDER *VAR_1)
{
 TOKEN_LIST *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != ((void*)0))
 {
  UINT VAR_3;

  FUNC_6(VAR_0->AdminOptionList);
  {
   FUNC_3(VAR_0, 0);

   for (VAR_3 = 0;VAR_3 < VAR_2->NumTokens;VAR_3++)
   {
    char *VAR_4 = VAR_2->Token[VAR_3];
    ADMIN_OPTION *VAR_5;
    UINT VAR_6 = FUNC_2(VAR_1, VAR_4);;

    FUNC_8(VAR_4);

    VAR_5 = FUNC_10(sizeof(ADMIN_OPTION));
    FUNC_7(VAR_5->Name, sizeof(VAR_5->Name), VAR_4);
    VAR_5->Value = VAR_6;

    FUNC_5(VAR_0->AdminOptionList, VAR_5);
   }

   FUNC_0(VAR_0, 0);
  }
  FUNC_9(VAR_0->AdminOptionList);

  FUNC_4(VAR_2);
 }
}
