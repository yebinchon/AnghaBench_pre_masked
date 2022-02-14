
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;
typedef unsigned int __s32 ;



__attribute__((used)) static u32 FUNC_0(__s32 VAR_0, unsigned VAR_1)
{
 s32 VAR_2 = VAR_0 >> (VAR_1 - 1);
 if (VAR_2 && VAR_2 != -1)
  return VAR_0 < 0 ? 1 << (VAR_1 - 1) : (1 << (VAR_1 - 1)) - 1;
 return VAR_0 & ((1 << VAR_1) - 1);
}
