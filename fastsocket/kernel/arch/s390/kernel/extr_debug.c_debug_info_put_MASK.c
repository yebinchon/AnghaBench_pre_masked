
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* prev; struct TYPE_6__* next; int debugfs_root_entry; int * debugfs_entries; int * views; int ref_count; } ;
typedef TYPE_1__ debug_info_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(debug_info_t *VAR_3)
{
 int VAR_4;

 if (!VAR_3)
  return;
 if (FUNC_0(&VAR_3->ref_count)) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (!VAR_3->views[VAR_4])
    continue;
   FUNC_2(VAR_3->debugfs_entries[VAR_4]);
  }
  FUNC_2(VAR_3->debugfs_root_entry);
  if(VAR_3 == VAR_1)
   VAR_1 = VAR_3->next;
  if(VAR_3 == VAR_2)
   VAR_2 = VAR_3->prev;
  if(VAR_3->prev) VAR_3->prev->next = VAR_3->next;
  if(VAR_3->next) VAR_3->next->prev = VAR_3->prev;
  FUNC_1(VAR_3);
 }
}
