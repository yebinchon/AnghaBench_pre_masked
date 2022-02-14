
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int* total; int* state; scalar_t__ is384; } ;
typedef TYPE_1__ mbedtls_sha512_context ;


 int FUNC_0 (int,unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;
 unsigned char* VAR_0 ;

void FUNC_2( mbedtls_sha512_context *VAR_1, unsigned char VAR_2[64] )
{
    size_t VAR_3, VAR_4;
    uint64_t VAR_5, VAR_6;
    unsigned char VAR_7[16];

    VAR_5 = ( VAR_1->total[0] >> 61 )
         | ( VAR_1->total[1] << 3 );
    VAR_6 = ( VAR_1->total[0] << 3 );

    FUNC_0( VAR_5, VAR_7, 0 );
    FUNC_0( VAR_6, VAR_7, 8 );

    VAR_3 = (size_t)( VAR_1->total[0] & 0x7F );
    VAR_4 = ( VAR_3 < 112 ) ? ( 112 - VAR_3 ) : ( 240 - VAR_3 );

    FUNC_1( VAR_1, VAR_0, VAR_4 );
    FUNC_1( VAR_1, VAR_7, 16 );

    FUNC_0( VAR_1->state[0], VAR_2, 0 );
    FUNC_0( VAR_1->state[1], VAR_2, 8 );
    FUNC_0( VAR_1->state[2], VAR_2, 16 );
    FUNC_0( VAR_1->state[3], VAR_2, 24 );
    FUNC_0( VAR_1->state[4], VAR_2, 32 );
    FUNC_0( VAR_1->state[5], VAR_2, 40 );

    if( VAR_1->is384 == 0 )
    {
        FUNC_0( VAR_1->state[6], VAR_2, 48 );
        FUNC_0( VAR_1->state[7], VAR_2, 56 );
    }
}
