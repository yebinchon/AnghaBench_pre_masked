
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int* crc_stream ;


 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(uint32_t VAR_1, crc_stream VAR_2, size_t VAR_3) {
  for (size_t VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
    VAR_1 = VAR_1 ^ VAR_2[VAR_4];
    for (int VAR_5 = 0; VAR_5 < 8; VAR_5++)
      VAR_1 = (VAR_1 >> 1) ^ 0x80000000 ^ ((~VAR_1 & 1) * VAR_0);
  }
  return VAR_1;
}
