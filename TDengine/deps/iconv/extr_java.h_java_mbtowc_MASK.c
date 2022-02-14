
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucs4_t ;
typedef int conv_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (conv_t VAR_0, ucs4_t *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
  unsigned char VAR_4;
  ucs4_t VAR_5, VAR_6;
  int VAR_7;

  VAR_4 = VAR_2[0];
  if (VAR_4 != '\\') {
    *VAR_1 = VAR_4;
    return 1;
  }
  if (VAR_3 < 2)
    return FUNC_0(0);
  if (VAR_2[1] != 'u')
    goto simply_backslash;
  VAR_5 = 0;
  for (VAR_7 = 2; VAR_7 < 6; VAR_7++) {
    if (VAR_3 <= VAR_7)
      return FUNC_0(0);
    VAR_4 = VAR_2[VAR_7];
    if (VAR_4 >= '0' && VAR_4 <= '9')
      VAR_4 -= '0';
    else if (VAR_4 >= 'A' && VAR_4 <= 'Z')
      VAR_4 -= 'A'-10;
    else if (VAR_4 >= 'a' && VAR_4 <= 'z')
      VAR_4 -= 'a'-10;
    else
      goto simply_backslash;
    VAR_5 |= (ucs4_t) VAR_4 << (4 * (5-VAR_7));
  }
  if (!(VAR_5 >= 0xd800 && VAR_5 < 0xe000)) {
    *VAR_1 = VAR_5;
    return 6;
  }
  if (VAR_5 >= 0xdc00)
    goto simply_backslash;
  if (VAR_3 < 7)
    return FUNC_0(0);
  if (VAR_2[6] != '\\')
    goto simply_backslash;
  if (VAR_3 < 8)
    return FUNC_0(0);
  if (VAR_2[7] != 'u')
    goto simply_backslash;
  VAR_6 = 0;
  for (VAR_7 = 8; VAR_7 < 12; VAR_7++) {
    if (VAR_3 <= VAR_7)
      return FUNC_0(0);
    VAR_4 = VAR_2[VAR_7];
    if (VAR_4 >= '0' && VAR_4 <= '9')
      VAR_4 -= '0';
    else if (VAR_4 >= 'A' && VAR_4 <= 'Z')
      VAR_4 -= 'A'-10;
    else if (VAR_4 >= 'a' && VAR_4 <= 'z')
      VAR_4 -= 'a'-10;
    else
      goto simply_backslash;
    VAR_6 |= (ucs4_t) VAR_4 << (4 * (11-VAR_7));
  }
  if (!(VAR_6 >= 0xdc00 && VAR_6 < 0xe000))
    goto simply_backslash;
  *VAR_1 = 0x10000 + ((VAR_5 - 0xd800) << 10) + (VAR_6 - 0xdc00);
  return 12;
simply_backslash:
  *VAR_1 = '\\';
  return 1;
}
