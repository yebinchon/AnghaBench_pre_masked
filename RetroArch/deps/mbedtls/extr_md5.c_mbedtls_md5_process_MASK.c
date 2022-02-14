
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__* state; } ;
typedef TYPE_1__ mbedtls_md5_context ;


 int FUNC_0 (scalar_t__,unsigned char const*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int) ;

void FUNC_2( mbedtls_md5_context *VAR_0, const unsigned char VAR_1[64] )
{
    uint32_t VAR_2[16], VAR_3, VAR_4, VAR_5, VAR_6;

    FUNC_0( VAR_2[ 0], VAR_1, 0 );
    FUNC_0( VAR_2[ 1], VAR_1, 4 );
    FUNC_0( VAR_2[ 2], VAR_1, 8 );
    FUNC_0( VAR_2[ 3], VAR_1, 12 );
    FUNC_0( VAR_2[ 4], VAR_1, 16 );
    FUNC_0( VAR_2[ 5], VAR_1, 20 );
    FUNC_0( VAR_2[ 6], VAR_1, 24 );
    FUNC_0( VAR_2[ 7], VAR_1, 28 );
    FUNC_0( VAR_2[ 8], VAR_1, 32 );
    FUNC_0( VAR_2[ 9], VAR_1, 36 );
    FUNC_0( VAR_2[10], VAR_1, 40 );
    FUNC_0( VAR_2[11], VAR_1, 44 );
    FUNC_0( VAR_2[12], VAR_1, 48 );
    FUNC_0( VAR_2[13], VAR_1, 52 );
    FUNC_0( VAR_2[14], VAR_1, 56 );
    FUNC_0( VAR_2[15], VAR_1, 60 );
    VAR_3 = VAR_0->state[0];
    VAR_4 = VAR_0->state[1];
    VAR_5 = VAR_0->state[2];
    VAR_6 = VAR_0->state[3];



    { VAR_3 += (VAR_6 ^ (VAR_4 & (VAR_5 ^ VAR_6))) + VAR_2[0] + 0xD76AA478; VAR_3 = ((VAR_3 << 7) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 7))) + VAR_4; };
    { VAR_6 += (VAR_5 ^ (VAR_3 & (VAR_4 ^ VAR_5))) + VAR_2[1] + 0xE8C7B756; VAR_6 = ((VAR_6 << 12) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 12))) + VAR_3; };
    { VAR_5 += (VAR_4 ^ (VAR_6 & (VAR_3 ^ VAR_4))) + VAR_2[2] + 0x242070DB; VAR_5 = ((VAR_5 << 17) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 17))) + VAR_6; };
    { VAR_4 += (VAR_3 ^ (VAR_5 & (VAR_6 ^ VAR_3))) + VAR_2[3] + 0xC1BDCEEE; VAR_4 = ((VAR_4 << 22) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 22))) + VAR_5; };
    { VAR_3 += (VAR_6 ^ (VAR_4 & (VAR_5 ^ VAR_6))) + VAR_2[4] + 0xF57C0FAF; VAR_3 = ((VAR_3 << 7) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 7))) + VAR_4; };
    { VAR_6 += (VAR_5 ^ (VAR_3 & (VAR_4 ^ VAR_5))) + VAR_2[5] + 0x4787C62A; VAR_6 = ((VAR_6 << 12) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 12))) + VAR_3; };
    { VAR_5 += (VAR_4 ^ (VAR_6 & (VAR_3 ^ VAR_4))) + VAR_2[6] + 0xA8304613; VAR_5 = ((VAR_5 << 17) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 17))) + VAR_6; };
    { VAR_4 += (VAR_3 ^ (VAR_5 & (VAR_6 ^ VAR_3))) + VAR_2[7] + 0xFD469501; VAR_4 = ((VAR_4 << 22) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 22))) + VAR_5; };
    { VAR_3 += (VAR_6 ^ (VAR_4 & (VAR_5 ^ VAR_6))) + VAR_2[8] + 0x698098D8; VAR_3 = ((VAR_3 << 7) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 7))) + VAR_4; };
    { VAR_6 += (VAR_5 ^ (VAR_3 & (VAR_4 ^ VAR_5))) + VAR_2[9] + 0x8B44F7AF; VAR_6 = ((VAR_6 << 12) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 12))) + VAR_3; };
    { VAR_5 += (VAR_4 ^ (VAR_6 & (VAR_3 ^ VAR_4))) + VAR_2[10] + 0xFFFF5BB1; VAR_5 = ((VAR_5 << 17) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 17))) + VAR_6; };
    { VAR_4 += (VAR_3 ^ (VAR_5 & (VAR_6 ^ VAR_3))) + VAR_2[11] + 0x895CD7BE; VAR_4 = ((VAR_4 << 22) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 22))) + VAR_5; };
    { VAR_3 += (VAR_6 ^ (VAR_4 & (VAR_5 ^ VAR_6))) + VAR_2[12] + 0x6B901122; VAR_3 = ((VAR_3 << 7) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 7))) + VAR_4; };
    { VAR_6 += (VAR_5 ^ (VAR_3 & (VAR_4 ^ VAR_5))) + VAR_2[13] + 0xFD987193; VAR_6 = ((VAR_6 << 12) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 12))) + VAR_3; };
    { VAR_5 += (VAR_4 ^ (VAR_6 & (VAR_3 ^ VAR_4))) + VAR_2[14] + 0xA679438E; VAR_5 = ((VAR_5 << 17) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 17))) + VAR_6; };
    { VAR_4 += (VAR_3 ^ (VAR_5 & (VAR_6 ^ VAR_3))) + VAR_2[15] + 0x49B40821; VAR_4 = ((VAR_4 << 22) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 22))) + VAR_5; };





    { VAR_3 += (VAR_5 ^ (VAR_6 & (VAR_4 ^ VAR_5))) + VAR_2[1] + 0xF61E2562; VAR_3 = ((VAR_3 << 5) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 5))) + VAR_4; };
    { VAR_6 += (VAR_4 ^ (VAR_5 & (VAR_3 ^ VAR_4))) + VAR_2[6] + 0xC040B340; VAR_6 = ((VAR_6 << 9) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 9))) + VAR_3; };
    { VAR_5 += (VAR_3 ^ (VAR_4 & (VAR_6 ^ VAR_3))) + VAR_2[11] + 0x265E5A51; VAR_5 = ((VAR_5 << 14) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 14))) + VAR_6; };
    { VAR_4 += (VAR_6 ^ (VAR_3 & (VAR_5 ^ VAR_6))) + VAR_2[0] + 0xE9B6C7AA; VAR_4 = ((VAR_4 << 20) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 20))) + VAR_5; };
    { VAR_3 += (VAR_5 ^ (VAR_6 & (VAR_4 ^ VAR_5))) + VAR_2[5] + 0xD62F105D; VAR_3 = ((VAR_3 << 5) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 5))) + VAR_4; };
    { VAR_6 += (VAR_4 ^ (VAR_5 & (VAR_3 ^ VAR_4))) + VAR_2[10] + 0x02441453; VAR_6 = ((VAR_6 << 9) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 9))) + VAR_3; };
    { VAR_5 += (VAR_3 ^ (VAR_4 & (VAR_6 ^ VAR_3))) + VAR_2[15] + 0xD8A1E681; VAR_5 = ((VAR_5 << 14) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 14))) + VAR_6; };
    { VAR_4 += (VAR_6 ^ (VAR_3 & (VAR_5 ^ VAR_6))) + VAR_2[4] + 0xE7D3FBC8; VAR_4 = ((VAR_4 << 20) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 20))) + VAR_5; };
    { VAR_3 += (VAR_5 ^ (VAR_6 & (VAR_4 ^ VAR_5))) + VAR_2[9] + 0x21E1CDE6; VAR_3 = ((VAR_3 << 5) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 5))) + VAR_4; };
    { VAR_6 += (VAR_4 ^ (VAR_5 & (VAR_3 ^ VAR_4))) + VAR_2[14] + 0xC33707D6; VAR_6 = ((VAR_6 << 9) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 9))) + VAR_3; };
    { VAR_5 += (VAR_3 ^ (VAR_4 & (VAR_6 ^ VAR_3))) + VAR_2[3] + 0xF4D50D87; VAR_5 = ((VAR_5 << 14) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 14))) + VAR_6; };
    { VAR_4 += (VAR_6 ^ (VAR_3 & (VAR_5 ^ VAR_6))) + VAR_2[8] + 0x455A14ED; VAR_4 = ((VAR_4 << 20) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 20))) + VAR_5; };
    { VAR_3 += (VAR_5 ^ (VAR_6 & (VAR_4 ^ VAR_5))) + VAR_2[13] + 0xA9E3E905; VAR_3 = ((VAR_3 << 5) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 5))) + VAR_4; };
    { VAR_6 += (VAR_4 ^ (VAR_5 & (VAR_3 ^ VAR_4))) + VAR_2[2] + 0xFCEFA3F8; VAR_6 = ((VAR_6 << 9) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 9))) + VAR_3; };
    { VAR_5 += (VAR_3 ^ (VAR_4 & (VAR_6 ^ VAR_3))) + VAR_2[7] + 0x676F02D9; VAR_5 = ((VAR_5 << 14) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 14))) + VAR_6; };
    { VAR_4 += (VAR_6 ^ (VAR_3 & (VAR_5 ^ VAR_6))) + VAR_2[12] + 0x8D2A4C8A; VAR_4 = ((VAR_4 << 20) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 20))) + VAR_5; };





    { VAR_3 += (VAR_4 ^ VAR_5 ^ VAR_6) + VAR_2[5] + 0xFFFA3942; VAR_3 = ((VAR_3 << 4) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 4))) + VAR_4; };
    { VAR_6 += (VAR_3 ^ VAR_4 ^ VAR_5) + VAR_2[8] + 0x8771F681; VAR_6 = ((VAR_6 << 11) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 11))) + VAR_3; };
    { VAR_5 += (VAR_6 ^ VAR_3 ^ VAR_4) + VAR_2[11] + 0x6D9D6122; VAR_5 = ((VAR_5 << 16) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 16))) + VAR_6; };
    { VAR_4 += (VAR_5 ^ VAR_6 ^ VAR_3) + VAR_2[14] + 0xFDE5380C; VAR_4 = ((VAR_4 << 23) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 23))) + VAR_5; };
    { VAR_3 += (VAR_4 ^ VAR_5 ^ VAR_6) + VAR_2[1] + 0xA4BEEA44; VAR_3 = ((VAR_3 << 4) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 4))) + VAR_4; };
    { VAR_6 += (VAR_3 ^ VAR_4 ^ VAR_5) + VAR_2[4] + 0x4BDECFA9; VAR_6 = ((VAR_6 << 11) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 11))) + VAR_3; };
    { VAR_5 += (VAR_6 ^ VAR_3 ^ VAR_4) + VAR_2[7] + 0xF6BB4B60; VAR_5 = ((VAR_5 << 16) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 16))) + VAR_6; };
    { VAR_4 += (VAR_5 ^ VAR_6 ^ VAR_3) + VAR_2[10] + 0xBEBFBC70; VAR_4 = ((VAR_4 << 23) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 23))) + VAR_5; };
    { VAR_3 += (VAR_4 ^ VAR_5 ^ VAR_6) + VAR_2[13] + 0x289B7EC6; VAR_3 = ((VAR_3 << 4) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 4))) + VAR_4; };
    { VAR_6 += (VAR_3 ^ VAR_4 ^ VAR_5) + VAR_2[0] + 0xEAA127FA; VAR_6 = ((VAR_6 << 11) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 11))) + VAR_3; };
    { VAR_5 += (VAR_6 ^ VAR_3 ^ VAR_4) + VAR_2[3] + 0xD4EF3085; VAR_5 = ((VAR_5 << 16) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 16))) + VAR_6; };
    { VAR_4 += (VAR_5 ^ VAR_6 ^ VAR_3) + VAR_2[6] + 0x04881D05; VAR_4 = ((VAR_4 << 23) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 23))) + VAR_5; };
    { VAR_3 += (VAR_4 ^ VAR_5 ^ VAR_6) + VAR_2[9] + 0xD9D4D039; VAR_3 = ((VAR_3 << 4) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 4))) + VAR_4; };
    { VAR_6 += (VAR_3 ^ VAR_4 ^ VAR_5) + VAR_2[12] + 0xE6DB99E5; VAR_6 = ((VAR_6 << 11) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 11))) + VAR_3; };
    { VAR_5 += (VAR_6 ^ VAR_3 ^ VAR_4) + VAR_2[15] + 0x1FA27CF8; VAR_5 = ((VAR_5 << 16) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 16))) + VAR_6; };
    { VAR_4 += (VAR_5 ^ VAR_6 ^ VAR_3) + VAR_2[2] + 0xC4AC5665; VAR_4 = ((VAR_4 << 23) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 23))) + VAR_5; };





    { VAR_3 += (VAR_5 ^ (VAR_4 | ~VAR_6)) + VAR_2[0] + 0xF4292244; VAR_3 = ((VAR_3 << 6) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 6))) + VAR_4; };
    { VAR_6 += (VAR_4 ^ (VAR_3 | ~VAR_5)) + VAR_2[7] + 0x432AFF97; VAR_6 = ((VAR_6 << 10) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 10))) + VAR_3; };
    { VAR_5 += (VAR_3 ^ (VAR_6 | ~VAR_4)) + VAR_2[14] + 0xAB9423A7; VAR_5 = ((VAR_5 << 15) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 15))) + VAR_6; };
    { VAR_4 += (VAR_6 ^ (VAR_5 | ~VAR_3)) + VAR_2[5] + 0xFC93A039; VAR_4 = ((VAR_4 << 21) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 21))) + VAR_5; };
    { VAR_3 += (VAR_5 ^ (VAR_4 | ~VAR_6)) + VAR_2[12] + 0x655B59C3; VAR_3 = ((VAR_3 << 6) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 6))) + VAR_4; };
    { VAR_6 += (VAR_4 ^ (VAR_3 | ~VAR_5)) + VAR_2[3] + 0x8F0CCC92; VAR_6 = ((VAR_6 << 10) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 10))) + VAR_3; };
    { VAR_5 += (VAR_3 ^ (VAR_6 | ~VAR_4)) + VAR_2[10] + 0xFFEFF47D; VAR_5 = ((VAR_5 << 15) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 15))) + VAR_6; };
    { VAR_4 += (VAR_6 ^ (VAR_5 | ~VAR_3)) + VAR_2[1] + 0x85845DD1; VAR_4 = ((VAR_4 << 21) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 21))) + VAR_5; };
    { VAR_3 += (VAR_5 ^ (VAR_4 | ~VAR_6)) + VAR_2[8] + 0x6FA87E4F; VAR_3 = ((VAR_3 << 6) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 6))) + VAR_4; };
    { VAR_6 += (VAR_4 ^ (VAR_3 | ~VAR_5)) + VAR_2[15] + 0xFE2CE6E0; VAR_6 = ((VAR_6 << 10) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 10))) + VAR_3; };
    { VAR_5 += (VAR_3 ^ (VAR_6 | ~VAR_4)) + VAR_2[6] + 0xA3014314; VAR_5 = ((VAR_5 << 15) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 15))) + VAR_6; };
    { VAR_4 += (VAR_6 ^ (VAR_5 | ~VAR_3)) + VAR_2[13] + 0x4E0811A1; VAR_4 = ((VAR_4 << 21) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 21))) + VAR_5; };
    { VAR_3 += (VAR_5 ^ (VAR_4 | ~VAR_6)) + VAR_2[4] + 0xF7537E82; VAR_3 = ((VAR_3 << 6) | ((VAR_3 & 0xFFFFFFFF) >> (32 - 6))) + VAR_4; };
    { VAR_6 += (VAR_4 ^ (VAR_3 | ~VAR_5)) + VAR_2[11] + 0xBD3AF235; VAR_6 = ((VAR_6 << 10) | ((VAR_6 & 0xFFFFFFFF) >> (32 - 10))) + VAR_3; };
    { VAR_5 += (VAR_3 ^ (VAR_6 | ~VAR_4)) + VAR_2[2] + 0x2AD7D2BB; VAR_5 = ((VAR_5 << 15) | ((VAR_5 & 0xFFFFFFFF) >> (32 - 15))) + VAR_6; };
    { VAR_4 += (VAR_6 ^ (VAR_5 | ~VAR_3)) + VAR_2[9] + 0xEB86D391; VAR_4 = ((VAR_4 << 21) | ((VAR_4 & 0xFFFFFFFF) >> (32 - 21))) + VAR_5; };



    VAR_0->state[0] += VAR_3;
    VAR_0->state[1] += VAR_4;
    VAR_0->state[2] += VAR_5;
    VAR_0->state[3] += VAR_6;
}
