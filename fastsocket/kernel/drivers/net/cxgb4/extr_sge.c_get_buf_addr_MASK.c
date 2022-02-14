
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_sw_desc {int dma_addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline dma_addr_t FUNC_0(const struct rx_sw_desc *VAR_2)
{
 return VAR_2->dma_addr & ~(dma_addr_t)(VAR_0 | VAR_1);
}
