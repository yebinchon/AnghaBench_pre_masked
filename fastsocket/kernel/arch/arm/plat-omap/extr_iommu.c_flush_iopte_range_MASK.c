
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(u32 *VAR_1, u32 *VAR_2)
{

 do {
  asm("mcr	p15, 0, %0, c7, c10, 1 @ flush_pte"
      : : "r" (VAR_1));
  VAR_1 += VAR_0 / sizeof(*VAR_1);
 } while (VAR_1 <= VAR_2);
}
