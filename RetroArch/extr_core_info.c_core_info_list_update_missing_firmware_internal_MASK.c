
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t firmware_count; TYPE_1__* firmware; } ;
typedef TYPE_2__ core_info_t ;
typedef int core_info_list_t ;
struct TYPE_4__ {int missing; int path; int optional; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 TYPE_2__* FUNC_1 (int *,char const*) ;
 int FUNC_2 (char*,char const*,int ,size_t) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(
      core_info_list_t *VAR_1,
      const char *VAR_2,
      const char *VAR_3,
      bool *VAR_4)
{
   size_t VAR_5;
   core_info_t *VAR_6 = ((void*)0);
   char *VAR_7 = ((void*)0);
   size_t VAR_8 = VAR_0 * sizeof(char);

   if (!VAR_1 || !VAR_2)
      return 0;

   VAR_6 = FUNC_1(VAR_1, VAR_2);

   if (!VAR_6)
      return 0;

   VAR_7 = (char*)FUNC_4(VAR_8);

   if (!VAR_7)
      return 0;

   VAR_7[0] = '\0';

   for (VAR_5 = 0; VAR_5 < VAR_6->firmware_count; VAR_5++)
   {
      if (FUNC_6(VAR_6->firmware[VAR_5].path))
         continue;

      FUNC_2(VAR_7, VAR_3,
            VAR_6->firmware[VAR_5].path, VAR_8);
      VAR_6->firmware[VAR_5].missing = !FUNC_5(VAR_7);
      if (VAR_6->firmware[VAR_5].missing && !VAR_6->firmware[VAR_5].optional)
      {
         *VAR_4 = 1;
         FUNC_0("Firmware missing: %s\n", VAR_6->firmware[VAR_5].path);
      }
   }

   FUNC_3(VAR_7);
   return 1;
}
