
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char tag; size_t len; unsigned char* p; } ;
typedef TYPE_1__ mbedtls_x509_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char**,unsigned char const*,size_t*,int) ;

int FUNC_1( unsigned char **VAR_5, const unsigned char *VAR_6,
                  mbedtls_x509_buf *VAR_7, int VAR_8 )
{
    int VAR_9;
    size_t VAR_10;

    if( *VAR_5 == VAR_6 )
        return( 0 );

    VAR_7->tag = **VAR_5;

    if( ( VAR_9 = FUNC_0( VAR_5, VAR_6, &VAR_7->len,
            VAR_1 | VAR_0 | VAR_8 ) ) != 0 )
        return( VAR_9 );

    VAR_7->p = *VAR_5;
    VAR_6 = *VAR_5 + VAR_7->len;
    if( ( VAR_9 = FUNC_0( VAR_5, VAR_6, &VAR_10,
            VAR_0 | VAR_2 ) ) != 0 )
        return( VAR_4 + VAR_9 );

    if( VAR_6 != *VAR_5 + VAR_10 )
        return( VAR_4 +
                VAR_3 );

    return( 0 );
}
