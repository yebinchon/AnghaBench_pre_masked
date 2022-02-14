
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_wqueues {int inline_index; struct poll_table_entry* inline_entries; struct poll_table_page* table; } ;
struct poll_table_page {struct poll_table_page* next; struct poll_table_entry* entries; struct poll_table_entry* entry; } ;
struct poll_table_entry {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct poll_table_entry*) ;

void FUNC_2(struct poll_wqueues *VAR_0)
{
 struct poll_table_page * VAR_1 = VAR_0->table;
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->inline_index; VAR_2++)
  FUNC_1(VAR_0->inline_entries + VAR_2);
 while (VAR_1) {
  struct poll_table_entry * VAR_3;
  struct poll_table_page *VAR_4;

  VAR_3 = VAR_1->entry;
  do {
   VAR_3--;
   FUNC_1(VAR_3);
  } while (VAR_3 > VAR_1->entries);
  VAR_4 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0((unsigned long) VAR_4);
 }
}
