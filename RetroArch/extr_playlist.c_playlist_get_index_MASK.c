
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct TYPE_3__ {struct playlist_entry* entries; } ;
typedef TYPE_1__ playlist_t ;



void FUNC_0(playlist_t *VAR_0,
      size_t VAR_1,
      const struct playlist_entry **VAR_2)
{
   if (!VAR_0 || !VAR_2)
      return;

   *VAR_2 = &VAR_0->entries[VAR_1];
}
