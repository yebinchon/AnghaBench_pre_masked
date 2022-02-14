
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct page* FUNC_0 (struct device*,size_t,int *,int ) ;
 void* FUNC_1 (int ,size_t,int ) ;
 int FUNC_2 (struct page*) ;

void *FUNC_3(struct device *VAR_1, size_t VAR_2,
        dma_addr_t *VAR_3, gfp_t VAR_4)
{
 struct page *VAR_5;
 dma_addr_t VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_5);
 *VAR_3 = VAR_6;


 return FUNC_1(VAR_6, VAR_2, VAR_0);
}
