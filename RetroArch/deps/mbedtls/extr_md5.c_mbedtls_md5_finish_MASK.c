
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int* total; int* state; } ;
typedef TYPE_1__ mbedtls_md5_context ;


 int FUNC_0 (int,unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;
 unsigned char* VAR_0 ;

void FUNC_2( mbedtls_md5_context *VAR_1, unsigned char VAR_2[16] )
{
    uint32_t VAR_3, VAR_4;
    uint32_t VAR_5, VAR_6;
    unsigned char VAR_7[8];

    VAR_5 = ( VAR_1->total[0] >> 29 )
         | ( VAR_1->total[1] << 3 );
    VAR_6 = ( VAR_1->total[0] << 3 );

    FUNC_0( VAR_6, VAR_7, 0 );
    FUNC_0( VAR_5, VAR_7, 4 );

    VAR_3 = VAR_1->total[0] & 0x3F;
    VAR_4 = ( VAR_3 < 56 ) ? ( 56 - VAR_3 ) : ( 120 - VAR_3 );

    FUNC_1( VAR_1, VAR_0, VAR_4 );
    FUNC_1( VAR_1, VAR_7, 8 );

    FUNC_0( VAR_1->state[0], VAR_2, 0 );
    FUNC_0( VAR_1->state[1], VAR_2, 4 );
    FUNC_0( VAR_1->state[2], VAR_2, 8 );
    FUNC_0( VAR_1->state[3], VAR_2, 12 );
}
