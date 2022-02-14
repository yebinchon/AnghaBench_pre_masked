
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(u32 VAR_0)
{
 return (((VAR_0 & 1) << 24) | ((VAR_0 & 2) << 27) | ((VAR_0 & 4) << 14) | ((VAR_0 & 8) << 17) |
  ((VAR_0 & 16) << 4) | ((VAR_0 & 32) << 7) | ((VAR_0 & 64) >> 6) | ((VAR_0 & 128) >> 3)) * 0xF;
}
