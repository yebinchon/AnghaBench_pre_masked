
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static const char *FUNC_0 (const char *VAR_1, int *VAR_2) {
  static const unsigned int VAR_3[] = {0xFF, 0x7F, 0x7FF, 0xFFFF};
  const unsigned char *VAR_4 = (const unsigned char *)VAR_1;
  unsigned int VAR_5 = VAR_4[0];
  unsigned int VAR_6 = 0;
  if (VAR_5 < 0x80)
    VAR_6 = VAR_5;
  else {
    int VAR_7 = 0;
    while (VAR_5 & 0x40) {
      int VAR_8 = VAR_4[++VAR_7];
      if ((VAR_8 & 0xC0) != 0x80)
        return ((void*)0);
      VAR_6 = (VAR_6 << 6) | (VAR_8 & 0x3F);
      VAR_5 <<= 1;
    }
    VAR_6 |= ((VAR_5 & 0x7F) << (VAR_7 * 5));
    if (VAR_7 > 3 || VAR_6 > VAR_0 || VAR_6 <= VAR_3[VAR_7])
      return ((void*)0);
    VAR_4 += VAR_7;
  }
  if (VAR_2) *VAR_2 = VAR_6;
  return (const char *)VAR_4 + 1;
}
