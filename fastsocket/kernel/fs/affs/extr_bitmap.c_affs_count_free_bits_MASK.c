
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int* VAR_0 ;

__attribute__((used)) static u32
FUNC_0(u32 VAR_1, const void *VAR_2)
{
 const u32 *VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 VAR_3 = VAR_2;
 VAR_4 = 0;
 for (VAR_1 /= 4; VAR_1 > 0; VAR_1--) {
  VAR_5 = *VAR_3++;
  while (VAR_5) {
   VAR_4 += VAR_0[VAR_5 & 0xf];
   VAR_5 >>= 4;
  }
 }

 return VAR_4;
}
