
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {int * crc32; int * db_name; int * core_name; int * core_path; int * label; int * path; } ;
struct TYPE_3__ {size_t size; int modified; struct playlist_entry* entries; } ;
typedef TYPE_1__ playlist_t ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;

void FUNC_2(playlist_t *VAR_0, size_t VAR_1,
      const struct playlist_entry *VAR_2)
{
   struct playlist_entry *VAR_3 = ((void*)0);

   if (!VAR_0 || VAR_1 > VAR_0->size)
      return;

   VAR_3 = &VAR_0->entries[VAR_1];

   if (VAR_2->path && (VAR_2->path != VAR_3->path))
   {
      if (VAR_3->path != ((void*)0))
         FUNC_0(VAR_3->path);
      VAR_3->path = FUNC_1(VAR_2->path);
      VAR_0->modified = 1;
   }

   if (VAR_2->label && (VAR_2->label != VAR_3->label))
   {
      if (VAR_3->label != ((void*)0))
         FUNC_0(VAR_3->label);
      VAR_3->label = FUNC_1(VAR_2->label);
      VAR_0->modified = 1;
   }

   if (VAR_2->core_path && (VAR_2->core_path != VAR_3->core_path))
   {
      if (VAR_3->core_path != ((void*)0))
         FUNC_0(VAR_3->core_path);
      VAR_3->core_path = ((void*)0);
      VAR_3->core_path = FUNC_1(VAR_2->core_path);
      VAR_0->modified = 1;
   }

   if (VAR_2->core_name && (VAR_2->core_name != VAR_3->core_name))
   {
      if (VAR_3->core_name != ((void*)0))
         FUNC_0(VAR_3->core_name);
      VAR_3->core_name = FUNC_1(VAR_2->core_name);
      VAR_0->modified = 1;
   }

   if (VAR_2->db_name && (VAR_2->db_name != VAR_3->db_name))
   {
      if (VAR_3->db_name != ((void*)0))
         FUNC_0(VAR_3->db_name);
      VAR_3->db_name = FUNC_1(VAR_2->db_name);
      VAR_0->modified = 1;
   }

   if (VAR_2->crc32 && (VAR_2->crc32 != VAR_3->crc32))
   {
      if (VAR_3->crc32 != ((void*)0))
         FUNC_0(VAR_3->crc32);
      VAR_3->crc32 = FUNC_1(VAR_2->crc32);
      VAR_0->modified = 1;
   }
}
