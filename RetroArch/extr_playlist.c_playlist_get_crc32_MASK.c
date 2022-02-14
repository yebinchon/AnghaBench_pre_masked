
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* entries; } ;
typedef TYPE_2__ playlist_t ;
struct TYPE_4__ {char* crc32; } ;



void FUNC_0(playlist_t *VAR_0, size_t VAR_1,
      const char **VAR_2)
{
   if (!VAR_0)
      return;

   if (VAR_2)
      *VAR_2 = VAR_0->entries[VAR_1].crc32;
}
