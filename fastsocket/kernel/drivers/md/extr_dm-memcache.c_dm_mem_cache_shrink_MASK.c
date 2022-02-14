
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {struct page_list* next; } ;
struct dm_mem_cache_client {unsigned int chunks; unsigned int pages_per_chunk; unsigned int free_pages; unsigned int total_pages; unsigned int objects; int objs_pool; int lock; struct page_list* free_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page_list*) ;
 int FUNC_2 (int ,unsigned int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct dm_mem_cache_client *VAR_2, unsigned VAR_3)
{
 int VAR_4;
 unsigned VAR_5 = VAR_3 * VAR_2->chunks * VAR_2->pages_per_chunk, VAR_6 = VAR_5;
 unsigned long VAR_7;
 struct page_list *VAR_8 = ((void*)0), *VAR_9, *VAR_10;

 FUNC_0(!VAR_5);

 FUNC_3(&VAR_2->lock, VAR_7);
 VAR_9 = VAR_10 = VAR_2->free_list;
 while (VAR_6-- && VAR_10->next) {
  VAR_8 = VAR_10;
  VAR_10 = VAR_10->next;
 }

 if (++VAR_6)
  VAR_4 = -VAR_0;
 else {
  VAR_4 = 0;
  VAR_2->free_list = VAR_10;
  VAR_2->free_pages -= VAR_5;
  VAR_2->total_pages -= VAR_5;
  VAR_2->objects -= VAR_3;
  VAR_8->next = ((void*)0);
 }
 FUNC_4(&VAR_2->lock, VAR_7);

 if (!VAR_4) {
  FUNC_1(VAR_9);
  FUNC_2(VAR_2->objs_pool, VAR_2->objects, VAR_1);
 }

 return VAR_4;
}
