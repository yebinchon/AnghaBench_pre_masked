
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0)
{
 u32 VAR_1,VAR_2,VAR_3,VAR_4,VAR_5;

 VAR_1 = 0;
 VAR_3 = 0;
 VAR_4 = 1;
 VAR_5 = 0;
 while(VAR_1<32) {
  if(VAR_1<=15) {
   VAR_2 = VAR_0&(1<<VAR_1);
   VAR_2 <<= ((31-VAR_1)-VAR_5);
   VAR_3 |= VAR_2;
   VAR_5++;
  } else if(VAR_1==31) {
   VAR_2 = VAR_0>>31;
   VAR_3 |= VAR_2;
  } else {
   VAR_2 = 1;
   VAR_2 = VAR_0&(1<<VAR_1);
   VAR_2 >>= VAR_4;
   VAR_3 |= VAR_2;
   VAR_4 += 2;
  }
  VAR_1++;
 }
 return VAR_3;
}
