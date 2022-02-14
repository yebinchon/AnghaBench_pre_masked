
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union string_list_elem_attr {int i; } ;
struct string_list {int dummy; } ;
typedef int str ;
struct TYPE_4__ {char* savestate; } ;
struct TYPE_5__ {TYPE_1__ name; } ;
typedef TYPE_2__ global_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,char*,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct string_list*) ;
 int FUNC_9 (struct string_list*,char*,union string_list_elem_attr) ;
 int FUNC_10 (struct string_list*) ;
 int FUNC_11 (char*,int,struct string_list*,char*) ;
 struct string_list* FUNC_12 () ;
 int FUNC_13 (char*,char*,int) ;
 struct string_list* VAR_4 ;

void FUNC_14(char **VAR_5, unsigned VAR_6)
{
   unsigned VAR_7;
   char VAR_8[VAR_1];
   union string_list_elem_attr VAR_9;
   struct string_list *VAR_10 = ((void*)0);
   global_t *VAR_11 = &VAR_3;


   FUNC_7(VAR_5[0]);

   VAR_4 = FUNC_12();
   VAR_10 = FUNC_12();
   FUNC_8(VAR_4);

   VAR_9.i = 0;

   for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
   {
      FUNC_9(VAR_4, VAR_5[VAR_7], VAR_9);
      FUNC_13(VAR_8, VAR_5[VAR_7], sizeof(VAR_8));
      FUNC_6(VAR_8);
      FUNC_9(VAR_10, FUNC_4(VAR_8), VAR_9);
   }
   VAR_8[0] = '\0';
   FUNC_11(VAR_8, sizeof(VAR_8), VAR_10, " + ");



   if (VAR_11)
   {
      if (FUNC_5(FUNC_1(VAR_2)))
         FUNC_13(VAR_11->name.savestate, FUNC_1(VAR_2),
               sizeof(VAR_11->name.savestate));
      if (FUNC_5(VAR_11->name.savestate))
      {
         FUNC_2(VAR_11->name.savestate,
               VAR_8,
               ".state",
               sizeof(VAR_11->name.savestate));
         FUNC_0("%s \"%s\".\n",
               FUNC_3(VAR_0),
               VAR_11->name.savestate);
      }
   }

   if (VAR_10)
      FUNC_10(VAR_10);
}
