
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int ct_key ;
typedef int ct_description ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int Value; int Name; } ;
struct TYPE_5__ {int CapsList; } ;
typedef int PACK ;
typedef TYPE_1__ CAPSLIST ;
typedef TYPE_2__ CAPS ;


 int FUNC_0 (char*,int,char*,int ) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,char*,int *,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int *) ;
 int FUNC_11 (int *,int) ;
 int * FUNC_12 (char*) ;

void FUNC_13(PACK *VAR_2, CAPSLIST *VAR_3)
{
 UINT VAR_4;

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_2, "CapsList");
 for (VAR_4 = 0;VAR_4 < FUNC_2(VAR_3->CapsList);VAR_4++)
 {
  char VAR_5[VAR_1];
  char VAR_6[VAR_0];
  wchar_t VAR_7[VAR_0];
  wchar_t *VAR_8;
  CAPS *VAR_9 = FUNC_1(VAR_3->CapsList, VAR_4);

  FUNC_0(VAR_5, sizeof(VAR_5), "caps_%s", VAR_9->Name);

  FUNC_0(VAR_6, sizeof(VAR_6), "CT_%s", VAR_9->Name);

  FUNC_11(VAR_7, sizeof(VAR_7));
  VAR_8 = FUNC_12(VAR_6);
  if (FUNC_9(VAR_8) == 0)
  {
   FUNC_10(VAR_7, sizeof(VAR_7), VAR_8);
  }
  else
  {
   FUNC_8(VAR_7, sizeof(VAR_7), VAR_9->Name);
  }

  FUNC_3(VAR_2, VAR_5, VAR_9->Value);

  FUNC_5(VAR_2, "CapsName", VAR_9->Name, VAR_4, FUNC_2(VAR_3->CapsList));
  FUNC_4(VAR_2, "CapsValue", VAR_9->Value, VAR_4, FUNC_2(VAR_3->CapsList));
  FUNC_6(VAR_2, "CapsDescrption", VAR_7, VAR_4, FUNC_2(VAR_3->CapsList));
 }
 FUNC_7(VAR_2, ((void*)0));
}
