
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_device {int shared_bus; void* shared_addr; } ;
typedef int dma_addr_t ;


 int FUNC_0 (char*,int,void*) ;

__attribute__((used)) static dma_addr_t FUNC_1(struct sep_device *VAR_0,
      void *VAR_1)
{
 dma_addr_t VAR_2 = VAR_0->shared_bus + (VAR_1 - VAR_0->shared_addr);
 FUNC_0("sep: virt to bus b %08llx v %p\n", VAR_2, VAR_1);
 return VAR_2;
}
