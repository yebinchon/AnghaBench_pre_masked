
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int mbedtls_md_type_t ;
struct TYPE_6__ {unsigned char* p; int len; int tag; } ;
typedef TYPE_1__ mbedtls_asn1_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_1 (unsigned char**,unsigned char const*,TYPE_1__*) ;
 int FUNC_2 (unsigned char**,unsigned char const*,int*) ;
 int FUNC_3 (unsigned char**,unsigned char const*,int*,int ) ;

__attribute__((used)) static int FUNC_4( const mbedtls_asn1_buf *VAR_9,
                                      mbedtls_asn1_buf *VAR_10, int *VAR_11,
                                      int *VAR_12, mbedtls_md_type_t *VAR_13 )
{
    int VAR_14;
    mbedtls_asn1_buf VAR_15;
    unsigned char *VAR_16 = VAR_9->p;
    const unsigned char *VAR_17 = VAR_9->p + VAR_9->len;

    if( VAR_9->tag != ( VAR_0 | VAR_2 ) )
        return( VAR_6 +
                VAR_4 );
    if( ( VAR_14 = FUNC_3( &VAR_16, VAR_17, &VAR_10->len, VAR_1 ) ) != 0 )
        return( VAR_6 + VAR_14 );

    VAR_10->p = VAR_16;
    VAR_16 += VAR_10->len;

    if( ( VAR_14 = FUNC_2( &VAR_16, VAR_17, VAR_11 ) ) != 0 )
        return( VAR_6 + VAR_14 );

    if( VAR_16 == VAR_17 )
        return( 0 );

    if( ( VAR_14 = FUNC_2( &VAR_16, VAR_17, VAR_12 ) ) != 0 )
    {
        if( VAR_14 != VAR_4 )
            return( VAR_6 + VAR_14 );
    }

    if( VAR_16 == VAR_17 )
        return( 0 );

    if( ( VAR_14 = FUNC_1( &VAR_16, VAR_17, &VAR_15 ) ) != 0 )
        return( VAR_6 + VAR_14 );

    if( FUNC_0( VAR_8, &VAR_15 ) != 0 )
        return( VAR_5 );

    *VAR_13 = VAR_7;

    if( VAR_16 != VAR_17 )
        return( VAR_6 +
                VAR_3 );

    return( 0 );
}
