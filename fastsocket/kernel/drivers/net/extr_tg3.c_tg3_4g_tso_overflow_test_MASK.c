
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct tg3*) ;

__attribute__((used)) static inline int FUNC_1(struct tg3 *VAR_1, dma_addr_t VAR_2,
        u32 VAR_3, u32 VAR_4)
{
 if (FUNC_0(VAR_1) == VAR_0 && VAR_4) {
  u32 VAR_5 = (u32) VAR_2 & 0xffffffff;

  return ((VAR_5 + VAR_3 + (VAR_4 & 0x3fff)) < VAR_5);
 }
 return 0;
}
