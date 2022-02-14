
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static size_t FUNC_0(
    int* VAR_0, const uint8_t* VAR_1, size_t VAR_2) {

  if ((VAR_1[0] & 0x80) == 0) {
    *VAR_0 = VAR_1[0];
    if (*VAR_0 > 0) {
      return 1;
    }
  }

  if (VAR_2 > 1u &&
      (VAR_1[0] & 0xE0) == 0xC0 &&
      (VAR_1[1] & 0xC0) == 0x80) {
    *VAR_0 = (((VAR_1[0] & 0x1F) << 6) |
               (VAR_1[1] & 0x3F));
    if (*VAR_0 > 0x7F) {
      return 2;
    }
  }

  if (VAR_2 > 2u &&
      (VAR_1[0] & 0xF0) == 0xE0 &&
      (VAR_1[1] & 0xC0) == 0x80 &&
      (VAR_1[2] & 0xC0) == 0x80) {
    *VAR_0 = (((VAR_1[0] & 0x0F) << 12) |
               ((VAR_1[1] & 0x3F) << 6) |
               (VAR_1[2] & 0x3F));
    if (*VAR_0 > 0x7FF) {
      return 3;
    }
  }

  if (VAR_2 > 3u &&
      (VAR_1[0] & 0xF8) == 0xF0 &&
      (VAR_1[1] & 0xC0) == 0x80 &&
      (VAR_1[2] & 0xC0) == 0x80 &&
      (VAR_1[3] & 0xC0) == 0x80) {
    *VAR_0 = (((VAR_1[0] & 0x07) << 18) |
               ((VAR_1[1] & 0x3F) << 12) |
               ((VAR_1[2] & 0x3F) << 6) |
               (VAR_1[3] & 0x3F));
    if (*VAR_0 > 0xFFFF && *VAR_0 <= 0x10FFFF) {
      return 4;
    }
  }

  *VAR_0 = 0x110000 | VAR_1[0];
  return 1;
}
