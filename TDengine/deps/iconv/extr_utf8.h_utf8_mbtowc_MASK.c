
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
  unsigned char VAR_5 = VAR_3[0];

  if (VAR_5 < 0x80) {
    *VAR_2 = VAR_5;
    return 1;
  } else if (VAR_5 < 0xc2) {
    return VAR_0;
  } else if (VAR_5 < 0xe0) {
    if (VAR_4 < 2)
      return FUNC_0(0);
    if (!((VAR_3[1] ^ 0x80) < 0x40))
      return VAR_0;
    *VAR_2 = ((ucs4_t) (VAR_5 & 0x1f) << 6)
           | (ucs4_t) (VAR_3[1] ^ 0x80);
    return 2;
  } else if (VAR_5 < 0xf0) {
    if (VAR_4 < 3)
      return FUNC_0(0);
    if (!((VAR_3[1] ^ 0x80) < 0x40 && (VAR_3[2] ^ 0x80) < 0x40
          && (VAR_5 >= 0xe1 || VAR_3[1] >= 0xa0)))
      return VAR_0;
    *VAR_2 = ((ucs4_t) (VAR_5 & 0x0f) << 12)
           | ((ucs4_t) (VAR_3[1] ^ 0x80) << 6)
           | (ucs4_t) (VAR_3[2] ^ 0x80);
    return 3;
  } else if (VAR_5 < 0xf8 && sizeof(ucs4_t)*8 >= 32) {
    if (VAR_4 < 4)
      return FUNC_0(0);
    if (!((VAR_3[1] ^ 0x80) < 0x40 && (VAR_3[2] ^ 0x80) < 0x40
          && (VAR_3[3] ^ 0x80) < 0x40
          && (VAR_5 >= 0xf1 || VAR_3[1] >= 0x90)))
      return VAR_0;
    *VAR_2 = ((ucs4_t) (VAR_5 & 0x07) << 18)
           | ((ucs4_t) (VAR_3[1] ^ 0x80) << 12)
           | ((ucs4_t) (VAR_3[2] ^ 0x80) << 6)
           | (ucs4_t) (VAR_3[3] ^ 0x80);
    return 4;
  } else if (VAR_5 < 0xfc && sizeof(ucs4_t)*8 >= 32) {
    if (VAR_4 < 5)
      return FUNC_0(0);
    if (!((VAR_3[1] ^ 0x80) < 0x40 && (VAR_3[2] ^ 0x80) < 0x40
          && (VAR_3[3] ^ 0x80) < 0x40 && (VAR_3[4] ^ 0x80) < 0x40
          && (VAR_5 >= 0xf9 || VAR_3[1] >= 0x88)))
      return VAR_0;
    *VAR_2 = ((ucs4_t) (VAR_5 & 0x03) << 24)
           | ((ucs4_t) (VAR_3[1] ^ 0x80) << 18)
           | ((ucs4_t) (VAR_3[2] ^ 0x80) << 12)
           | ((ucs4_t) (VAR_3[3] ^ 0x80) << 6)
           | (ucs4_t) (VAR_3[4] ^ 0x80);
    return 5;
  } else if (VAR_5 < 0xfe && sizeof(ucs4_t)*8 >= 32) {
    if (VAR_4 < 6)
      return FUNC_0(0);
    if (!((VAR_3[1] ^ 0x80) < 0x40 && (VAR_3[2] ^ 0x80) < 0x40
          && (VAR_3[3] ^ 0x80) < 0x40 && (VAR_3[4] ^ 0x80) < 0x40
          && (VAR_3[5] ^ 0x80) < 0x40
          && (VAR_5 >= 0xfd || VAR_3[1] >= 0x84)))
      return VAR_0;
    *VAR_2 = ((ucs4_t) (VAR_5 & 0x01) << 30)
           | ((ucs4_t) (VAR_3[1] ^ 0x80) << 24)
           | ((ucs4_t) (VAR_3[2] ^ 0x80) << 18)
           | ((ucs4_t) (VAR_3[3] ^ 0x80) << 12)
           | ((ucs4_t) (VAR_3[4] ^ 0x80) << 6)
           | (ucs4_t) (VAR_3[5] ^ 0x80);
    return 6;
  } else
    return VAR_0;
}
