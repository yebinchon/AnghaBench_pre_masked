
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {struct page_list* next; } ;
struct dm_mem_cache_client {unsigned int chunks; unsigned int pages_per_chunk; unsigned int free_pages; unsigned int total_pages; unsigned int objects; int objs_pool; int lock; struct page_list* free_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct page_list* FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,unsigned int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dm_mem_cache_client *VAR_2, unsigned VAR_3)
{
 unsigned VAR_4 = VAR_3 * VAR_2->chunks * VAR_2->pages_per_chunk;
 struct page_list *VAR_5, *VAR_6;

 FUNC_0(!VAR_4);
 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = VAR_5;
 while (VAR_6->next)
  VAR_6 = VAR_6->next;

 FUNC_3(&VAR_2->lock);
 VAR_6->next = VAR_2->free_list;
 VAR_2->free_list = VAR_5;
 VAR_2->free_pages += VAR_4;
 VAR_2->total_pages += VAR_4;
 VAR_2->objects += VAR_3;
 FUNC_4(&VAR_2->lock);

 FUNC_2(VAR_2->objs_pool, VAR_2->objects, VAR_1);
 return 0;
}
