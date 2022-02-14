
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int len; int add_len; unsigned char* buf; int base_ectr; } ;
typedef TYPE_1__ mbedtls_gcm_context ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,int ,size_t) ;
 int FUNC_3 (unsigned char*,int,int) ;

int FUNC_4( mbedtls_gcm_context *VAR_1,
                unsigned char *VAR_2,
                size_t VAR_3 )
{
    unsigned char VAR_4[16];
    size_t VAR_5;
    uint64_t VAR_6 = VAR_1->len * 8;
    uint64_t VAR_7 = VAR_1->add_len * 8;

    if( VAR_3 > 16 || VAR_3 < 4 )
        return( VAR_0 );

    FUNC_2( VAR_2, VAR_1->base_ectr, VAR_3 );

    if( VAR_6 || VAR_7 )
    {
        FUNC_3( VAR_4, 0x00, 16 );

        FUNC_0( ( VAR_7 >> 32 ), VAR_4, 0 );
        FUNC_0( ( VAR_7 ), VAR_4, 4 );
        FUNC_0( ( VAR_6 >> 32 ), VAR_4, 8 );
        FUNC_0( ( VAR_6 ), VAR_4, 12 );

        for( VAR_5 = 0; VAR_5 < 16; VAR_5++ )
            VAR_1->buf[VAR_5] ^= VAR_4[VAR_5];

        FUNC_1( VAR_1, VAR_1->buf, VAR_1->buf );

        for( VAR_5 = 0; VAR_5 < VAR_3; VAR_5++ )
            VAR_2[VAR_5] ^= VAR_1->buf[VAR_5];
    }

    return( 0 );
}
