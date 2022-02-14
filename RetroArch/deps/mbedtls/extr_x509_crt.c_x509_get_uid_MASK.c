
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char tag; unsigned char* p; int len; } ;
typedef TYPE_1__ mbedtls_x509_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char**,unsigned char const*,int *,int) ;

__attribute__((used)) static int FUNC_1( unsigned char **VAR_3,
                         const unsigned char *VAR_4,
                         mbedtls_x509_buf *VAR_5, int VAR_6 )
{
    int VAR_7;

    if( *VAR_3 == VAR_4 )
        return( 0 );

    VAR_5->tag = **VAR_3;

    if( ( VAR_7 = FUNC_0( VAR_3, VAR_4, &VAR_5->len,
            VAR_1 | VAR_0 | VAR_6 ) ) != 0 )
    {
        if( VAR_7 == VAR_2 )
            return( 0 );

        return( VAR_7 );
    }

    VAR_5->p = *VAR_3;
    *VAR_3 += VAR_5->len;

    return( 0 );
}
