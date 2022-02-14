
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {struct page_list* next; } ;
struct dm_mem_cache_object {struct page_list* pl; } ;
struct dm_mem_cache_client {unsigned int chunks; int lock; int free_pages; struct page_list* free_list; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dm_mem_cache_client *VAR_0,
   struct dm_mem_cache_object *VAR_1)
{
 unsigned VAR_2 = VAR_0->chunks;
 unsigned long VAR_3;
 struct page_list *VAR_4, *VAR_5;

 FUNC_2(VAR_3);
 FUNC_0();
 while (VAR_2--) {
  for (VAR_5 = VAR_1[VAR_2].pl; VAR_5; VAR_5 = VAR_4) {
   VAR_4 = VAR_5->next;

   FUNC_3(&VAR_0->lock);
   VAR_5->next = VAR_0->free_list;
   VAR_0->free_list = VAR_5;
   VAR_0->free_pages++;
   FUNC_4(&VAR_0->lock);
  }
 }

 FUNC_1(VAR_3);
}
