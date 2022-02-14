
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allowed_mds; } ;
typedef TYPE_1__ mbedtls_x509_crt_profile ;
typedef int mbedtls_md_type_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1( const mbedtls_x509_crt_profile *VAR_0,
                                      mbedtls_md_type_t VAR_1 )
{
    if( ( VAR_0->allowed_mds & FUNC_0( VAR_1 ) ) != 0 )
        return( 0 );

    return( -1 );
}
