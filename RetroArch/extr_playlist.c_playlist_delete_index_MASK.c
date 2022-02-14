
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct TYPE_3__ {size_t size; int modified; scalar_t__ entries; } ;
typedef TYPE_1__ playlist_t ;


 int FUNC_0 (scalar_t__,scalar_t__,size_t) ;
 int FUNC_1 (struct playlist_entry*) ;

void FUNC_2(playlist_t *VAR_0,
      size_t VAR_1)
{
   struct playlist_entry *VAR_2 = ((void*)0);

   if (!VAR_0)
      return;

   if (VAR_1 >= VAR_0->size)
      return;

   VAR_0->size = VAR_0->size - 1;


   VAR_2 = (struct playlist_entry *)(VAR_0->entries + VAR_1);
   if (VAR_2)
      FUNC_1(VAR_2);


   FUNC_0(VAR_0->entries + VAR_1, VAR_0->entries + VAR_1 + 1,
         (VAR_0->size - VAR_1) * sizeof(struct playlist_entry));

   VAR_0->modified = 1;
}
