
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

unsigned long FUNC_0(int *VAR_1, int *VAR_2,
          unsigned int VAR_3,
          unsigned int VAR_4,
          unsigned int VAR_5)
{
 if (VAR_3 != VAR_0) {
  unsigned int VAR_6, VAR_7;

  VAR_6 = *VAR_2 / 8;
  *VAR_2 %= 8;

  VAR_7 = *VAR_1 / (512/VAR_4);
  *VAR_1 %= 512/VAR_4;

  return VAR_6 * VAR_5 * 8 + VAR_7 * 4096;
 } else {
  unsigned int VAR_8;

  VAR_8 = *VAR_2 * VAR_5 + *VAR_1 * VAR_4;
  *VAR_2 = 0;
  *VAR_1 = (VAR_8 & 4095) / VAR_4;
  return VAR_8 & -4096;
 }
}
