
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tag; size_t len; unsigned char* p; } ;
typedef TYPE_1__ mbedtls_x509_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char**,unsigned char const*,size_t*) ;

int FUNC_1( unsigned char **VAR_2, const unsigned char *VAR_3, mbedtls_x509_buf *VAR_4 )
{
    int VAR_5;
    size_t VAR_6;
    int VAR_7;

    if( ( VAR_3 - *VAR_2 ) < 1 )
        return( VAR_1 +
                VAR_0 );

    VAR_7 = **VAR_2;

    if( ( VAR_5 = FUNC_0( VAR_2, VAR_3, &VAR_6 ) ) != 0 )
        return( VAR_1 + VAR_5 );

    VAR_4->tag = VAR_7;
    VAR_4->len = VAR_6;
    VAR_4->p = *VAR_2;

    *VAR_2 += VAR_6;

    return( 0 );
}
