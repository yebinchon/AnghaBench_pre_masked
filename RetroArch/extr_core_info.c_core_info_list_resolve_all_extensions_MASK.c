
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t count; char* all_ext; TYPE_1__* list; } ;
typedef TYPE_2__ core_info_list_t ;
struct TYPE_4__ {char* supported_extensions; } ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(
      core_info_list_t *VAR_0)
{
   size_t VAR_1 = 0;
   size_t VAR_2 = 0;
   char *VAR_3 = ((void*)0);

   for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
   {
      if (VAR_0->list[VAR_1].supported_extensions)
         VAR_2 +=
            (FUNC_3(VAR_0->list[VAR_1].supported_extensions) + 2);
   }

   VAR_2 += FUNC_0("7z|") + FUNC_0("zip|");

   VAR_3 = (char*)FUNC_1(1, VAR_2);

   if (!VAR_3)
      return;

   VAR_0->all_ext = VAR_3;

   for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
   {
      if (!VAR_0->list[VAR_1].supported_extensions)
         continue;

      FUNC_2(VAR_0->all_ext,
            VAR_0->list[VAR_1].supported_extensions, VAR_2);
      FUNC_2(VAR_0->all_ext, "|", VAR_2);
   }






}
