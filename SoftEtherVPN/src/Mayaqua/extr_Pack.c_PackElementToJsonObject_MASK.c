
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int name ;
typedef int ip_str ;
typedef int dtstr ;
typedef size_t UINT ;
typedef int UCHAR ;
struct TYPE_10__ {int Size; int * Buf; } ;
struct TYPE_9__ {int type; int JsonHint_IsIP; int JsonHint_IsDateTime; TYPE_1__** values; int name; int JsonHint_IsBool; } ;
struct TYPE_8__ {char* Str; char* UniStr; } ;
typedef int PACK ;
typedef int JSON_OBJECT ;
typedef int IP ;
typedef TYPE_2__ ELEMENT ;
typedef TYPE_3__ BUF ;


 char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*,char*) ;
 int FUNC_8 (int *,char*,char*) ;
 int VAR_0 ;
 int FUNC_9 (int *,int ,size_t) ;
 TYPE_3__* FUNC_10 (int *,int ,size_t) ;
 int FUNC_11 (int *,int ,size_t) ;
 int FUNC_12 (int *,int ,size_t) ;
 int FUNC_13 (int *,int ,int *,size_t) ;
 int FUNC_14 (char*,int,char*) ;
 int FUNC_15 (char*,int,int ) ;
 int FUNC_16 (char*,int,int ) ;






void FUNC_17(JSON_OBJECT *VAR_1, PACK *VAR_2, ELEMENT *VAR_3, UINT VAR_4)
{
 char *VAR_5;
 char VAR_6[VAR_0];
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_5 = FUNC_0(VAR_3);

 if (VAR_5 == ((void*)0))
 {
  return;
 }

 FUNC_15(VAR_6, sizeof(VAR_6), VAR_3->name);
 FUNC_14(VAR_6, sizeof(VAR_6), VAR_5);

 switch (VAR_3->type)
 {
 case 131:
  if (VAR_3->JsonHint_IsIP)
  {
   if (FUNC_3(VAR_3->name, "@") == 0)
   {
    IP VAR_7;
    if (FUNC_13(VAR_2, VAR_3->name, &VAR_7, VAR_4))
    {
     char VAR_8[64];
     FUNC_2(VAR_8, sizeof(VAR_8), &VAR_7);
     FUNC_7(VAR_1, VAR_6, VAR_8);
    }
   }
  }
  else if (VAR_3->JsonHint_IsBool)
  {
   FUNC_4(VAR_1, VAR_6, FUNC_9(VAR_2, VAR_3->name, VAR_4));
  }
  else
  {
   FUNC_6(VAR_1, VAR_6, FUNC_12(VAR_2, VAR_3->name, VAR_4));
  }
  break;
 case 130:
  if (VAR_3->JsonHint_IsIP == 0)
  {
   if (VAR_3->JsonHint_IsDateTime == 0)
   {
    FUNC_6(VAR_1, VAR_6, FUNC_11(VAR_2, VAR_3->name, VAR_4));
   }
   else
   {
    char VAR_9[64];

    FUNC_16(VAR_9, sizeof(VAR_9), FUNC_11(VAR_2, VAR_3->name, VAR_4));
    FUNC_7(VAR_1, VAR_6, VAR_9);
   }
  }
  break;
 case 132:
  if (VAR_3->JsonHint_IsIP == 0)
  {
   BUF *VAR_10 = FUNC_10(VAR_2, VAR_3->name, VAR_4);
   if (VAR_10 != ((void*)0))
   {
    FUNC_5(VAR_1, VAR_6, VAR_10->Buf, VAR_10->Size);
    FUNC_1(VAR_10);
   }
   else
   {
    UCHAR VAR_11 = 0;
    FUNC_5(VAR_1, VAR_6, &VAR_11, 0);
   }
  }
  break;
 case 129:
  if (VAR_3->JsonHint_IsIP == 0)
  {
   if (VAR_3->values[VAR_4] != ((void*)0))
   {
    FUNC_7(VAR_1, VAR_6, VAR_3->values[VAR_4]->Str);
   }
   else
   {
    FUNC_7(VAR_1, VAR_6, "");
   }
  }
  break;
 case 128:
  if (VAR_3->JsonHint_IsIP == 0)
  {
   if (VAR_3->values[VAR_4] != ((void*)0))
   {
    FUNC_8(VAR_1, VAR_6, VAR_3->values[VAR_4]->UniStr);
   }
   else
   {
    FUNC_8(VAR_1, VAR_6, L"");
   }
  }
  break;
 }
}
