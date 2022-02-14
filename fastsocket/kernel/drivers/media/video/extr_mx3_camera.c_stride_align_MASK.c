
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __s32 ;



__attribute__((used)) static inline void FUNC_0(__s32 *VAR_0)
{
 if (((*VAR_0 + 7) & ~7) < 4096)
  *VAR_0 = (*VAR_0 + 7) & ~7;
 else
  *VAR_0 = *VAR_0 & ~7;
}
