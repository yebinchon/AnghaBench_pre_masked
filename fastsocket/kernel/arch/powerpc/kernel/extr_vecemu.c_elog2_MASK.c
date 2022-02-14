
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4;

 VAR_1 = VAR_0 & 0x7f800000;
 VAR_2 = VAR_0 & 0x7fffff;
 if (VAR_1 == 0x7f800000) {
  if (VAR_2 != 0)
   VAR_0 |= 0x400000;
  return VAR_0;
 }
 if ((VAR_1 | VAR_2) == 0)
  return 0xff800000;

 if (VAR_1 == 0) {

  asm("cntlzw %0,%1" : "=r" (VAR_3) : "r" (VAR_2));
  VAR_2 <<= VAR_3 - 8;
  VAR_1 = (-118 - VAR_3) << 23;
 } else {
  VAR_2 |= 0x800000;
  VAR_1 -= 127 << 23;
 }

 if (VAR_2 >= 0xb504f3) {
  VAR_1 |= 0x400000;
  asm("mulhwu %0,%1,%2" : "=r" (VAR_2)
      : "r" (VAR_2), "r" (0xb504f334));
 }
 if (VAR_2 >= 0x9837f0) {
  VAR_1 |= 0x200000;
  asm("mulhwu %0,%1,%2" : "=r" (VAR_2)
      : "r" (VAR_2), "r" (0xd744fccb));
 }
 if (VAR_2 >= 0x8b95c2) {
  VAR_1 |= 0x100000;
  asm("mulhwu %0,%1,%2" : "=r" (VAR_2)
      : "r" (VAR_2), "r" (0xeac0c6e8));
 }
 if (VAR_2 > 0x800000) {


  asm("mulhwu %0,%1,%2" : "=r" (VAR_4)
      : "r" ((VAR_2 - 0x800000) << 1), "r" (0xb0c7cd3a));
  VAR_1 += VAR_4;
 }
 VAR_0 = VAR_1 & 0x80000000;
 if (VAR_1 != 0) {
  if (VAR_0)
   VAR_1 = -VAR_1;
  asm("cntlzw %0,%1" : "=r" (VAR_3) : "r" (VAR_1));
  VAR_3 = 8 - VAR_3;
  if (VAR_3 > 0)
   VAR_1 >>= VAR_3;
  else if (VAR_3 < 0)
   VAR_1 <<= -VAR_3;
  VAR_0 += ((VAR_3 + 126) << 23) + VAR_1;
 }
 return VAR_0;
}
