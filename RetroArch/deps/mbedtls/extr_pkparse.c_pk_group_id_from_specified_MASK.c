
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_ecp_group_id ;
typedef int mbedtls_ecp_group ;
typedef int mbedtls_asn1_buf ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4( const mbedtls_asn1_buf *VAR_0,
                                       mbedtls_ecp_group_id *VAR_1 )
{
    int VAR_2;
    mbedtls_ecp_group VAR_3;

    FUNC_1( &VAR_3 );

    if( ( VAR_2 = FUNC_2( VAR_0, &VAR_3 ) ) != 0 )
        goto cleanup;

    VAR_2 = FUNC_3( &VAR_3, VAR_1 );

cleanup:
    FUNC_0( &VAR_3 );

    return( VAR_2 );
}
