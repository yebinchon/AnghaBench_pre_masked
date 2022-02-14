
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ip_str ;
typedef int dtstr ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_9__ {int Size; int * Buf; } ;
struct TYPE_8__ {scalar_t__ num_value; int type; int JsonHint_IsIP; int JsonHint_IsDateTime; TYPE_1__** values; int name; int JsonHint_IsBool; } ;
struct TYPE_7__ {char* Str; char* UniStr; } ;
typedef int PACK ;
typedef int JSON_ARRAY ;
typedef int IP ;
typedef TYPE_2__ ELEMENT ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 TYPE_3__* FUNC_9 (int *,int ,scalar_t__) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int FUNC_11 (int *,int ,scalar_t__) ;
 int FUNC_12 (int *,int ,int *,scalar_t__) ;
 int FUNC_13 (char*,int,int ) ;






void FUNC_14(JSON_ARRAY *VAR_0, PACK *VAR_1, ELEMENT *VAR_2, UINT VAR_3)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 >= VAR_2->num_value)
 {
  return;
 }

 switch (VAR_2->type)
 {
 case 131:
  if (VAR_2->JsonHint_IsIP)
  {
   if (FUNC_2(VAR_2->name, "@") == 0)
   {
    IP VAR_4;
    if (FUNC_12(VAR_1, VAR_2->name, &VAR_4, VAR_3))
    {
     char VAR_5[64];
     FUNC_1(VAR_5, sizeof(VAR_5), &VAR_4);
     FUNC_6(VAR_0, VAR_5);
    }
   }
  }
  else if (VAR_2->JsonHint_IsBool)
  {
   FUNC_3(VAR_0, FUNC_8(VAR_1, VAR_2->name, VAR_3));
  }
  else
  {
   FUNC_5(VAR_0, FUNC_11(VAR_1, VAR_2->name, VAR_3));
  }
  break;
 case 130:
  if (VAR_2->JsonHint_IsIP == 0)
  {
   if (VAR_2->JsonHint_IsDateTime == 0)
   {
    FUNC_5(VAR_0, FUNC_10(VAR_1, VAR_2->name, VAR_3));
   }
   else
   {
    char VAR_6[64];

    FUNC_13(VAR_6, sizeof(VAR_6), FUNC_10(VAR_1, VAR_2->name, VAR_3));
    FUNC_6(VAR_0, VAR_6);
   }
  }
  break;
 case 132:
  if (VAR_2->JsonHint_IsIP == 0)
  {
   BUF *VAR_7 = FUNC_9(VAR_1, VAR_2->name, VAR_3);
   if (VAR_7 != ((void*)0))
   {
    FUNC_4(VAR_0, VAR_7->Buf, VAR_7->Size);
    FUNC_0(VAR_7);
   }
   else
   {
    UCHAR VAR_8 = 0;
    FUNC_4(VAR_0, &VAR_8, 0);
   }
  }
  break;
 case 129:
  if (VAR_2->JsonHint_IsIP == 0)
  {
   if (VAR_2->values[VAR_3] != ((void*)0))
   {
    FUNC_6(VAR_0, VAR_2->values[VAR_3]->Str);
   }
   else
   {
    FUNC_6(VAR_0, "");
   }
  }
  break;
 case 128:
  if (VAR_2->JsonHint_IsIP == 0)
  {
   if (VAR_2->values[VAR_3] != ((void*)0))
   {
    FUNC_7(VAR_0, VAR_2->values[VAR_3]->UniStr);
   }
   else
   {
    FUNC_7(VAR_0, L"");
   }
  }
  break;
 }
}
