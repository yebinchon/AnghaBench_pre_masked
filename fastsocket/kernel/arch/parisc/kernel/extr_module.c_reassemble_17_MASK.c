
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0)
{
 return (((VAR_0 & 0x10000) >> 16) |
  ((VAR_0 & 0x0f800) << 5) |
  ((VAR_0 & 0x00400) >> 8) |
  ((VAR_0 & 0x003ff) << 3));
}
