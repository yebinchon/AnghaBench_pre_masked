
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {int Size; } ;
struct TYPE_10__ {int TitleLocal; int TitleEnglish; int Name; } ;
typedef int LIST ;
typedef TYPE_1__ LANGLIST ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int VAR_1 ;
 TYPE_2__* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int ,int ) ;
 int FUNC_10 (int *,int,char*,int ,int ,int ) ;

bool FUNC_11(wchar_t *VAR_2, char *VAR_3)
{
 BUF *VAR_4;
 LIST *VAR_5;
 UINT VAR_6;
 bool VAR_7;

 if (VAR_2 == ((void*)0))
 {
  return 0;
 }


 VAR_4 = FUNC_8(VAR_0);
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 FUNC_9(VAR_4, VAR_4->Size, 0);

 VAR_5 = FUNC_7();
 if (VAR_5 != ((void*)0))
 {
  wchar_t VAR_8[VAR_1];

  FUNC_0(VAR_4, "# Available Language IDs are:\r\n");

  for (VAR_6 = 0;VAR_6 < FUNC_6(VAR_5);VAR_6++)
  {
   LANGLIST *VAR_9 = FUNC_5(VAR_5, VAR_6);

   FUNC_10(VAR_8, sizeof(VAR_8), L"#  %S: %s (%s)\r\n",
    VAR_9->Name, VAR_9->TitleEnglish, VAR_9->TitleLocal);

   FUNC_1(VAR_4, VAR_8);
  }

  FUNC_0(VAR_4, "\r\n\r\n# Specify a Language ID here.\r\n");
  FUNC_0(VAR_4, VAR_3);
  FUNC_0(VAR_4, "\r\n\r\n");

  FUNC_4(VAR_5);
 }

 VAR_7 = FUNC_2(VAR_4, VAR_2);

 FUNC_3(VAR_4);

 return VAR_7;
}
