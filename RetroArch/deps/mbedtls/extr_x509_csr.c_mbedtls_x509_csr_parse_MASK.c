
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mbedtls_x509_csr ;
struct TYPE_5__ {unsigned char const* buf; size_t buflen; } ;
typedef TYPE_1__ mbedtls_pem_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,char*,unsigned char const*,int *,int ,size_t*) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;

int FUNC_4( mbedtls_x509_csr *VAR_2, const unsigned char *VAR_3, size_t VAR_4 )
{
    if( VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0 )
        return( VAR_1 );
    return( FUNC_3( VAR_2, VAR_3, VAR_4 ) );
}
