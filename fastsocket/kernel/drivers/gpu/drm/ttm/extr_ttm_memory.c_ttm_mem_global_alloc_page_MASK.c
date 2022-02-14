
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_zone {int dummy; } ;
struct ttm_mem_global {struct ttm_mem_zone* zone_kernel; scalar_t__ zone_dma32; struct ttm_mem_zone* zone_highmem; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct ttm_mem_global*,struct ttm_mem_zone*,int ,int,int) ;

int FUNC_3(struct ttm_mem_global *VAR_1,
         struct page *VAR_2,
         bool VAR_3, bool VAR_4)
{

 struct ttm_mem_zone *VAR_5 = ((void*)0);
 if (VAR_1->zone_dma32 && FUNC_1(VAR_2) > 0x00100000UL)
  VAR_5 = VAR_1->zone_kernel;

 return FUNC_2(VAR_1, VAR_5, VAR_0, VAR_3,
      VAR_4);
}
