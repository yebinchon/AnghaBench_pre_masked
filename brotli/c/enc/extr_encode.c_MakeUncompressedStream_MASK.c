
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint32_t ;


 int FUNC_0 (int*,int const*,unsigned int) ;

__attribute__((used)) static size_t FUNC_1(
    const uint8_t* VAR_0, size_t VAR_1, uint8_t* VAR_2) {
  size_t VAR_3 = VAR_1;
  size_t VAR_4 = 0;
  size_t VAR_5 = 0;
  if (VAR_1 == 0) {
    VAR_2[0] = 6;
    return 1;
  }
  VAR_2[VAR_4++] = 0x21;
  VAR_2[VAR_4++] = 0x03;
  while (VAR_3 > 0) {
    uint32_t VAR_6 = 0;
    uint32_t VAR_7;
    uint32_t VAR_8;
    VAR_7 = (VAR_3 > (1u << 24)) ? (1u << 24) : (uint32_t)VAR_3;
    if (VAR_7 > (1u << 16)) VAR_6 = (VAR_7 > (1u << 20)) ? 2 : 1;
    VAR_8 =
        (VAR_6 << 1) | ((VAR_7 - 1) << 3) | (1u << (19 + 4 * VAR_6));
    VAR_2[VAR_4++] = (uint8_t)VAR_8;
    VAR_2[VAR_4++] = (uint8_t)(VAR_8 >> 8);
    VAR_2[VAR_4++] = (uint8_t)(VAR_8 >> 16);
    if (VAR_6 == 2) VAR_2[VAR_4++] = (uint8_t)(VAR_8 >> 24);
    FUNC_0(&VAR_2[VAR_4], &VAR_0[VAR_5], VAR_7);
    VAR_4 += VAR_7;
    VAR_5 += VAR_7;
    VAR_3 -= VAR_7;
  }
  VAR_2[VAR_4++] = 3;
  return VAR_4;
}
