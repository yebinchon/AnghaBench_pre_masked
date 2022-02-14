
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_1, ucs4_t *VAR_2, const unsigned char *VAR_3, int VAR_4)
{
  unsigned char VAR_5;
  ucs4_t VAR_6;
  int VAR_7;

  VAR_5 = VAR_3[0];
  if (VAR_5 < 0xa0) {
    if (VAR_5 != '\\') {
      *VAR_2 = VAR_5;
      return 1;
    }
    if (VAR_4 < 2)
      return FUNC_0(0);
    VAR_5 = VAR_3[1];
    if (VAR_5 == 'u') {
      VAR_6 = 0;
      for (VAR_7 = 2; VAR_7 < 6; VAR_7++) {
        if (VAR_4 <= VAR_7)
          return FUNC_0(0);
        VAR_5 = VAR_3[VAR_7];
        if (VAR_5 >= '0' && VAR_5 <= '9')
          VAR_5 -= '0';
        else if (VAR_5 >= 'A' && VAR_5 <= 'Z')
          VAR_5 -= 'A'-10;
        else if (VAR_5 >= 'a' && VAR_5 <= 'z')
          VAR_5 -= 'a'-10;
        else
          goto simply_backslash;
        VAR_6 |= (ucs4_t) VAR_5 << (4 * (5-VAR_7));
      }
      if ((VAR_6 >= 0x00a0 && !(VAR_6 >= 0xd800 && VAR_6 < 0xe000))
          || VAR_6 == 0x0024 || VAR_6 == 0x0040 || VAR_6 == 0x0060) {
        *VAR_2 = VAR_6;
        return 6;
      }
    } else if (VAR_5 == 'U') {
      VAR_6 = 0;
      for (VAR_7 = 2; VAR_7 < 10; VAR_7++) {
        if (VAR_4 <= VAR_7)
          return FUNC_0(0);
        VAR_5 = VAR_3[VAR_7];
        if (VAR_5 >= '0' && VAR_5 <= '9')
          VAR_5 -= '0';
        else if (VAR_5 >= 'A' && VAR_5 <= 'Z')
          VAR_5 -= 'A'-10;
        else if (VAR_5 >= 'a' && VAR_5 <= 'z')
          VAR_5 -= 'a'-10;
        else
          goto simply_backslash;
        VAR_6 |= (ucs4_t) VAR_5 << (4 * (9-VAR_7));
      }
      if ((VAR_6 >= 0x00a0 && !(VAR_6 >= 0xd800 && VAR_6 < 0xe000))
          || VAR_6 == 0x0024 || VAR_6 == 0x0040 || VAR_6 == 0x0060) {
        *VAR_2 = VAR_6;
        return 10;
      }
    } else
      goto simply_backslash;
  }
  return VAR_0;
simply_backslash:
  *VAR_2 = '\\';
  return 1;
}
