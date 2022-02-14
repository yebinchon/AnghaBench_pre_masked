
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static uint8_t FUNC_0( uint8_t *VAR_0 ) {
    uint8_t VAR_1;

    VAR_1 = 0x01 | (VAR_0[0] << 2);
    VAR_1 ^= (VAR_0[0] >> 6) | 0x04 | (VAR_0[1] << 4);
    VAR_1 ^= (VAR_0[1] >> 4) | 0x10 | (VAR_0[2] << 6);
    VAR_1 ^= (VAR_0[2] >> 2) | 0x40;
    VAR_1 ^= VAR_0[3];
    VAR_1 ^= 0x01 | (VAR_0[4] << 2);
    VAR_1 ^= (VAR_0[4] >> 6) | 0x04 | (VAR_0[5] << 4);
    VAR_1 ^= (VAR_0[5] >> 4) | 0x10 | (VAR_0[6] << 6);
    VAR_1 ^= (VAR_0[6] >> 2) | 0x40;
    VAR_1 ^= VAR_0[7];
    VAR_1 ^= 0x01;
    VAR_1 = (VAR_1 >> 2) | (VAR_1 << 6);
    return VAR_1;
}
