
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_mem_cache_client {scalar_t__ free_pages; scalar_t__ total_pages; int objs_pool; int free_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dm_mem_cache_client*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct dm_mem_cache_client *VAR_0)
{
 FUNC_0(VAR_0->free_pages != VAR_0->total_pages);
 FUNC_1(VAR_0->free_list);
 FUNC_3(VAR_0->objs_pool);
 FUNC_2(VAR_0);
}
