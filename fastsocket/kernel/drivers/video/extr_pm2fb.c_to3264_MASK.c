
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, int VAR_1, int VAR_2)
{
 switch (VAR_1) {
 case 24:
  VAR_0 *= 3;
 case 8:
  VAR_0 >>= 1;
 case 16:
  VAR_0 >>= 1;
 case 32:
  break;
 }
 if (VAR_2)
  VAR_0 >>= 1;
 return VAR_0;
}
