
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uart_cpm_port {scalar_t__ mem_size; void* mem_addr; int dma_addr; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void *FUNC_2(unsigned long VAR_0,
                                 struct uart_cpm_port *VAR_1)
{
 int VAR_2;
 u32 VAR_3 = VAR_0;
 u32 VAR_4 = (u32)VAR_1->dma_addr;

 if (FUNC_1(VAR_3 >= VAR_4 && VAR_3 < VAR_4 + VAR_1->mem_size)) {
  VAR_2 = VAR_3 - VAR_4;
  return VAR_1->mem_addr + VAR_2;
 }

 FUNC_0();
 return ((void*)0);
}
