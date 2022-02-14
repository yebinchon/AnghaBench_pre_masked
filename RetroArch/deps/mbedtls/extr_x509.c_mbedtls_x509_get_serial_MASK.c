
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* p; int len; int tag; } ;
typedef TYPE_1__ mbedtls_x509_buf ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char**,unsigned char const*,int *) ;

int FUNC_1( unsigned char **VAR_6, const unsigned char *VAR_7,
                     mbedtls_x509_buf *VAR_8 )
{
    int VAR_9;

    if( ( VAR_7 - *VAR_6 ) < 1 )
        return( VAR_5 +
                VAR_3 );

    if( **VAR_6 != ( VAR_0 | VAR_2 | 2 ) &&
        **VAR_6 != VAR_1 )
        return( VAR_5 +
                VAR_4 );

    VAR_8->tag = *(*VAR_6)++;

    if( ( VAR_9 = FUNC_0( VAR_6, VAR_7, &VAR_8->len ) ) != 0 )
        return( VAR_5 + VAR_9 );

    VAR_8->p = *VAR_6;
    *VAR_6 += VAR_8->len;

    return( 0 );
}
