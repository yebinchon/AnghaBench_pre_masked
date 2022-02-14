
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* eba1; void* eba0; } ;
union chan_param_mem {TYPE_1__ pp; } ;
typedef void* dma_addr_t ;



__attribute__((used)) static void FUNC_0(union chan_param_mem *VAR_0,
        dma_addr_t VAR_1, dma_addr_t VAR_2)
{
 VAR_0->pp.eba0 = VAR_1;
 VAR_0->pp.eba1 = VAR_2;
}
