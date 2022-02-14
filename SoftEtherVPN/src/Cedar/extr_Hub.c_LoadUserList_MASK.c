
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int UserHashList; int Filename; } ;
typedef TYPE_1__ USERLIST ;
typedef int UINT64 ;
typedef int LIST ;
typedef int BUF ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;
 int * FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,int,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 TYPE_1__* FUNC_15 (int) ;

USERLIST *FUNC_16(LIST *VAR_1, char *VAR_2)
{
 USERLIST *VAR_3;
 BUF *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_4(VAR_1, VAR_2);

 if (VAR_3 != ((void*)0))
 {
  FUNC_3(VAR_1, VAR_3);

  FUNC_7(VAR_3);
 }

 VAR_3 = FUNC_15(sizeof(USERLIST));

 FUNC_12(VAR_3->Filename, sizeof(VAR_3->Filename), VAR_2);

 VAR_3->UserHashList = FUNC_9(0);

 VAR_4 = FUNC_10(VAR_2, VAR_0);
 if (VAR_4 != ((void*)0))
 {
  while (1)
  {
   char *VAR_5 = FUNC_2(VAR_4);
   UINT64 VAR_6;
   if (VAR_5 == ((void*)0))
   {
    break;
   }

   FUNC_13(VAR_5);

   if (FUNC_8(VAR_5) == 0)
   {
    if (FUNC_11(VAR_5, "#") == 0 &&
     FUNC_11(VAR_5, "//") == 0 &&
     FUNC_11(VAR_5, ";") == 0)
    {
     VAR_6 = FUNC_14(VAR_5);

     FUNC_1(VAR_3->UserHashList, VAR_6);
    }
   }

   FUNC_5(VAR_5);
  }

  FUNC_6(VAR_4);
 }

 FUNC_0(VAR_1, VAR_3);

 return VAR_3;
}
