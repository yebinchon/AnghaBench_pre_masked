
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int databases_list; int supported_extensions_list; } ;
typedef TYPE_1__ core_info_t ;
struct TYPE_4__ {size_t count; TYPE_1__* list; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (int ,char*) ;

bool FUNC_7(
      const char *VAR_1, const char *VAR_2)
{
   char *VAR_3 = ((void*)0);
   const char *VAR_4 = FUNC_1(VAR_1);

   if (FUNC_5(VAR_4))
      return 0;

   VAR_3 = FUNC_4(VAR_4);

   if (FUNC_5(VAR_3))
      goto error;

   FUNC_3(VAR_3);

   if (VAR_0)
   {
      size_t VAR_5;

      for (VAR_5 = 0; VAR_5 < VAR_0->count; VAR_5++)
      {
         const core_info_t *VAR_6 = &VAR_0->list[VAR_5];

         if (!FUNC_6(VAR_6->supported_extensions_list,
                  FUNC_2(VAR_2)))
            continue;

         if (!FUNC_6(VAR_6->databases_list, VAR_3))
            continue;

         FUNC_0(VAR_3);
         return 1;
      }
   }

error:
   if (VAR_3)
      FUNC_0(VAR_3);
   return 0;
}
