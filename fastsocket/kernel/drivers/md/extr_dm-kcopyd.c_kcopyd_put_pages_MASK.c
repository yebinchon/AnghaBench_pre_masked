
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {struct page_list* next; } ;
struct dm_kcopyd_client {scalar_t__ nr_free_pages; scalar_t__ nr_reserved_pages; struct page_list* pages; } ;


 int FUNC_0 (struct page_list*) ;

__attribute__((used)) static void FUNC_1(struct dm_kcopyd_client *VAR_0, struct page_list *VAR_1)
{
 struct page_list *VAR_2;

 do {
  VAR_2 = VAR_1->next;

  if (VAR_0->nr_free_pages >= VAR_0->nr_reserved_pages)
   FUNC_0(VAR_1);
  else {
   VAR_1->next = VAR_0->pages;
   VAR_0->pages = VAR_1;
   VAR_0->nr_free_pages++;
  }

  VAR_1 = VAR_2;
 } while (VAR_1);
}
