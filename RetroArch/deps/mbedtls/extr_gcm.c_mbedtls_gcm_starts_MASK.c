
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {unsigned char* y; unsigned char* buf; int mode; size_t add_len; int base_ectr; int cipher_ctx; scalar_t__ len; } ;
typedef TYPE_1__ mbedtls_gcm_context ;


 int VAR_0 ;
 int FUNC_0 (size_t,unsigned char*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char const*,unsigned char const*) ;
 int FUNC_2 (int *,unsigned char const*,int,int ,size_t*) ;
 int FUNC_3 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_4 (unsigned char*,int,int) ;

int FUNC_5( mbedtls_gcm_context *VAR_1,
                int VAR_2,
                const unsigned char *VAR_3,
                size_t VAR_4,
                const unsigned char *VAR_5,
                size_t VAR_6 )
{
    int VAR_7;
    unsigned char VAR_8[16];
    size_t VAR_9;
    const unsigned char *VAR_10;
    size_t VAR_11, VAR_12 = 0;



    if( VAR_4 == 0 ||
      ( (uint64_t) VAR_4 ) >> 61 != 0 ||
      ( (uint64_t) VAR_6 ) >> 61 != 0 )
    {
        return( VAR_0 );
    }

    FUNC_4( VAR_1->y, 0x00, sizeof(VAR_1->y) );
    FUNC_4( VAR_1->buf, 0x00, sizeof(VAR_1->buf) );

    VAR_1->mode = VAR_2;
    VAR_1->len = 0;
    VAR_1->add_len = 0;

    if( VAR_4 == 12 )
    {
        FUNC_3( VAR_1->y, VAR_3, VAR_4 );
        VAR_1->y[15] = 1;
    }
    else
    {
        FUNC_4( VAR_8, 0x00, 16 );
        FUNC_0( VAR_4 * 8, VAR_8, 12 );

        VAR_10 = VAR_3;
        while( VAR_4 > 0 )
        {
            VAR_11 = ( VAR_4 < 16 ) ? VAR_4 : 16;

            for( VAR_9 = 0; VAR_9 < VAR_11; VAR_9++ )
                VAR_1->y[VAR_9] ^= VAR_10[VAR_9];

            FUNC_1( VAR_1, VAR_1->y, VAR_1->y );

            VAR_4 -= VAR_11;
            VAR_10 += VAR_11;
        }

        for( VAR_9 = 0; VAR_9 < 16; VAR_9++ )
            VAR_1->y[VAR_9] ^= VAR_8[VAR_9];

        FUNC_1( VAR_1, VAR_1->y, VAR_1->y );
    }

    if( ( VAR_7 = FUNC_2( &VAR_1->cipher_ctx, VAR_1->y, 16, VAR_1->base_ectr,
                             &VAR_12 ) ) != 0 )
    {
        return( VAR_7 );
    }

    VAR_1->add_len = VAR_6;
    VAR_10 = VAR_5;
    while( VAR_6 > 0 )
    {
        VAR_11 = ( VAR_6 < 16 ) ? VAR_6 : 16;

        for( VAR_9 = 0; VAR_9 < VAR_11; VAR_9++ )
            VAR_1->buf[VAR_9] ^= VAR_10[VAR_9];

        FUNC_1( VAR_1, VAR_1->buf, VAR_1->buf );

        VAR_6 -= VAR_11;
        VAR_10 += VAR_11;
    }

    return( 0 );
}
