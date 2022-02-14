
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tag; unsigned char* p; size_t len; } ;
typedef TYPE_1__ mbedtls_x509_buf ;
typedef int mbedtls_md_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned char**,unsigned char const*,size_t*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2( const mbedtls_x509_buf *VAR_8, mbedtls_md_type_t *VAR_9 )
{
    int VAR_10;
    unsigned char *VAR_11;
    const unsigned char *VAR_12;
    mbedtls_x509_buf VAR_13;
    size_t VAR_14;


    if( VAR_8->tag != ( VAR_0 | VAR_3 ) )
        return( VAR_7 +
                VAR_6 );

    VAR_11 = (unsigned char *) VAR_8->p;
    VAR_12 = VAR_11 + VAR_8->len;

    if( VAR_11 >= VAR_12 )
        return( VAR_7 +
                VAR_5 );


    VAR_13.tag = *VAR_11;

    if( ( VAR_10 = FUNC_0( &VAR_11, VAR_12, &VAR_13.len, VAR_2 ) ) != 0 )
        return( VAR_7 + VAR_10 );

    VAR_13.p = VAR_11;
    VAR_11 += VAR_13.len;


    if( ( VAR_10 = FUNC_1( &VAR_13, VAR_9 ) ) != 0 )
        return( VAR_7 + VAR_10 );


    if( VAR_11 == VAR_12 )
        return( 0 );

    if( ( VAR_10 = FUNC_0( &VAR_11, VAR_12, &VAR_14, VAR_1 ) ) != 0 || VAR_14 != 0 )
        return( VAR_7 + VAR_10 );

    if( VAR_11 != VAR_12 )
        return( VAR_7 +
                VAR_4 );

    return( 0 );
}
