
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_pk_context ;
typedef int mbedtls_md_type_t ;
typedef int mbedtls_cipher_type_t ;
typedef int mbedtls_asn1_buf ;
typedef int buf ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (unsigned char**,unsigned char*,int *,int *) ;
 int FUNC_2 (unsigned char**,unsigned char*,size_t*,unsigned char) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int ,int ,int ,unsigned char const*,size_t,unsigned char*,size_t,unsigned char*) ;
 int FUNC_5 (int *,int ,unsigned char const*,size_t,unsigned char*,size_t,unsigned char*) ;
 int FUNC_6 (int *,int ,unsigned char const*,size_t,unsigned char*,size_t,unsigned char*) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 int FUNC_8 (int *,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_9(
                                    mbedtls_pk_context *VAR_14,
                                    const unsigned char *VAR_15, size_t VAR_16,
                                    const unsigned char *VAR_17, size_t VAR_18 )
{
    int VAR_19, VAR_20 = 0;
    size_t VAR_21;
    unsigned char VAR_22[2048];
    unsigned char *VAR_23, *VAR_24;
    mbedtls_asn1_buf VAR_25, VAR_26;





    FUNC_7( VAR_22, 0, sizeof( VAR_22 ) );

    VAR_23 = (unsigned char *) VAR_15;
    VAR_24 = VAR_23 + VAR_16;

    if( VAR_18 == 0 )
        return( VAR_9 );
    if( ( VAR_19 = FUNC_2( &VAR_23, VAR_24, &VAR_21,
            VAR_0 | VAR_2 ) ) != 0 )
    {
        return( VAR_7 + VAR_19 );
    }

    VAR_24 = VAR_23 + VAR_21;

    if( ( VAR_19 = FUNC_1( &VAR_23, VAR_24, &VAR_25, &VAR_26 ) ) != 0 )
        return( VAR_7 + VAR_19 );

    if( ( VAR_19 = FUNC_2( &VAR_23, VAR_24, &VAR_21, VAR_1 ) ) != 0 )
        return( VAR_7 + VAR_19 );

    if( VAR_21 > sizeof( VAR_22 ) )
        return( VAR_5 );
    {
        ((void) VAR_17);
    }

    if( VAR_20 == 0 )
        return( VAR_6 );

    return( FUNC_8( VAR_14, VAR_22, VAR_21 ) );
}
