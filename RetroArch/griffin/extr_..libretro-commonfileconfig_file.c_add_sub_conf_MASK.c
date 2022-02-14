
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct config_include_list {struct config_include_list* next; int path; } ;
typedef int real_path ;
struct TYPE_6__ {scalar_t__ include_depth; int path; struct config_include_list* includes; } ;
typedef TYPE_1__ config_file_t ;
typedef int config_file_cb_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,int *) ;
 int FUNC_3 (char*,int ,char*,int) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_10(config_file_t *VAR_1, char *VAR_2, config_file_cb_t *VAR_3)
{
   char VAR_4[VAR_0];
   config_file_t *VAR_5 = ((void*)0);
   struct config_include_list *VAR_6 = VAR_1->includes;
   struct config_include_list *VAR_7 = (struct config_include_list*)
      FUNC_5(sizeof(*VAR_7));

   if (VAR_7)
   {
      VAR_7->next = ((void*)0);

      VAR_7->path = FUNC_6(VAR_2);

      if (VAR_6)
      {
         while (VAR_6->next)
            VAR_6 = VAR_6->next;

         VAR_6->next = VAR_7;
      }
      else
         VAR_1->includes = VAR_7;
   }

   VAR_4[0] = '\0';







   if (*VAR_2 == '~')
   {
      const char *VAR_8 = FUNC_4("HOME");
      FUNC_9(VAR_4, VAR_8 ? VAR_8 : "", sizeof(VAR_4));
      FUNC_8(VAR_4, VAR_2 + 1, sizeof(VAR_4));
   }
   else

      if (!FUNC_7(VAR_1->path))
         FUNC_3(VAR_4, VAR_1->path,
               VAR_2, sizeof(VAR_4));


   VAR_5 = (config_file_t*)
      FUNC_2(VAR_4, VAR_1->include_depth + 1, VAR_3);
   if (!VAR_5)
      return;


   FUNC_0(VAR_1, VAR_5);
   FUNC_1(VAR_5);
}
