
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int databases_list; int database_match_archive_member; } ;
typedef TYPE_1__ core_info_t ;
struct TYPE_4__ {size_t count; TYPE_1__* list; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*) ;

bool FUNC_6(const char *VAR_1)
{
   char *VAR_2 = ((void*)0);
   const char *VAR_3 = FUNC_1(VAR_1);

   if (FUNC_4(VAR_3))
      return 0;

   VAR_2 = FUNC_3(VAR_3);

   if (FUNC_4(VAR_2))
      goto error;

   FUNC_2(VAR_2);

   if (VAR_0)
   {
      size_t VAR_4;

      for (VAR_4 = 0; VAR_4 < VAR_0->count; VAR_4++)
      {
         const core_info_t *VAR_5 = &VAR_0->list[VAR_4];

         if (!VAR_5->database_match_archive_member)
             continue;

         if (!FUNC_5(VAR_5->databases_list, VAR_2))
             continue;

         FUNC_0(VAR_2);
         return 1;
      }
   }

error:
   if (VAR_2)
      FUNC_0(VAR_2);
   return 0;
}
