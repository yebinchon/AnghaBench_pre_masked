
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;



__attribute__((used)) static inline s32 FUNC_0(s32 VAR_0, s32 VAR_1)
{
 if (VAR_1 == 32)
  return VAR_0;
 else
  return (VAR_0 >= (1 << (VAR_1 - 1))) ? (VAR_0 - (1 << VAR_1)) : VAR_0;
}
