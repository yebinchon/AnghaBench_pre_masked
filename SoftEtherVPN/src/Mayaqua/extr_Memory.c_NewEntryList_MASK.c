
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int value ;
typedef int key ;
typedef size_t UINT ;
struct TYPE_8__ {void* Value; void* Key; } ;
struct TYPE_7__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int LIST ;
typedef TYPE_2__ INI_ENTRY ;


 int FUNC_0 (int *,TYPE_2__*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*,char*,int,char*,int,char*) ;
 int VAR_0 ;
 int * FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 TYPE_2__* FUNC_7 (int) ;

LIST *FUNC_8(char *VAR_1, char *VAR_2, char *VAR_3)
{
 LIST *VAR_4 = FUNC_4(((void*)0));
 TOKEN_LIST *VAR_5;

 VAR_5 = FUNC_5(VAR_1, VAR_2);
 if (VAR_5 != ((void*)0))
 {
  UINT VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_5->NumTokens; VAR_6++)
  {
   char VAR_7[VAR_0];
   char VAR_8[VAR_0];
   char *VAR_9 = VAR_5->Token[VAR_6];
   FUNC_6(VAR_9);

   if (FUNC_3(VAR_9, VAR_7, sizeof(VAR_7), VAR_8, sizeof(VAR_8), VAR_3))
   {
    INI_ENTRY *VAR_10 = FUNC_7(sizeof(INI_ENTRY));

    VAR_10->Key = FUNC_1(VAR_7);
    VAR_10->Value = FUNC_1(VAR_8);

    FUNC_0(VAR_4, VAR_10);
   }
  }

  FUNC_2(VAR_5);
 }

 return VAR_4;
}
