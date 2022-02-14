
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ dma_addr_t ;



__attribute__((used)) static inline int FUNC_0(dma_addr_t VAR_0, int VAR_1)
{
 u32 VAR_2 = (u32) VAR_0 & 0xffffffff;

 return (VAR_2 > 0xffffdcc0) && (VAR_2 + VAR_1 + 8 < VAR_2);
}
