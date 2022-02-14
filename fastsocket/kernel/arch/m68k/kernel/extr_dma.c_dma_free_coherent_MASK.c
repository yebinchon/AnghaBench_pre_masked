
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (char*,void*,int ) ;
 int FUNC_1 (void*) ;

void FUNC_2(struct device *VAR_0, size_t VAR_1,
         void *VAR_2, dma_addr_t VAR_3)
{
 FUNC_0("dma_free_coherent: %p, %x\n", VAR_2, VAR_3);
 FUNC_1(VAR_2);
}
