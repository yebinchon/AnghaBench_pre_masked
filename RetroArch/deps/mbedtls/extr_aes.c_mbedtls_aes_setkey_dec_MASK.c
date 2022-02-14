
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int* rk; int* buf; int nr; } ;
typedef TYPE_1__ mbedtls_aes_context ;


 size_t* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int*) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned char const*,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (unsigned char*,unsigned char const*,int) ;
 int FUNC_6 (int ) ;

int FUNC_7( mbedtls_aes_context *VAR_8, const unsigned char *VAR_9,
                    unsigned int VAR_10 )
{
    int VAR_11, VAR_12, VAR_13;
    mbedtls_aes_context VAR_14;
    uint32_t *VAR_15;
    uint32_t *VAR_16;

    FUNC_2( &VAR_14 );
    VAR_8->rk = VAR_15 = VAR_8->buf;


    if( ( VAR_13 = FUNC_3( &VAR_14, VAR_9, VAR_10 ) ) != 0 )
        goto exit;

    VAR_8->nr = VAR_14.nr;
    VAR_16 = VAR_14.rk + VAR_14.nr * 4;

    *VAR_15++ = *VAR_16++;
    *VAR_15++ = *VAR_16++;
    *VAR_15++ = *VAR_16++;
    *VAR_15++ = *VAR_16++;

    for( VAR_11 = VAR_8->nr - 1, VAR_16 -= 8; VAR_11 > 0; VAR_11--, VAR_16 -= 8 )
    {
        for( VAR_12 = 0; VAR_12 < 4; VAR_12++, VAR_16++ )
        {
            *VAR_15++ = VAR_3[ VAR_0[ ( *VAR_16 ) & 0xFF ] ] ^
                    VAR_4[ VAR_0[ ( *VAR_16 >> 8 ) & 0xFF ] ] ^
                    VAR_5[ VAR_0[ ( *VAR_16 >> 16 ) & 0xFF ] ] ^
                    VAR_6[ VAR_0[ ( *VAR_16 >> 24 ) & 0xFF ] ];
        }
    }

    *VAR_15++ = *VAR_16++;
    *VAR_15++ = *VAR_16++;
    *VAR_15++ = *VAR_16++;
    *VAR_15++ = *VAR_16++;

exit:
    FUNC_1( &VAR_14 );

    return( VAR_13 );
}
