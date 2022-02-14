
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 struct page* FUNC_0 (struct device*,size_t,int *,int ) ;
 int FUNC_1 (struct page*) ;
 void* FUNC_2 (int ) ;

void *FUNC_3(struct device *VAR_0, size_t VAR_1,
    dma_addr_t *VAR_2, gfp_t VAR_3)
{
 struct page *VAR_4;
 void *VAR_5 = ((void*)0);

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  VAR_5 = FUNC_2(FUNC_1(VAR_4));

 return VAR_5;
}
