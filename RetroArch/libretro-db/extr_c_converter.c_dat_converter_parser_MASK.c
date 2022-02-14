
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {char* value; struct TYPE_18__* next; } ;
typedef TYPE_3__ dat_converter_match_key_t ;
struct TYPE_16__ {int * list; } ;
struct TYPE_19__ {char* key; TYPE_1__ value; void* type; } ;
typedef TYPE_4__ dat_converter_map_t ;
struct TYPE_20__ {TYPE_6__* values; } ;
typedef TYPE_5__ dat_converter_list_t ;
struct TYPE_17__ {char* label; int line_no; char* fname; int column; } ;
struct TYPE_21__ {TYPE_2__ token; } ;
typedef TYPE_6__ dat_converter_list_item_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_6__**) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static dat_converter_list_t* FUNC_8(
      dat_converter_list_t* VAR_2,
      dat_converter_list_t* VAR_3,
      dat_converter_match_key_t* VAR_4)
{
   dat_converter_map_t VAR_5;
   dat_converter_list_item_t* VAR_6 = VAR_3->values;
   bool VAR_7 = 1;
   bool VAR_8 = 0;

   VAR_5.key = ((void*)0);
   VAR_5.type = VAR_0;

   if (!VAR_2)
   {
      dat_converter_map_t VAR_9;
      VAR_2 = FUNC_3(VAR_1);
      VAR_9.key = ((void*)0);
      VAR_9.type = VAR_0;
      VAR_9.value.list = ((void*)0);
      FUNC_2(VAR_2, &VAR_9);
   }

   while (VAR_6->token.label)
   {
      if (!VAR_5.key)
      {
         if (FUNC_7(VAR_6->token.label, "game"))
            VAR_7 = 0;
         VAR_5.key = VAR_6->token.label;
         VAR_6++;
      }
      else
      {
         if (FUNC_7(VAR_6->token.label, "("))
         {
            VAR_6++;
            VAR_5.value.list = FUNC_5(&VAR_6);
            if (!VAR_7)
            {
               if (VAR_4)
               {
                  VAR_5.key = FUNC_1(VAR_5.value.list, VAR_4);

                  if (!VAR_5.key)
                  {
                     if (VAR_8 == 0)
                     {
                        FUNC_6("    - Missing match key '");
                        while (VAR_4->next)
                        {
                           FUNC_6("%s.", VAR_4->value);
                           VAR_4 = VAR_4->next;
                        }
                        FUNC_6("%s' on line %d\n", VAR_4->value, VAR_6->token.line_no);
                        VAR_8 = 1;
                     }
                     VAR_7 = 1;
                  }
               }
               else
                  VAR_5.key = ((void*)0);


               if (!VAR_7) {
                  FUNC_2(VAR_2, &VAR_5);
                  VAR_7 = 1;
               }
            }
            else
               FUNC_4(VAR_5.value.list);

            VAR_5.key = ((void*)0);
         }
         else
         {
            FUNC_6("%s:%d:%d: fatal error: Expected '(' found '%s'\n",
                   VAR_6->token.fname,
                   VAR_6->token.line_no,
                   VAR_6->token.column,
                   VAR_6->token.label);
            FUNC_0(1);
         }
      }
   }
   return VAR_2;
}
