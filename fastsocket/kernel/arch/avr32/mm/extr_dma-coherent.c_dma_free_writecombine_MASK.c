
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct device*,size_t,struct page*,int ) ;
 int FUNC_1 (void*) ;
 struct page* FUNC_2 (int ) ;

void FUNC_3(struct device *VAR_0, size_t VAR_1,
      void *VAR_2, dma_addr_t VAR_3)
{
 struct page *VAR_4;

 FUNC_1(VAR_2);

 VAR_4 = FUNC_2(VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3);
}
