
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ BROTLI_BOOL ;



__attribute__((used)) static void FUNC_0(int VAR_0, BROTLI_BOOL VAR_1,
    uint16_t* VAR_2, uint8_t* VAR_3) {
  if (VAR_1) {
    *VAR_2 = (uint16_t)(((VAR_0 & 0x3F) << 8) | 0x11);
    *VAR_3 = 14;
  } else {
    if (VAR_0 == 16) {
      *VAR_2 = 0;
      *VAR_3 = 1;
    } else if (VAR_0 == 17) {
      *VAR_2 = 1;
      *VAR_3 = 7;
    } else if (VAR_0 > 17) {
      *VAR_2 = (uint16_t)(((VAR_0 - 17) << 1) | 0x01);
      *VAR_3 = 4;
    } else {
      *VAR_2 = (uint16_t)(((VAR_0 - 8) << 4) | 0x01);
      *VAR_3 = 7;
    }
  }
}
