
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {int path; } ;
typedef int real_search_path ;
struct TYPE_3__ {size_t size; struct playlist_entry* entries; } ;
typedef TYPE_1__ playlist_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

void FUNC_4(playlist_t *VAR_1,
      const char *VAR_2,
      const struct playlist_entry **VAR_3)
{
   size_t VAR_4;
   char VAR_5[VAR_0];

   VAR_5[0] = '\0';

   if (!VAR_1 || !VAR_3 || FUNC_2(VAR_2))
      return;


   FUNC_3(VAR_5, VAR_2, sizeof(VAR_5));
   FUNC_0(VAR_5, sizeof(VAR_5), 1);

   for (VAR_4 = 0; VAR_4 < VAR_1->size; VAR_4++)
   {
      if (!FUNC_1(VAR_5, VAR_1->entries[VAR_4].path))
         continue;

      *VAR_3 = &VAR_1->entries[VAR_4];

      break;
   }
}
