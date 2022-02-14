
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned char FUNC_0(size_t* VAR_0, const unsigned char* VAR_1)
{
  unsigned char VAR_2 = (unsigned char)((VAR_1[(*VAR_0) >> 3] >> (7 - ((*VAR_0) & 0x7))) & 1);
  (*VAR_0)++;
  return VAR_2;
}
