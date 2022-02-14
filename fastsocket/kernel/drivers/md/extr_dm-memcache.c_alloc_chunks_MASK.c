
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {struct page_list* next; } ;
struct dm_mem_cache_object {struct page_list* pl; } ;
struct dm_mem_cache_client {unsigned int chunks; unsigned int pages_per_chunk; int lock; struct page_list* free_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct dm_mem_cache_client *VAR_0,
    struct dm_mem_cache_object *VAR_1)
{
 unsigned VAR_2 = VAR_0->chunks;
 unsigned long VAR_3;

 FUNC_3(VAR_3);
 FUNC_1();
 while (VAR_2--) {
  unsigned VAR_4 = VAR_0->pages_per_chunk;

  VAR_1[VAR_2].pl = ((void*)0);

  while (VAR_4--) {
   struct page_list *VAR_5;


   FUNC_4(&VAR_0->lock);
   VAR_5 = VAR_0->free_list;
   FUNC_0(!VAR_5);
   VAR_0->free_list = VAR_5->next;
   FUNC_5(&VAR_0->lock);

   VAR_5->next = VAR_1[VAR_2].pl;
   VAR_1[VAR_2].pl = VAR_5;
  }
 }

 FUNC_2(VAR_3);
}
