
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_prog_region {scalar_t__ bus_addr; } ;
typedef scalar_t__ dma_addr_t ;



__attribute__((used)) static inline dma_addr_t FUNC_0(
  struct dma_prog_region *VAR_0, unsigned long VAR_1)
{
 return VAR_0->bus_addr + VAR_1;
}
