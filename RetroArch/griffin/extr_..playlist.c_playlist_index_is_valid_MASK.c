
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t size; TYPE_1__* entries; } ;
typedef TYPE_2__ playlist_t ;
struct TYPE_4__ {char const* path; char const* core_path; } ;


 char const* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

bool FUNC_2(playlist_t *VAR_0, size_t VAR_1,
      const char *VAR_2, const char *VAR_3)
{
   if (!VAR_0)
      return 0;

   if (VAR_1 >= VAR_0->size)
      return 0;

   return FUNC_1(VAR_0->entries[VAR_1].path, VAR_2) &&
          FUNC_1(FUNC_0(VAR_0->entries[VAR_1].core_path), FUNC_0(VAR_3));
}
