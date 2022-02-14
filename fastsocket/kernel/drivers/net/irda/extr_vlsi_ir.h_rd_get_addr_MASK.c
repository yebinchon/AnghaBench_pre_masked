
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_descr {TYPE_1__* hw; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int rd_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline dma_addr_t FUNC_1(struct ring_descr *VAR_2)
{
 dma_addr_t VAR_3;

 VAR_3 = FUNC_0(VAR_2->hw->rd_addr);
 return (VAR_3 & VAR_0) | (VAR_1 << 24);
}
