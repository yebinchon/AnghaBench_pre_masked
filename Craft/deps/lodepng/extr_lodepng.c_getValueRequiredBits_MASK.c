
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned FUNC_0(unsigned short VAR_0)
{
  if(VAR_0 == 0 || VAR_0 == 255) return 1;

  if(VAR_0 % 17 == 0) return VAR_0 % 85 == 0 ? 2 : 4;
  return 8;
}
