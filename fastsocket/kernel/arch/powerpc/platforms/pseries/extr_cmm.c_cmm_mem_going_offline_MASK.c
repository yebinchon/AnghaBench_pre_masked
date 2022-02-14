
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_notify {unsigned long nr_pages; int start_pfn; } ;
struct cmm_page_array {int index; unsigned long* page; struct cmm_page_array* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,...) ;
 int VAR_7 ;
 struct cmm_page_array* VAR_8 ;
 int FUNC_3 (unsigned long) ;
 int VAR_9 ;
 int FUNC_4 (struct cmm_page_array*,struct cmm_page_array*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_9(void *VAR_11)
{
 struct memory_notify *VAR_12 = VAR_11;
 unsigned long VAR_13 = (unsigned long)FUNC_5(VAR_12->start_pfn);
 unsigned long VAR_14 = VAR_13 + (VAR_12->nr_pages << VAR_2);
 struct cmm_page_array *VAR_15, *VAR_16, *VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19 = 0;

 FUNC_2("Memory going offline, searching 0x%lx (%ld pages).\n",
   VAR_13, VAR_12->nr_pages);
 FUNC_7(&VAR_7);


 VAR_16 = VAR_15 = VAR_8;
 while (VAR_15) {
  for (VAR_18 = (VAR_15->index - 1); (VAR_18 + 1) > 0; VAR_18--) {
   if ((VAR_15->page[VAR_18] < VAR_13) ||
       (VAR_15->page[VAR_18] >= VAR_14))
    continue;

   FUNC_6(FUNC_1(VAR_15->page[VAR_18]));
   FUNC_3(VAR_15->page[VAR_18]);
   VAR_19++;
   VAR_9--;
   VAR_10++;
   VAR_15->page[VAR_18] = VAR_16->page[--VAR_16->index];
   if (VAR_16->index == 0) {
    if (VAR_15 == VAR_16)
     VAR_15 = VAR_16->next;
    VAR_16 = VAR_16->next;
    FUNC_3((unsigned long)VAR_8);
    VAR_8 = VAR_16;
    continue;
   }
  }
  VAR_15 = VAR_15->next;
 }


 VAR_16 = ((void*)0);
 VAR_15 = VAR_8;
 while (VAR_15) {
  if (((unsigned long)VAR_15 >= VAR_13) &&
    ((unsigned long)VAR_15 < VAR_14)) {
   VAR_17 = (struct cmm_page_array *)FUNC_0(
     VAR_1 | VAR_6 |
     VAR_5 | VAR_4);
   if (!VAR_17) {
    FUNC_8(&VAR_7);
    FUNC_2("Failed to allocate memory for list "
      "management. Memory hotplug "
      "failed.\n");
    return VAR_0;
   }
   FUNC_4(VAR_17, VAR_15, VAR_3);
   if (VAR_15 == VAR_8)
    VAR_8 = VAR_17;
   if (VAR_16)
    VAR_16->next = VAR_17;
   FUNC_3((unsigned long) VAR_15);
   VAR_19++;
   VAR_15 = VAR_17;
  }

  VAR_16 = VAR_15;
  VAR_15 = VAR_15->next;
 }

 FUNC_8(&VAR_7);
 FUNC_2("Released %ld pages in the search range.\n", VAR_19);

 return 0;
}
