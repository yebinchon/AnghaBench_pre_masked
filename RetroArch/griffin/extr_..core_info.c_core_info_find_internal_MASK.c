
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* path; } ;
typedef TYPE_1__ core_info_t ;
struct TYPE_8__ {size_t count; } ;
typedef TYPE_2__ core_info_list_t ;


 TYPE_1__* FUNC_0 (TYPE_2__*,size_t) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static core_info_t *FUNC_3(
      core_info_list_t *VAR_0,
      const char *VAR_1)
{
   size_t VAR_2;
   const char *VAR_3 = FUNC_1(VAR_1);

   for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++)
   {
      core_info_t *VAR_4 = FUNC_0(VAR_0, VAR_2);

      if (!VAR_4 || !VAR_4->path)
         continue;
      if (FUNC_2(FUNC_1(VAR_4->path), VAR_3))
         return VAR_4;
   }

   return ((void*)0);
}
