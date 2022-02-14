
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rx_sw_desc {int dma_addr; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const struct rx_sw_desc *VAR_1)
{
 return !(VAR_1->dma_addr & VAR_0);
}
