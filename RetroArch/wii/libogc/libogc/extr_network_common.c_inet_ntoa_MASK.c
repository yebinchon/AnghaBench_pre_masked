
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;
struct in_addr {int s_addr; } ;



char *FUNC_0(struct in_addr VAR_0)
{
  static char VAR_1[16];
  u32_t VAR_2 = VAR_0.s_addr;
  char VAR_3[3];
  char *VAR_4;
  u8_t *VAR_5;
  u8_t VAR_6;
  u8_t VAR_7;
  u8_t VAR_8;

  VAR_4 = VAR_1;
  VAR_5 = (u8_t *)&VAR_2;
  for(VAR_7 = 0; VAR_7 < 4; VAR_7++) {
    VAR_8 = 0;
    do {
      VAR_6 = *VAR_5 % (u8_t)10;
      *VAR_5 /= (u8_t)10;
      VAR_3[VAR_8++] = '0' + VAR_6;
    } while(*VAR_5);
    while(VAR_8--)
      *VAR_4++ = VAR_3[VAR_8];
    *VAR_4++ = '.';
    VAR_5++;
  }
  *--VAR_4 = 0;
  return VAR_1;
}
