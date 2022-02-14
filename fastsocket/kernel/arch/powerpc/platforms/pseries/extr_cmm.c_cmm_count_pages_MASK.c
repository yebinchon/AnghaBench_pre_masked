
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_isolate_notify {unsigned long nr_pages; int pages_found; int start_pfn; } ;
struct cmm_page_array {unsigned long index; unsigned long* page; struct cmm_page_array* next; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct cmm_page_array* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static unsigned long FUNC_3(void *VAR_3)
{
 struct memory_isolate_notify *VAR_4 = VAR_3;
 struct cmm_page_array *VAR_5;
 unsigned long VAR_6 = (unsigned long)FUNC_0(VAR_4->start_pfn);
 unsigned long VAR_7 = VAR_6 + (VAR_4->nr_pages << VAR_0);
 unsigned long VAR_8;

 FUNC_1(&VAR_1);
 VAR_5 = VAR_2;
 while (VAR_5) {
  if ((unsigned long)VAR_5 >= VAR_6 && (unsigned long)VAR_5 < VAR_7)
   VAR_4->pages_found++;
  for (VAR_8 = 0; VAR_8 < VAR_5->index; VAR_8++)
   if (VAR_5->page[VAR_8] >= VAR_6 && VAR_5->page[VAR_8] < VAR_7)
    VAR_4->pages_found++;
  VAR_5 = VAR_5->next;
 }
 FUNC_2(&VAR_1);
 return 0;
}
