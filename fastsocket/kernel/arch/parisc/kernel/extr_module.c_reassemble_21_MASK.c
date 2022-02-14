
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0)
{
 return (((VAR_0 & 0x100000) >> 20) |
  ((VAR_0 & 0x0ffe00) >> 8) |
  ((VAR_0 & 0x000180) << 7) |
  ((VAR_0 & 0x00007c) << 14) |
  ((VAR_0 & 0x000003) << 12));
}
