
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,size_t,struct page*,scalar_t__) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*,void*,unsigned long,unsigned int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 struct page* FUNC_6 (void*) ;

void FUNC_7(struct device *VAR_0, size_t VAR_1,
         void *VAR_2, dma_addr_t VAR_3)
{
 void *VAR_4 = FUNC_2(FUNC_4(VAR_2));
 struct page *VAR_5;

 FUNC_3("dma_free_coherent addr %p (phys %08lx) size %u\n",
   VAR_2, (unsigned long)VAR_3, (unsigned)VAR_1);
 FUNC_0(!FUNC_5(VAR_4));
 VAR_5 = FUNC_6(VAR_4);
 FUNC_1(VAR_0, VAR_1, VAR_5, VAR_3);
}
