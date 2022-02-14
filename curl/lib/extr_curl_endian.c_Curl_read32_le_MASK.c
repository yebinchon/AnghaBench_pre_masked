
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(const unsigned char *VAR_0)
{
  return ((unsigned int)VAR_0[0]) | ((unsigned int)VAR_0[1] << 8) |
         ((unsigned int)VAR_0[2] << 16) | ((unsigned int)VAR_0[3] << 24);
}
