
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int
FUNC_0 (int VAR_0)
{

  VAR_0 = ((VAR_0 & ~0x5555) >> 1) + (VAR_0 & 0x5555);
  VAR_0 = ((VAR_0 & ~0x3333) >> 2) + (VAR_0 & 0x3333);
  VAR_0 = ((VAR_0 >> 4) + VAR_0) & 0x0f0f;
  VAR_0 = ((VAR_0 >> 8) + VAR_0) & 0xff;

  return VAR_0;
}
