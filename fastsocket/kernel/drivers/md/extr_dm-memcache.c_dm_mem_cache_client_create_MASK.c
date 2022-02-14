
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_mem_cache_object {int dummy; } ;
struct dm_mem_cache_client {unsigned int objects; unsigned int chunks; unsigned int pages_per_chunk; unsigned int free_pages; unsigned int total_pages; int objs_pool; int lock; int free_list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct dm_mem_cache_client* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct dm_mem_cache_client*) ;
 struct dm_mem_cache_client* FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

struct dm_mem_cache_client *
FUNC_8(unsigned VAR_2, unsigned VAR_3,
      unsigned VAR_4)
{
 unsigned VAR_5 = VAR_2 * VAR_3 * VAR_4;
 struct dm_mem_cache_client *VAR_6;

 FUNC_0(!VAR_5);
 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 VAR_6->objs_pool = FUNC_5(VAR_2,
    VAR_3 * sizeof(struct dm_mem_cache_object));
 if (!VAR_6->objs_pool)
  goto err;

 VAR_6->free_list = FUNC_2(VAR_5);
 if (!VAR_6->free_list)
  goto err1;

 FUNC_7(&VAR_6->lock);
 VAR_6->objects = VAR_2;
 VAR_6->chunks = VAR_3;
 VAR_6->pages_per_chunk = VAR_4;
 VAR_6->free_pages = VAR_6->total_pages = VAR_5;
 return VAR_6;

err1:
 FUNC_6(VAR_6->objs_pool);
err:
 FUNC_3(VAR_6);
 return FUNC_1(-VAR_0);
}
