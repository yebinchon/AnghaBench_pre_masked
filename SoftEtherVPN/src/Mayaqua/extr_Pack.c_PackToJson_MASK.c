
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int name ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {int num_value; char* JsonHint_GroupName; int name; scalar_t__ JsonHint_IsArray; } ;
struct TYPE_9__ {int * elements; int * json_subitem_names; } ;
typedef TYPE_1__ PACK ;
typedef int LIST ;
typedef int JSON_VALUE ;
typedef int JSON_OBJECT ;
typedef int JSON_ARRAY ;
typedef TYPE_2__ ELEMENT ;


 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,char*,int *) ;
 int * FUNC_9 (int *) ;
 void* FUNC_10 (int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_1 ;
 int * FUNC_12 () ;
 int FUNC_13 (int *,TYPE_1__*,TYPE_2__*,scalar_t__) ;
 int FUNC_14 (int *,TYPE_1__*,TYPE_2__*,scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,int,char*) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 int FUNC_18 (char*,int,int ) ;
 int ** FUNC_19 (int) ;

JSON_VALUE *FUNC_20(PACK *VAR_2)
{
 JSON_VALUE *VAR_3;
 JSON_OBJECT *VAR_4;
 UINT VAR_5, VAR_6, VAR_7;
 LIST *VAR_8;
 if (VAR_2 == ((void*)0))
 {
  return FUNC_7();
 }

 VAR_8 = FUNC_12();

 for (VAR_5 = 0;VAR_5 < FUNC_11(VAR_2->elements);VAR_5++)
 {
  ELEMENT *VAR_9 = FUNC_10(VAR_2->elements, VAR_5);

  if (VAR_9->num_value >= 2 || VAR_9->JsonHint_IsArray)
  {
   if (FUNC_3(VAR_9->JsonHint_GroupName) == 0)
   {
    FUNC_0(VAR_8, VAR_9->JsonHint_GroupName);
   }
  }
 }

 for (VAR_5 = 0;VAR_5 < FUNC_11(VAR_2->json_subitem_names);VAR_5++)
 {
  char *VAR_10 = FUNC_10(VAR_2->json_subitem_names, VAR_5);

  if (FUNC_3(VAR_10) == 0)
  {
   FUNC_0(VAR_8, VAR_10);
  }
 }

 VAR_3 = FUNC_7();
 VAR_4 = FUNC_9(VAR_3);

 for (VAR_7 = 0;VAR_7 < FUNC_11(VAR_8);VAR_7++)
 {
  char *VAR_11 = FUNC_10(VAR_8, VAR_7);
  UINT VAR_12 = VAR_0;
  bool VAR_13 = 1;

  for (VAR_5 = 0;VAR_5 < FUNC_11(VAR_2->elements);VAR_5++)
  {
   ELEMENT *VAR_14 = FUNC_10(VAR_2->elements, VAR_5);

   if (VAR_14->num_value >= 2 || VAR_14->JsonHint_IsArray)
   {
    if (FUNC_17(VAR_14->JsonHint_GroupName, VAR_11) == 0)
    {
     if (VAR_12 == VAR_0)
     {
      VAR_12 = VAR_14->num_value;
     }
     else
     {
      if (VAR_12 != VAR_14->num_value)
      {
       VAR_13 = 0;
      }
     }
    }
   }
  }

  if (VAR_12 == VAR_0)
  {
   VAR_12 = 0;
  }

  if (VAR_13)
  {
   JSON_VALUE **VAR_15 = FUNC_19(sizeof(void *) * VAR_12);
   JSON_VALUE *VAR_16 = FUNC_6();
   JSON_ARRAY *VAR_17 = FUNC_4(VAR_16);

   FUNC_8(VAR_4, VAR_11, VAR_16);

   for (VAR_6 = 0;VAR_6 < VAR_12;VAR_6++)
   {
    VAR_15[VAR_6] = FUNC_7();

    FUNC_5(VAR_17, VAR_15[VAR_6]);
   }

   for (VAR_5 = 0;VAR_5 < FUNC_11(VAR_2->elements);VAR_5++)
   {
    ELEMENT *VAR_18 = FUNC_10(VAR_2->elements, VAR_5);

    if (VAR_18->num_value >= 2 || VAR_18->JsonHint_IsArray)
    {
     if (FUNC_17(VAR_18->JsonHint_GroupName, VAR_11) == 0)
     {
      for (VAR_6 = 0;VAR_6 < VAR_18->num_value;VAR_6++)
      {
       FUNC_14(FUNC_9(VAR_15[VAR_6]),
        VAR_2, VAR_18, VAR_6);
      }
     }
    }
   }

   FUNC_2(VAR_15);
  }
 }

 for (VAR_5 = 0;VAR_5 < FUNC_11(VAR_2->elements);VAR_5++)
 {
  ELEMENT *VAR_19 = FUNC_10(VAR_2->elements, VAR_5);

  if (VAR_19->num_value >= 2 || VAR_19->JsonHint_IsArray)
  {
   if (FUNC_3(VAR_19->JsonHint_GroupName))
   {
    char *VAR_20 = FUNC_1(VAR_19);

    if (VAR_20 != ((void*)0))
    {
     JSON_VALUE *VAR_21 = FUNC_6();
     JSON_ARRAY *VAR_22 = FUNC_4(VAR_21);
     char VAR_23[VAR_1];

     for (VAR_6 = 0;VAR_6 < VAR_19->num_value;VAR_6++)
     {
      FUNC_13(VAR_22, VAR_2, VAR_19, VAR_6);
     }

     FUNC_18(VAR_23, sizeof(VAR_23), VAR_19->name);
     FUNC_16(VAR_23, sizeof(VAR_23), VAR_20);

     FUNC_8(VAR_4, VAR_23, VAR_21);
    }
   }
  }
  else if (VAR_19->num_value == 1)
  {
   FUNC_14(VAR_4, VAR_2, VAR_19, 0);
  }
 }

 FUNC_15(VAR_8);

 return VAR_3;
}
