
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;



__attribute__((used)) static u8 FUNC_0(u32 VAR_0)
{
 u8 VAR_1 = 0;

 if (!VAR_0)
  return 0;

 while (VAR_0 > 1) {
  VAR_0 >>= 1;
  ++VAR_1;
 }

 return VAR_1;
}
