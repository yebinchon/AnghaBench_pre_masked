
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int dma_addr_t ;
typedef int addr ;



__attribute__((used)) static inline u8 FUNC_0(dma_addr_t VAR_0)
{
 return (sizeof(VAR_0) > sizeof(u32) ? (VAR_0 >> 16) >> 16 : 0) & 0xF;
}
