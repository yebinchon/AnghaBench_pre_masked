
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef char wchar_t ;
typedef int tmp2 ;
typedef int name ;
typedef int UINT64 ;
typedef int UINT ;
typedef char UCHAR ;
struct TYPE_16__ {int JsonHint_IsArray; int JsonHint_IsDateTime; } ;
struct TYPE_14__ {int boolean; int number; char* string; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_1__ value; } ;
struct TYPE_13__ {int JsonHint_IsArray; } ;
typedef int PACK ;
typedef TYPE_2__ JSON_VALUE ;
typedef int IP ;
typedef TYPE_3__ ELEMENT ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 TYPE_11__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 TYPE_3__* FUNC_6 (int *,char*,int,int,int) ;
 TYPE_3__* FUNC_7 (int *,char*,char*,int,int,int) ;
 TYPE_3__* FUNC_8 (int *,char*,int,int,int) ;
 TYPE_3__* FUNC_9 (int *,char*,int,int,int) ;
 int FUNC_10 (int *,char*,int *,int,int,int) ;
 TYPE_3__* FUNC_11 (int *,char*,char*,int,int) ;
 TYPE_3__* FUNC_12 (int *,char*,char*,int,int) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int *,char*) ;
 int FUNC_15 (char*,int,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,int) ;
 scalar_t__ FUNC_20 (char*,int,char*,char*) ;
 char* FUNC_21 (int) ;

bool FUNC_22(PACK *VAR_4, JSON_VALUE *VAR_5, char *VAR_6, UINT VAR_7, UINT VAR_8, bool VAR_9)
{
 char VAR_10[VAR_3];
 bool VAR_11 = 1;
 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_20(VAR_10, sizeof(VAR_10), VAR_6, "_bool"))
 {
  if (VAR_5->type == VAR_0)
  {
   FUNC_3(FUNC_6(VAR_4, VAR_10, FUNC_5(VAR_5->value.boolean), VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
  else if (VAR_5->type == VAR_1)
  {
   FUNC_3(FUNC_6(VAR_4, VAR_10, FUNC_5(VAR_5->value.number), VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
  else if (VAR_5->type == VAR_2)
  {
   FUNC_3(FUNC_6(VAR_4, VAR_10, FUNC_16(VAR_5->value.string), VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
 }
 else if (FUNC_20(VAR_10, sizeof(VAR_10), VAR_6, "_u32"))
 {
  if (VAR_5->type == VAR_0)
  {
   FUNC_3(FUNC_9(VAR_4, VAR_10, FUNC_5(VAR_5->value.boolean), VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
  else if (VAR_5->type == VAR_1)
  {
   FUNC_3(FUNC_9(VAR_4, VAR_10, (UINT)VAR_5->value.number, VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
  else if (VAR_5->type == VAR_2)
  {
   FUNC_3(FUNC_9(VAR_4, VAR_10, FUNC_17(VAR_5->value.string), VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
 }
 else if (FUNC_20(VAR_10, sizeof(VAR_10), VAR_6, "_u64"))
 {
  if (VAR_5->type == VAR_0)
  {
   FUNC_3(FUNC_8(VAR_4, VAR_10, FUNC_5(VAR_5->value.boolean), VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
  else if (VAR_5->type == VAR_1)
  {
   FUNC_3(FUNC_8(VAR_4, VAR_10, VAR_5->value.number, VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
  else if (VAR_5->type == VAR_2)
  {
   FUNC_3(FUNC_8(VAR_4, VAR_10, FUNC_18(VAR_5->value.string), VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
 }
 else if (FUNC_20(VAR_10, sizeof(VAR_10), VAR_6, "_str"))
 {
  if (VAR_5->type == VAR_0)
  {
   FUNC_3(FUNC_11(VAR_4, VAR_10, FUNC_5(VAR_5->value.boolean) ? "true" : "false", VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
  else if (VAR_5->type == VAR_1)
  {
   char VAR_12[64];
   FUNC_19(VAR_12, VAR_5->value.number);
   FUNC_3(FUNC_11(VAR_4, VAR_10, VAR_12, VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
  else if (VAR_5->type == VAR_2)
  {
   FUNC_3(FUNC_11(VAR_4, VAR_10, VAR_5->value.string, VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
 }
 else if (FUNC_20(VAR_10, sizeof(VAR_10), VAR_6, "_utf"))
 {
  if (VAR_5->type == VAR_0)
  {
   FUNC_3(FUNC_12(VAR_4, VAR_10, FUNC_5(VAR_5->value.boolean) ? L"true" : L"false", VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
  else if (VAR_5->type == VAR_1)
  {
   char VAR_13[64];
   wchar_t VAR_14[64];
   FUNC_19(VAR_13, VAR_5->value.number);
   FUNC_15(VAR_14, sizeof(VAR_14), VAR_13);
   FUNC_3(FUNC_12(VAR_4, VAR_10, VAR_14, VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
  else if (VAR_5->type == VAR_2)
  {
   wchar_t *VAR_15 = FUNC_1(VAR_5->value.string);
   FUNC_3(FUNC_12(VAR_4, VAR_10, VAR_15, VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   FUNC_4(VAR_15);
   VAR_11 = 1;
  }
 }
 else if (FUNC_20(VAR_10, sizeof(VAR_10), VAR_6, "_bin"))
 {
  if (VAR_5->type == VAR_2)
  {
   UINT VAR_16 = FUNC_13(VAR_5->value.string);
   UCHAR *VAR_17 = FUNC_21(VAR_16 * 4 + 64);
   UINT VAR_18 = FUNC_0(VAR_17, VAR_5->value.string, VAR_16);
   FUNC_3(FUNC_7(VAR_4, VAR_10, VAR_17, VAR_18, VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   FUNC_4(VAR_17);
   VAR_11 = 1;
  }
 }
 else if (FUNC_20(VAR_10, sizeof(VAR_10), VAR_6, "_dt"))
 {
  if (VAR_5->type == VAR_1)
  {
   FUNC_3(FUNC_8(VAR_4, VAR_10, VAR_5->value.number, VAR_7, VAR_8))->JsonHint_IsArray = !VAR_9;
   VAR_11 = 1;
  }
  else if (VAR_5->type == VAR_2)
  {
   UINT64 VAR_19 = FUNC_2(VAR_5->value.string);
   ELEMENT *VAR_20 = FUNC_8(VAR_4, VAR_10, VAR_19, VAR_7, VAR_8);
   if (VAR_20 != ((void*)0))
   {
    VAR_20->JsonHint_IsArray = !VAR_9;
    VAR_20->JsonHint_IsDateTime = 1;
   }
   VAR_11 = 1;
  }
 }
 else if (FUNC_20(VAR_10, sizeof(VAR_10), VAR_6, "_ip"))
 {
  if (VAR_5->type == VAR_2)
  {
   IP VAR_21;
   if (FUNC_14(&VAR_21, VAR_5->value.string))
   {
    FUNC_10(VAR_4, VAR_10, &VAR_21, VAR_7, VAR_8, VAR_9);
    VAR_11 = 1;
   }
  }
 }

 return VAR_11;
}
