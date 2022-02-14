
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_device {void* shared_addr; void* shared_bus; } ;
typedef void* dma_addr_t ;



__attribute__((used)) static void *FUNC_0(struct sep_device *VAR_0,
      dma_addr_t VAR_1)
{
 return VAR_0->shared_addr + (VAR_1 - VAR_0->shared_bus);
}
