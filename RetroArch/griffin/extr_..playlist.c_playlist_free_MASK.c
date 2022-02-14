
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct playlist_entry {size_t size; struct playlist_entry* entries; struct playlist_entry* default_core_name; struct playlist_entry* default_core_path; struct playlist_entry* conf_path; } ;
typedef struct playlist_entry playlist_t ;


 int FUNC_0 (struct playlist_entry*) ;
 int FUNC_1 (struct playlist_entry*) ;

void FUNC_2(playlist_t *VAR_0)
{
   size_t VAR_1;

   if (!VAR_0)
      return;

   if (VAR_0->conf_path != ((void*)0))
      FUNC_0(VAR_0->conf_path);
   VAR_0->conf_path = ((void*)0);

   if (VAR_0->default_core_path != ((void*)0))
      FUNC_0(VAR_0->default_core_path);
   VAR_0->default_core_path = ((void*)0);

   if (VAR_0->default_core_name != ((void*)0))
      FUNC_0(VAR_0->default_core_name);
   VAR_0->default_core_name = ((void*)0);

   for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
   {
      struct playlist_entry *VAR_2 = &VAR_0->entries[VAR_1];

      if (VAR_2)
         FUNC_1(VAR_2);
   }

   FUNC_0(VAR_0->entries);
   VAR_0->entries = ((void*)0);

   FUNC_0(VAR_0);
}
