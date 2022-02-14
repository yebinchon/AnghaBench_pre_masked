
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int I1 ;
typedef int I0 ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4( const uint32_t VAR_0[2], const uint32_t VAR_1[2],
                              uint32_t VAR_2[2])
{
    uint32_t VAR_3, VAR_4;
    VAR_3 = VAR_0[0] ^ VAR_1[0];
    VAR_4 = VAR_0[1] ^ VAR_1[1];

    VAR_3 = ((uint32_t) FUNC_0((VAR_3 >> 24) & 0xFF) << 24) |
         ((uint32_t) FUNC_1((VAR_3 >> 16) & 0xFF) << 16) |
         ((uint32_t) FUNC_2((VAR_3 >> 8) & 0xFF) << 8) |
         ((uint32_t) FUNC_3((VAR_3 ) & 0xFF) );
    VAR_4 = ((uint32_t) FUNC_1((VAR_4 >> 24) & 0xFF) << 24) |
         ((uint32_t) FUNC_2((VAR_4 >> 16) & 0xFF) << 16) |
         ((uint32_t) FUNC_3((VAR_4 >> 8) & 0xFF) << 8) |
         ((uint32_t) FUNC_0((VAR_4 ) & 0xFF) );

    VAR_3 ^= (VAR_4 << 8) | (VAR_4 >> 24);
    VAR_4 ^= (VAR_3 << 16) | (VAR_3 >> 16);
    VAR_3 ^= (VAR_4 >> 8) | (VAR_4 << 24);
    VAR_4 ^= (VAR_3 >> 8) | (VAR_3 << 24);

    VAR_2[0] ^= VAR_4;
    VAR_2[1] ^= VAR_3;
}
