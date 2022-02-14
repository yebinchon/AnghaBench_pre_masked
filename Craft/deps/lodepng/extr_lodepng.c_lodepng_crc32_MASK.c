
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;

unsigned FUNC_0(const unsigned char* VAR_1, size_t VAR_2)
{
  unsigned VAR_3 = 0xffffffffL;
  size_t VAR_4;

  for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
    VAR_3 = VAR_0[(VAR_3 ^ VAR_1[VAR_4]) & 0xff] ^ (VAR_3 >> 8);
  }
  return VAR_3 ^ 0xffffffffL;
}
