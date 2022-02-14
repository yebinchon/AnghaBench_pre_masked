
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;



__attribute__((used)) static int FUNC_0(uint8_t* VAR_0, int VAR_1, uint16_t VAR_2) {

  uint32_t VAR_3 =
      (VAR_2 & 0x7FFFu) + (0x1000000u - (VAR_2 & 0x8000u));
  if (VAR_0[0] < 0x80) {

    VAR_3 += (uint32_t)VAR_0[0];
    VAR_0[0] = (uint8_t)(VAR_3 & 0x7Fu);
    return 1;
  } else if (VAR_0[0] < 0xC0) {

    return 1;
  } else if (VAR_0[0] < 0xE0) {

    if (VAR_1 < 2) return 1;
    VAR_3 += (uint32_t)((VAR_0[1] & 0x3Fu) | ((VAR_0[0] & 0x1Fu) << 6u));
    VAR_0[0] = (uint8_t)(0xC0 | ((VAR_3 >> 6u) & 0x1F));
    VAR_0[1] = (uint8_t)((VAR_0[1] & 0xC0) | (VAR_3 & 0x3F));
    return 2;
  } else if (VAR_0[0] < 0xF0) {

    if (VAR_1 < 3) return VAR_1;
    VAR_3 += (uint32_t)((VAR_0[2] & 0x3Fu) | ((VAR_0[1] & 0x3Fu) << 6u) |
        ((VAR_0[0] & 0x0Fu) << 12u));
    VAR_0[0] = (uint8_t)(0xE0 | ((VAR_3 >> 12u) & 0x0F));
    VAR_0[1] = (uint8_t)((VAR_0[1] & 0xC0) | ((VAR_3 >> 6u) & 0x3F));
    VAR_0[2] = (uint8_t)((VAR_0[2] & 0xC0) | (VAR_3 & 0x3F));
    return 3;
  } else if (VAR_0[0] < 0xF8) {

    if (VAR_1 < 4) return VAR_1;
    VAR_3 += (uint32_t)((VAR_0[3] & 0x3Fu) | ((VAR_0[2] & 0x3Fu) << 6u) |
        ((VAR_0[1] & 0x3Fu) << 12u) | ((VAR_0[0] & 0x07u) << 18u));
    VAR_0[0] = (uint8_t)(0xF0 | ((VAR_3 >> 18u) & 0x07));
    VAR_0[1] = (uint8_t)((VAR_0[1] & 0xC0) | ((VAR_3 >> 12u) & 0x3F));
    VAR_0[2] = (uint8_t)((VAR_0[2] & 0xC0) | ((VAR_3 >> 6u) & 0x3F));
    VAR_0[3] = (uint8_t)((VAR_0[3] & 0xC0) | (VAR_3 & 0x3F));
    return 4;
  }
  return 1;
}
