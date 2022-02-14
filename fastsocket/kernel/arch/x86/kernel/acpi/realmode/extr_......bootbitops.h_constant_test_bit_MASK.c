
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;



__attribute__((used)) static inline int FUNC_0(int VAR_0, const void *VAR_1)
{
 const u32 *VAR_2 = (const u32 *)VAR_1;
 return ((1UL << (VAR_0 & 31)) & (VAR_2[VAR_0 >> 5])) != 0;
}
