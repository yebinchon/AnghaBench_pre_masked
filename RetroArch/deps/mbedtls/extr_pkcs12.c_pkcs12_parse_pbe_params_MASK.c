
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* p; int len; int tag; } ;
typedef TYPE_1__ mbedtls_asn1_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char**,unsigned char const*,int*) ;
 int FUNC_1 (unsigned char**,unsigned char const*,int*,int ) ;

__attribute__((used)) static int FUNC_2( mbedtls_asn1_buf *VAR_6,
                                    mbedtls_asn1_buf *VAR_7, int *VAR_8 )
{
    int VAR_9;
    unsigned char **VAR_10 = &VAR_6->p;
    const unsigned char *VAR_11 = VAR_6->p + VAR_6->len;
    if( VAR_6->tag != ( VAR_0 | VAR_2 ) )
        return( VAR_5 +
                VAR_4 );

    if( ( VAR_9 = FUNC_1( VAR_10, VAR_11, &VAR_7->len, VAR_1 ) ) != 0 )
        return( VAR_5 + VAR_9 );

    VAR_7->p = *VAR_10;
    *VAR_10 += VAR_7->len;

    if( ( VAR_9 = FUNC_0( VAR_10, VAR_11, VAR_8 ) ) != 0 )
        return( VAR_5 + VAR_9 );

    if( *VAR_10 != VAR_11 )
        return( VAR_5 +
                VAR_3 );

    return( 0 );
}
