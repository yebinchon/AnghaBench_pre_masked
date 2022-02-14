
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union fp_mant128 {int* m32; int * m64; } ;
struct TYPE_2__ {int* m32; int m64; } ;
struct fp_ext {int lowmant; TYPE_1__ mant; } ;



__attribute__((used)) static inline void FUNC_0(struct fp_ext *VAR_0, union fp_mant128 *VAR_1,
     int VAR_2)
{
 unsigned long VAR_3;

 switch (VAR_2) {
 case 0:
  VAR_0->mant.m64 = VAR_1->m64[0];
  VAR_0->lowmant = VAR_1->m32[2] >> 24;
  if (VAR_1->m32[3] || (VAR_1->m32[2] << 8))
   VAR_0->lowmant |= 1;
  break;
 case 1:
  asm volatile ("lsl.l #1,%0"
   : "=d" (VAR_3) : "0" (VAR_1->m32[2]));
  asm volatile ("roxl.l #1,%0"
   : "=d" (VAR_0->mant.m32[1]) : "0" (VAR_1->m32[1]));
  asm volatile ("roxl.l #1,%0"
   : "=d" (VAR_0->mant.m32[0]) : "0" (VAR_1->m32[0]));
  VAR_0->lowmant = VAR_3 >> 24;
  if (VAR_1->m32[3] || (VAR_3 << 8))
   VAR_0->lowmant |= 1;
  break;
 case 31:
  asm volatile ("lsr.l #1,%1; roxr.l #1,%0"
   : "=d" (VAR_0->mant.m32[0])
   : "d" (VAR_1->m32[0]), "0" (VAR_1->m32[1]));
  asm volatile ("roxr.l #1,%0"
   : "=d" (VAR_0->mant.m32[1]) : "0" (VAR_1->m32[2]));
  asm volatile ("roxr.l #1,%0"
   : "=d" (VAR_3) : "0" (VAR_1->m32[3]));
  VAR_0->lowmant = VAR_3 >> 24;
  if (VAR_1->m32[3] << 7)
   VAR_0->lowmant |= 1;
  break;
 case 32:
  VAR_0->mant.m32[0] = VAR_1->m32[1];
  VAR_0->mant.m32[1] = VAR_1->m32[2];
  VAR_0->lowmant = VAR_1->m32[3] >> 24;
  if (VAR_1->m32[3] << 8)
   VAR_0->lowmant |= 1;
  break;
 }
}
