
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_12__ {size_t count; TYPE_2__** items; } ;
struct TYPE_11__ {size_t count; char** names; TYPE_2__** values; } ;
struct TYPE_9__ {TYPE_3__* object; TYPE_4__* array; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_1__ value; } ;
typedef int PACK ;
typedef TYPE_2__ JSON_VALUE ;
typedef TYPE_3__ JSON_OBJECT ;
typedef TYPE_4__ JSON_ARRAY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,char*,size_t,int,int) ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*) ;

PACK *FUNC_4(JSON_VALUE *VAR_2)
{
 PACK *VAR_3 = ((void*)0);
 JSON_OBJECT *VAR_4;
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_2();

 VAR_4 = FUNC_1(VAR_2);

 if (VAR_4 != ((void*)0))
 {
  UINT VAR_5;
  for (VAR_5 = 0;VAR_5 < VAR_4->count;VAR_5++)
  {
   char *VAR_6 = VAR_4->names[VAR_5];
   JSON_VALUE *VAR_7 = VAR_4->values[VAR_5];

   if (VAR_7->type == VAR_0)
   {
    UINT VAR_8;
    JSON_ARRAY *VAR_9 = VAR_7->value.array;

    for (VAR_8 = 0;VAR_8 < VAR_9->count;VAR_8++)
    {
     if (VAR_9->items[VAR_8]->type != VAR_1)
     {
      FUNC_0(VAR_3, VAR_9->items[VAR_8], VAR_6, VAR_8, VAR_9->count, 0);
     }
     else
     {
      JSON_VALUE *VAR_10 = VAR_9->items[VAR_8];
      JSON_OBJECT *VAR_11 = VAR_10->value.object;
      UINT VAR_12;

      for (VAR_12 = 0;VAR_12 < VAR_11->count;VAR_12++)
      {
       char *VAR_13 = VAR_11->names[VAR_12];
       JSON_VALUE *VAR_14 = VAR_11->values[VAR_12];

       FUNC_3(VAR_3, VAR_6);
       FUNC_0(VAR_3, VAR_14, VAR_13, VAR_8, VAR_9->count, 0);
       FUNC_3(VAR_3, ((void*)0));
      }
     }
    }
   }
   else
   {
    FUNC_0(VAR_3, VAR_7, VAR_6, 0, 1, 1);
   }
  }
 }

 return VAR_3;
}
