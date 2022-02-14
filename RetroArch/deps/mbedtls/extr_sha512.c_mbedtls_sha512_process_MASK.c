
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__* state; } ;
typedef TYPE_1__ mbedtls_sha512_context ;


 int FUNC_0 (scalar_t__,unsigned char const*,int) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

void FUNC_4( mbedtls_sha512_context *VAR_1, const unsigned char VAR_2[128] )
{
    int VAR_3;
    uint64_t VAR_4, VAR_5, VAR_6[80];
    uint64_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    for( VAR_3 = 0; VAR_3 < 16; VAR_3++ )
    {
        FUNC_0( VAR_6[VAR_3], VAR_2, VAR_3 << 3 );
    }

    for( ; VAR_3 < 80; VAR_3++ )
    {
        VAR_6[VAR_3] = (((VAR_6[VAR_3 - 2] >> 19) | (VAR_6[VAR_3 - 2] << (64 - 19))) ^ ((VAR_6[VAR_3 - 2] >> 61) | (VAR_6[VAR_3 - 2] << (64 - 61))) ^ (VAR_6[VAR_3 - 2] >> 6)) + VAR_6[VAR_3 - 7] +
               (((VAR_6[VAR_3 - 15] >> 1) | (VAR_6[VAR_3 - 15] << (64 - 1))) ^ ((VAR_6[VAR_3 - 15] >> 8) | (VAR_6[VAR_3 - 15] << (64 - 8))) ^ (VAR_6[VAR_3 - 15] >> 7)) + VAR_6[VAR_3 - 16];
    }

    VAR_7 = VAR_1->state[0];
    VAR_8 = VAR_1->state[1];
    VAR_9 = VAR_1->state[2];
    VAR_10 = VAR_1->state[3];
    VAR_11 = VAR_1->state[4];
    VAR_12 = VAR_1->state[5];
    VAR_13 = VAR_1->state[6];
    VAR_14 = VAR_1->state[7];
    VAR_3 = 0;

    do
    {
        { VAR_4 = VAR_14 + (((VAR_11 >> 14) | (VAR_11 << (64 - 14))) ^ ((VAR_11 >> 18) | (VAR_11 << (64 - 18))) ^ ((VAR_11 >> 41) | (VAR_11 << (64 - 41)))) + (VAR_13 ^ (VAR_11 & (VAR_12 ^ VAR_13))) + VAR_0[VAR_3] + VAR_6[VAR_3]; VAR_5 = (((VAR_7 >> 28) | (VAR_7 << (64 - 28))) ^ ((VAR_7 >> 34) | (VAR_7 << (64 - 34))) ^ ((VAR_7 >> 39) | (VAR_7 << (64 - 39)))) + ((VAR_7 & VAR_8) | (VAR_9 & (VAR_7 | VAR_8))); VAR_10 += VAR_4; VAR_14 = VAR_4 + VAR_5; }; VAR_3++;
        { VAR_4 = VAR_13 + (((VAR_10 >> 14) | (VAR_10 << (64 - 14))) ^ ((VAR_10 >> 18) | (VAR_10 << (64 - 18))) ^ ((VAR_10 >> 41) | (VAR_10 << (64 - 41)))) + (VAR_12 ^ (VAR_10 & (VAR_11 ^ VAR_12))) + VAR_0[VAR_3] + VAR_6[VAR_3]; VAR_5 = (((VAR_14 >> 28) | (VAR_14 << (64 - 28))) ^ ((VAR_14 >> 34) | (VAR_14 << (64 - 34))) ^ ((VAR_14 >> 39) | (VAR_14 << (64 - 39)))) + ((VAR_14 & VAR_7) | (VAR_8 & (VAR_14 | VAR_7))); VAR_9 += VAR_4; VAR_13 = VAR_4 + VAR_5; }; VAR_3++;
        { VAR_4 = VAR_12 + (((VAR_9 >> 14) | (VAR_9 << (64 - 14))) ^ ((VAR_9 >> 18) | (VAR_9 << (64 - 18))) ^ ((VAR_9 >> 41) | (VAR_9 << (64 - 41)))) + (VAR_11 ^ (VAR_9 & (VAR_10 ^ VAR_11))) + VAR_0[VAR_3] + VAR_6[VAR_3]; VAR_5 = (((VAR_13 >> 28) | (VAR_13 << (64 - 28))) ^ ((VAR_13 >> 34) | (VAR_13 << (64 - 34))) ^ ((VAR_13 >> 39) | (VAR_13 << (64 - 39)))) + ((VAR_13 & VAR_14) | (VAR_7 & (VAR_13 | VAR_14))); VAR_8 += VAR_4; VAR_12 = VAR_4 + VAR_5; }; VAR_3++;
        { VAR_4 = VAR_11 + (((VAR_8 >> 14) | (VAR_8 << (64 - 14))) ^ ((VAR_8 >> 18) | (VAR_8 << (64 - 18))) ^ ((VAR_8 >> 41) | (VAR_8 << (64 - 41)))) + (VAR_10 ^ (VAR_8 & (VAR_9 ^ VAR_10))) + VAR_0[VAR_3] + VAR_6[VAR_3]; VAR_5 = (((VAR_12 >> 28) | (VAR_12 << (64 - 28))) ^ ((VAR_12 >> 34) | (VAR_12 << (64 - 34))) ^ ((VAR_12 >> 39) | (VAR_12 << (64 - 39)))) + ((VAR_12 & VAR_13) | (VAR_14 & (VAR_12 | VAR_13))); VAR_7 += VAR_4; VAR_11 = VAR_4 + VAR_5; }; VAR_3++;
        { VAR_4 = VAR_10 + (((VAR_7 >> 14) | (VAR_7 << (64 - 14))) ^ ((VAR_7 >> 18) | (VAR_7 << (64 - 18))) ^ ((VAR_7 >> 41) | (VAR_7 << (64 - 41)))) + (VAR_9 ^ (VAR_7 & (VAR_8 ^ VAR_9))) + VAR_0[VAR_3] + VAR_6[VAR_3]; VAR_5 = (((VAR_11 >> 28) | (VAR_11 << (64 - 28))) ^ ((VAR_11 >> 34) | (VAR_11 << (64 - 34))) ^ ((VAR_11 >> 39) | (VAR_11 << (64 - 39)))) + ((VAR_11 & VAR_12) | (VAR_13 & (VAR_11 | VAR_12))); VAR_14 += VAR_4; VAR_10 = VAR_4 + VAR_5; }; VAR_3++;
        { VAR_4 = VAR_9 + (((VAR_14 >> 14) | (VAR_14 << (64 - 14))) ^ ((VAR_14 >> 18) | (VAR_14 << (64 - 18))) ^ ((VAR_14 >> 41) | (VAR_14 << (64 - 41)))) + (VAR_8 ^ (VAR_14 & (VAR_7 ^ VAR_8))) + VAR_0[VAR_3] + VAR_6[VAR_3]; VAR_5 = (((VAR_10 >> 28) | (VAR_10 << (64 - 28))) ^ ((VAR_10 >> 34) | (VAR_10 << (64 - 34))) ^ ((VAR_10 >> 39) | (VAR_10 << (64 - 39)))) + ((VAR_10 & VAR_11) | (VAR_12 & (VAR_10 | VAR_11))); VAR_13 += VAR_4; VAR_9 = VAR_4 + VAR_5; }; VAR_3++;
        { VAR_4 = VAR_8 + (((VAR_13 >> 14) | (VAR_13 << (64 - 14))) ^ ((VAR_13 >> 18) | (VAR_13 << (64 - 18))) ^ ((VAR_13 >> 41) | (VAR_13 << (64 - 41)))) + (VAR_7 ^ (VAR_13 & (VAR_14 ^ VAR_7))) + VAR_0[VAR_3] + VAR_6[VAR_3]; VAR_5 = (((VAR_9 >> 28) | (VAR_9 << (64 - 28))) ^ ((VAR_9 >> 34) | (VAR_9 << (64 - 34))) ^ ((VAR_9 >> 39) | (VAR_9 << (64 - 39)))) + ((VAR_9 & VAR_10) | (VAR_11 & (VAR_9 | VAR_10))); VAR_12 += VAR_4; VAR_8 = VAR_4 + VAR_5; }; VAR_3++;
        { VAR_4 = VAR_7 + (((VAR_12 >> 14) | (VAR_12 << (64 - 14))) ^ ((VAR_12 >> 18) | (VAR_12 << (64 - 18))) ^ ((VAR_12 >> 41) | (VAR_12 << (64 - 41)))) + (VAR_14 ^ (VAR_12 & (VAR_13 ^ VAR_14))) + VAR_0[VAR_3] + VAR_6[VAR_3]; VAR_5 = (((VAR_8 >> 28) | (VAR_8 << (64 - 28))) ^ ((VAR_8 >> 34) | (VAR_8 << (64 - 34))) ^ ((VAR_8 >> 39) | (VAR_8 << (64 - 39)))) + ((VAR_8 & VAR_9) | (VAR_10 & (VAR_8 | VAR_9))); VAR_11 += VAR_4; VAR_7 = VAR_4 + VAR_5; }; VAR_3++;
    }
    while( VAR_3 < 80 );

    VAR_1->state[0] += VAR_7;
    VAR_1->state[1] += VAR_8;
    VAR_1->state[2] += VAR_9;
    VAR_1->state[3] += VAR_10;
    VAR_1->state[4] += VAR_11;
    VAR_1->state[5] += VAR_12;
    VAR_1->state[6] += VAR_13;
    VAR_1->state[7] += VAR_14;
}
