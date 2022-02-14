
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int comp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

comp_t
FUNC_0(uint32_t VAR_4, uint32_t VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = 0;
 VAR_7 = 0;
 VAR_4 *= VAR_0;
 VAR_4 += VAR_5 / (1000000 / VAR_0);

 while (VAR_4 > VAR_3) {
 VAR_7 = VAR_4 & (1 << (VAR_1 - 1));
  VAR_4 >>= VAR_1;
  VAR_6++;
 }


 if (VAR_7 && (++VAR_4 > VAR_3)) {
  VAR_4 >>= VAR_1;
  VAR_6++;
 }


 VAR_6 <<= VAR_2;
 VAR_6 += VAR_4;
 return (VAR_6);
}
