
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int nr; int * rk; } ;
typedef TYPE_1__ mbedtls_camellia_context ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned char const*,unsigned int) ;

int FUNC_3( mbedtls_camellia_context *VAR_0, const unsigned char *VAR_1,
                         unsigned int VAR_2 )
{
    int VAR_3, VAR_4;
    size_t VAR_5;
    mbedtls_camellia_context VAR_6;
    uint32_t *VAR_7;
    uint32_t *VAR_8;

    FUNC_1( &VAR_6 );


    if( ( VAR_4 = FUNC_2( &VAR_6, VAR_1, VAR_2 ) ) != 0 )
        goto exit;

    VAR_0->nr = VAR_6.nr;
    VAR_3 = ( VAR_0->nr == 4 );

    VAR_7 = VAR_0->rk;
    VAR_8 = VAR_6.rk + 24 * 2 + 8 * VAR_3 * 2;

    *VAR_7++ = *VAR_8++;
    *VAR_7++ = *VAR_8++;
    *VAR_7++ = *VAR_8++;
    *VAR_7++ = *VAR_8++;

    for( VAR_5 = 22 + 8 * VAR_3, VAR_8 -= 6; VAR_5 > 0; VAR_5--, VAR_8 -= 4 )
    {
        *VAR_7++ = *VAR_8++;
        *VAR_7++ = *VAR_8++;
    }

    VAR_8 -= 2;

    *VAR_7++ = *VAR_8++;
    *VAR_7++ = *VAR_8++;
    *VAR_7++ = *VAR_8++;
    *VAR_7++ = *VAR_8++;

exit:
    FUNC_0( &VAR_6 );

    return( VAR_4 );
}
