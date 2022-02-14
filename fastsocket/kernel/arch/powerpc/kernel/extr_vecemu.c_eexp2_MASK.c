
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_1)
{
 int VAR_2, VAR_3;
 unsigned int VAR_4, VAR_5;


 VAR_2 = ((VAR_1 >> 23) & 0xff) - 127;
 if (VAR_2 > 7) {

  if (VAR_2 == 128 && (VAR_1 & 0x7fffff) != 0)
   return VAR_1 | 0x400000;

  return (VAR_1 & 0x80000000)? 0: 0x7f800000;
 }
 if (VAR_2 < -23)
  return 0x3f800000;


 VAR_3 = (VAR_1 & 0x7fffff) | 0x800000;
 if (VAR_2 > 0)
  VAR_3 <<= VAR_2;
 else
  VAR_3 >>= -VAR_2;
 if (VAR_1 & 0x80000000)
  VAR_3 = -VAR_3;


 VAR_2 = (VAR_3 >> 23) + 126;
 if (VAR_2 >= 254)
  return 0x7f800000;
 if (VAR_2 < -23)
  return 0;


 VAR_4 = VAR_0[(VAR_3 >> 20) & 7];


 asm("mulhwu %0,%1,%2" : "=r" (VAR_5)
     : "r" (VAR_3 << 12), "r" (0x172b83ff));
 asm("mulhwu %0,%1,%2" : "=r" (VAR_5) : "r" (VAR_5), "r" (VAR_4));
 VAR_4 += VAR_5;

 if (VAR_2 >= 0)
  return VAR_4 + (VAR_2 << 23);


 VAR_2 = -VAR_2;
 VAR_4 += 1 << (VAR_2 - 1);
 return VAR_4 >> VAR_2;
}
