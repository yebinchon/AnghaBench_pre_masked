
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_loaf {void* cpu_base; int length; size_t dma_free; void* cpu_free; } ;
typedef size_t dma_addr_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void *FUNC_1(struct dma_loaf *VAR_0, size_t VAR_1,
     dma_addr_t *VAR_2)
{
 void *VAR_3 = VAR_0->cpu_free + VAR_1;
 void *VAR_4 = VAR_0->cpu_free;

 FUNC_0(VAR_3 > VAR_0->cpu_base + VAR_0->length);
 *VAR_2 = VAR_0->dma_free;
 VAR_0->cpu_free = VAR_3;
 VAR_0->dma_free += VAR_1;
 return VAR_4;
}
