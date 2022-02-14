
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_wqueues {scalar_t__ inline_index; struct poll_table_page* table; int error; struct poll_table_entry* inline_entries; } ;
struct poll_table_page {int entry; struct poll_table_page* next; int entries; } ;
struct poll_table_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct poll_table_page*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static struct poll_table_entry *FUNC_2(struct poll_wqueues *VAR_3)
{
 struct poll_table_page *VAR_4 = VAR_3->table;

 if (VAR_3->inline_index < VAR_2)
  return VAR_3->inline_entries + VAR_3->inline_index++;

 if (!VAR_4 || FUNC_0(VAR_4)) {
  struct poll_table_page *VAR_5;

  VAR_5 = (struct poll_table_page *) FUNC_1(VAR_1);
  if (!VAR_5) {
   VAR_3->error = -VAR_0;
   return ((void*)0);
  }
  VAR_5->entry = VAR_5->entries;
  VAR_5->next = VAR_4;
  VAR_3->table = VAR_5;
  VAR_4 = VAR_5;
 }

 return VAR_4->entry++;
}
