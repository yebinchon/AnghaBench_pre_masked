
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_mem_cache_object {int dummy; } ;
struct dm_mem_cache_client {unsigned int chunks; unsigned int pages_per_chunk; unsigned int free_pages; int objs_pool; int lock; } ;


 int VAR_0 ;
 struct dm_mem_cache_object* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct dm_mem_cache_client*,struct dm_mem_cache_object*) ;
 struct dm_mem_cache_object* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dm_mem_cache_object*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

struct dm_mem_cache_object *FUNC_6(struct dm_mem_cache_client *VAR_2)
{
 int VAR_3 = 0;
 unsigned VAR_4 = VAR_2->chunks * VAR_2->pages_per_chunk;
 unsigned long VAR_5;
 struct dm_mem_cache_object *VAR_6;

 VAR_6 = FUNC_2(VAR_2->objs_pool, VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_4(&VAR_2->lock, VAR_5);
 if (VAR_4 > VAR_2->free_pages)
  VAR_3 = -VAR_0;
 else
  VAR_2->free_pages -= VAR_4;
 FUNC_5(&VAR_2->lock, VAR_5);

 if (VAR_3) {
  FUNC_3(VAR_6, VAR_2->objs_pool);
  return FUNC_0(VAR_3);
 }

 FUNC_1(VAR_2, VAR_6);
 return VAR_6;
}
