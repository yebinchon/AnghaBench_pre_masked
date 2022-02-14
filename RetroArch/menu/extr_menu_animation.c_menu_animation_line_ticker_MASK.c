
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct string_list {int size; } ;
struct TYPE_3__ {char* str; int line_len; int max_lines; char* s; int type_enum; int len; int idx; } ;
typedef TYPE_1__ menu_animation_ctx_line_ticker_t ;




 int FUNC_0 (int,size_t,struct string_list*,char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int,int,int,size_t*) ;
 int FUNC_4 (int ,int,int,size_t*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (struct string_list*) ;
 struct string_list* FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (char*) ;
 int VAR_0 ;
 int FUNC_10 (char*,char*,int,int,int ) ;

bool FUNC_11(menu_animation_ctx_line_ticker_t *VAR_1)
{
   char *VAR_2 = ((void*)0);
   struct string_list *VAR_3 = ((void*)0);
   size_t VAR_4 = 0;
   bool VAR_5 = 0;
   bool VAR_6 = 0;


   if (!VAR_1)
      return 0;

   if (FUNC_5(VAR_1->str) ||
       (VAR_1->line_len < 1) ||
       (VAR_1->max_lines < 1))
      goto end;


   VAR_2 = (char*)FUNC_2((FUNC_9(VAR_1->str) + 1) * sizeof(char));
   if (!VAR_2)
      goto end;

   FUNC_10(
         VAR_2,
         VAR_1->str,
         (int)VAR_1->line_len,
         1, 0);

   if (FUNC_5(VAR_2))
      goto end;


   VAR_3 = FUNC_7(VAR_2, "\n");
   if (!VAR_3)
      goto end;



   if (VAR_3->size <= VAR_1->max_lines)
   {
      FUNC_8(VAR_1->s, VAR_2, VAR_1->len);
      VAR_5 = 1;
      goto end;
   }


   switch (VAR_1->type_enum)
   {
      case 128:
      {
         FUNC_4(
               VAR_1->idx,
               VAR_1->line_len,
               VAR_3->size,
               &VAR_4);

         break;
      }
      case 129:
      default:
      {
         FUNC_3(
               VAR_1->idx,
               VAR_1->line_len,
               VAR_1->max_lines,
               VAR_3->size,
               &VAR_4);

         break;
      }
   }


   FUNC_0(
      VAR_1->max_lines, VAR_4, VAR_3,
      VAR_1->s, VAR_1->len);

   VAR_5 = 1;
   VAR_6 = 1;
   VAR_0 = 1;

end:

   if (VAR_2)
   {
      FUNC_1(VAR_2);
      VAR_2 = ((void*)0);
   }

   if (VAR_3)
   {
      FUNC_6(VAR_3);
      VAR_3 = ((void*)0);
   }

   if (!VAR_5)
      if (VAR_1->len > 0)
         VAR_1->s[0] = '\0';

   return VAR_6;
}
