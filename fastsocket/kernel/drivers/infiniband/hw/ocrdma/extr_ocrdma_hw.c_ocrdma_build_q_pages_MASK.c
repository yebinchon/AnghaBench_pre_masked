
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ocrdma_pa {void* hi; void* lo; } ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ocrdma_pa *VAR_0, int VAR_1,
     dma_addr_t VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_0[VAR_4].lo = (u32) (VAR_2 & 0xffffffff);
  VAR_0[VAR_4].hi = (u32) FUNC_0(VAR_2);
  VAR_2 += VAR_3;
 }
}
