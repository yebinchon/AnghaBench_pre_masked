
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;

char *FUNC_1(const unsigned char *VAR_1, int VAR_2) {
  unsigned char VAR_3 = 0;
  char * VAR_4 = (char *)FUNC_0((size_t)(VAR_2 * 4) / 3 + 10);
  char * VAR_5 = VAR_4;
  while (VAR_2 >= 3) {
    *VAR_5++ = VAR_0[VAR_1[0] >> 2];
    *VAR_5++ = VAR_0[((VAR_1[0] << 4) & 0x30) | (VAR_1[1] >> 4)];
    *VAR_5++ = VAR_0[((VAR_1[1] << 2) & 0x3C) | (VAR_1[2] >> 6)];
    *VAR_5++ = VAR_0[VAR_1[2] & 0x3F];
    VAR_1 += 3;
    VAR_2 -= 3;
  }
  if (VAR_2 > 0) {
    *VAR_5++ = VAR_0[VAR_1[0] >> 2];
    VAR_3 = (VAR_1[0] << 4) & 0x30;
    if (VAR_2 > 1) VAR_3 |= VAR_1[1] >> 4;
    *VAR_5++ = VAR_0[VAR_3];
    *VAR_5++ = (VAR_2 < 2) ? '=' : VAR_0[(VAR_1[1] << 2) & 0x3C];
    *VAR_5++ = '=';
  }
  *VAR_5 = '\0';
  return VAR_4;
}
