
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct TYPE_3__ {size_t size; struct playlist_entry* entries; } ;
typedef TYPE_1__ playlist_t ;


 int FUNC_0 (struct playlist_entry*) ;

void FUNC_1(playlist_t *VAR_0)
{
   size_t VAR_1;
   if (!VAR_0)
      return;

   for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
   {
      struct playlist_entry *VAR_2 = &VAR_0->entries[VAR_1];

      if (VAR_2)
         FUNC_0(VAR_2);
   }
   VAR_0->size = 0;
}
