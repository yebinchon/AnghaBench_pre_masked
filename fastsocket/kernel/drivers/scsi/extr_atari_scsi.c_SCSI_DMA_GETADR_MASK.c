
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long dma_lo; int dma_md; int dma_hi; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_1(void)
{
 unsigned long VAR_1;
 VAR_1 = VAR_0.dma_lo;
 FUNC_0();
 VAR_1 |= (VAR_0.dma_md & 0xff) << 8;
 FUNC_0();
 VAR_1 |= (VAR_0.dma_hi & 0xff) << 16;
 FUNC_0();
 return VAR_1;
}
