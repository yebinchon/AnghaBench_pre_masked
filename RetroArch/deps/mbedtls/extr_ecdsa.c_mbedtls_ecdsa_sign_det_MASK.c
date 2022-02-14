
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int const mbedtls_mpi ;
typedef int mbedtls_md_type_t ;
typedef int mbedtls_md_info_t ;
typedef int mbedtls_hmac_drbg_context ;
struct TYPE_5__ {int nbits; } ;
typedef TYPE_1__ mbedtls_ecp_group ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int const*,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_1__*,int const*,int const*,int const*,unsigned char const*,size_t,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int *,int const*,unsigned char*,int) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*,unsigned char*,size_t) ;

int FUNC_10( mbedtls_ecp_group *VAR_3, mbedtls_mpi *VAR_4, mbedtls_mpi *VAR_5,
                    const mbedtls_mpi *VAR_6, const unsigned char *VAR_7, size_t VAR_8,
                    mbedtls_md_type_t VAR_9 )
{
    int VAR_10;
    mbedtls_hmac_drbg_context VAR_11;
    unsigned char VAR_12[2 * VAR_0];
    size_t VAR_13 = ( VAR_3->nbits + 7 ) / 8;
    const mbedtls_md_info_t *VAR_14;
    mbedtls_mpi VAR_15;

    if( ( VAR_14 = FUNC_6( VAR_9 ) ) == ((void*)0) )
        return( VAR_1 );

    FUNC_8( &VAR_15 );
    FUNC_4( &VAR_11 );


    FUNC_0( FUNC_9( VAR_6, VAR_12, VAR_13 ) );
    FUNC_0( FUNC_1( VAR_3, &VAR_15, VAR_7, VAR_8 ) );
    FUNC_0( FUNC_9( &VAR_15, VAR_12 + VAR_13, VAR_13 ) );
    FUNC_5( &VAR_11, VAR_14, VAR_12, 2 * VAR_13 );

    VAR_10 = FUNC_2( VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
                      VAR_2, &VAR_11 );

cleanup:
    FUNC_3( &VAR_11 );
    FUNC_7( &VAR_15 );

    return( VAR_10 );
}
