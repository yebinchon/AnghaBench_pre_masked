
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;



u32_t
FUNC_0(u32_t VAR_0)
{
  return ((VAR_0 & 0xff) << 24) |
    ((VAR_0 & 0xff00) << 8) |
    ((VAR_0 & 0xff0000) >> 8) |
    ((VAR_0 & 0xff000000) >> 24);
}
