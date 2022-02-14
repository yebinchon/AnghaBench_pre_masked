
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(size_t VAR_0, uint16_t VAR_1) {
  static const size_t VAR_2[16] = {
    0x00, 0x08, 0x04, 0x0C, 0x02, 0x0A, 0x06, 0x0E,
    0x01, 0x09, 0x05, 0x0D, 0x03, 0x0B, 0x07, 0x0F
  };
  size_t VAR_3 = VAR_2[VAR_1 & 0x0F];
  size_t VAR_4;
  for (VAR_4 = 4; VAR_4 < VAR_0; VAR_4 += 4) {
    VAR_3 <<= 4;
    VAR_1 = (uint16_t)(VAR_1 >> 4);
    VAR_3 |= VAR_2[VAR_1 & 0x0F];
  }
  VAR_3 >>= ((0 - VAR_0) & 0x03);
  return (uint16_t)VAR_3;
}
