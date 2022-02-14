
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int int64_t ;



__attribute__((used)) static int64_t FUNC_0( const uint8_t *VAR_0 )
{
    int64_t VAR_1;

    VAR_1 = ( (uint64_t) ( VAR_0[0] & 0x0e ) << 29 ) +
                       ( VAR_0[1] << 22 ) +
                     ( ( VAR_0[2] >> 1 ) << 15 ) +
                       ( VAR_0[3] << 7 ) +
                       ( VAR_0[4] >> 1 );
    return VAR_1;
}
