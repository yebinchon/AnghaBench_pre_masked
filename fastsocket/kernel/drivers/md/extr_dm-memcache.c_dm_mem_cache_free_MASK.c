
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_mem_cache_object {int dummy; } ;
struct dm_mem_cache_client {int objs_pool; } ;


 int FUNC_0 (struct dm_mem_cache_client*,struct dm_mem_cache_object*) ;
 int FUNC_1 (struct dm_mem_cache_object*,int ) ;

void FUNC_2(struct dm_mem_cache_client *VAR_0,
         struct dm_mem_cache_object *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_1, VAR_0->objs_pool);
}
