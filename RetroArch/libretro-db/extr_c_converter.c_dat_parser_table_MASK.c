
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * string; int * list; } ;
struct TYPE_9__ {int * key; TYPE_1__ value; int type; int member_0; } ;
typedef TYPE_3__ dat_converter_map_t ;
typedef int dat_converter_list_t ;
struct TYPE_8__ {char* fname; int line_no; int column; int * label; } ;
struct TYPE_10__ {TYPE_2__ token; } ;
typedef TYPE_4__ dat_converter_list_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int,int) ;
 scalar_t__ FUNC_5 (int *,char*) ;

__attribute__((used)) static dat_converter_list_t* FUNC_6(
      dat_converter_list_item_t** VAR_3)
{
   dat_converter_list_t* VAR_4 =
      FUNC_2(VAR_1);
   dat_converter_map_t VAR_5 = {0};
   dat_converter_list_item_t* VAR_6 = *VAR_3;

   while (VAR_6->token.label)
   {

      if (!VAR_5.key)
      {
         if (FUNC_5(VAR_6->token.label, ")"))
         {
            VAR_6++;
            *VAR_3 = VAR_6;
            return VAR_4;
         }
         else if (FUNC_5(VAR_6->token.label, "("))
         {
            FUNC_4("%s:%d:%d: fatal error: Unexpected '(' instead of key\n",
                   VAR_6->token.fname,
                   VAR_6->token.line_no,
                   VAR_6->token.column);
            FUNC_0(1);
         }
         else
         {
            VAR_5.key = VAR_6->token.label;
            VAR_6++;
         }
      }
      else
      {
         if (FUNC_5(VAR_6->token.label, "("))
         {
            VAR_6++;
            VAR_5.type = VAR_0;
            VAR_5.value.list = FUNC_6(&VAR_6);
            FUNC_1(VAR_4, &VAR_5);
         }
         else if (FUNC_5(VAR_6->token.label, ")"))
         {
            FUNC_4("%s:%d:%d: fatal error: Unexpected ')' instead of value\n",
                   VAR_6->token.fname,
                   VAR_6->token.line_no,
                   VAR_6->token.column);
            FUNC_0(1);
         }
         else
         {
            VAR_5.type = VAR_2;
            VAR_5.value.string = VAR_6->token.label;
            FUNC_1(VAR_4, &VAR_5);
            VAR_6++;
         }
         VAR_5.key = ((void*)0);
      }
   }

   FUNC_4("%s:%d:%d: fatal error: Missing ')' for '('\n",
          (*VAR_3)->token.fname,
          (*VAR_3)->token.line_no,
          (*VAR_3)->token.column);
   FUNC_0(1);


   FUNC_3(VAR_4);
   return ((void*)0);
}
