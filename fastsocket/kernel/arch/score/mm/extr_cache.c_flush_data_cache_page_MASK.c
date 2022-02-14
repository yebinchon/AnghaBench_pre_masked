
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_0(unsigned long VAR_2)
{
 unsigned int VAR_3;
 for (VAR_3 = 0; VAR_3 < (VAR_1 / VAR_0); VAR_3 += VAR_0) {
  __asm__ __volatile__(
  "cache 0x0e, [%0, 0]\n"
  "cache 0x1a, [%0, 0]\n"
  "nop\n"
  : : "r" (VAR_2));
  VAR_2 += VAR_0;
 }
}
