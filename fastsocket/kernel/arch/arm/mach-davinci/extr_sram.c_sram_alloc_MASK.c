
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long dma_addr_t ;
struct TYPE_2__ {unsigned long sram_dma; } ;


 unsigned long VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned long FUNC_0 (int ,size_t) ;
 int VAR_2 ;

void *FUNC_1(size_t VAR_3, dma_addr_t *VAR_4)
{
 unsigned long VAR_5;
 dma_addr_t VAR_6 = VAR_1.sram_dma;

 if (VAR_4)
  *VAR_4 = 0;
 if (!VAR_2 || (VAR_4 && !VAR_6))
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_5)
  return ((void*)0);

 if (VAR_4)
  *VAR_4 = VAR_6 + (VAR_5 - VAR_0);
 return (void *)VAR_5;

}
