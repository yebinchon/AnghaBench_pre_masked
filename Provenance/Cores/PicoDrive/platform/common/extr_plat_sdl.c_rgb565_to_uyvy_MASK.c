
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 unsigned char* VAR_3 ;
 unsigned char* VAR_4 ;

void FUNC_0(void *VAR_5, const void *VAR_6, int VAR_7)
{
  unsigned int *VAR_8 = VAR_5;
  const unsigned short *VAR_9 = VAR_6;
  const unsigned char *VAR_10 = VAR_3 + 32;
  const unsigned char *VAR_11 = VAR_4 + 32;
  int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
  int VAR_18, VAR_19, VAR_20, VAR_21;

  for (; VAR_7 > 0; VAR_9 += 2, VAR_8++, VAR_7 -= 2)
  {
    VAR_12 = (VAR_9[0] >> 11) & 0x1f;
    VAR_13 = (VAR_9[0] >> 6) & 0x1f;
    VAR_14 = VAR_9[0] & 0x1f;
    VAR_15 = (VAR_9[1] >> 11) & 0x1f;
    VAR_16 = (VAR_9[1] >> 6) & 0x1f;
    VAR_17 = VAR_9[1] & 0x1f;
    VAR_18 = (VAR_2[VAR_12] + VAR_1[VAR_13] + VAR_0[VAR_14]) >> 16;
    VAR_19 = (VAR_2[VAR_15] + VAR_1[VAR_16] + VAR_0[VAR_17]) >> 16;
    VAR_20 = VAR_10[VAR_14 - VAR_18];
    VAR_21 = VAR_11[VAR_12 - VAR_18];

    VAR_18 = 16 + 219 * VAR_18 / 31;
    VAR_19 = 16 + 219 * VAR_19 / 31;

    *VAR_8 = (VAR_19 << 24) | (VAR_21 << 16) | (VAR_18 << 8) | VAR_20;
  }
}
