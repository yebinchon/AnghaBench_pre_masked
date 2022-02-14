
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct TYPE_3__ {int size; int entries; } ;
typedef TYPE_1__ playlist_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int,int (*) (void const*,void const*)) ;

void FUNC_1(playlist_t *VAR_1)
{
   FUNC_0(VAR_1->entries, VAR_1->size,
         sizeof(struct playlist_entry),
         (int (*)(const void *, const void *))VAR_0);
}
