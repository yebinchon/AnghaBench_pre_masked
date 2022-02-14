
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mbedtls_x509_crt ;
struct TYPE_5__ {unsigned char const* buf; size_t buflen; } ;
typedef TYPE_1__ mbedtls_pem_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,char*,unsigned char const*,int *,int ,size_t*) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;
 int * FUNC_4 (char const*,char*) ;

int FUNC_5( mbedtls_x509_crt *VAR_7, const unsigned char *VAR_8, size_t VAR_9 )
{
    if( VAR_7 == ((void*)0) || VAR_8 == ((void*)0) )
        return( VAR_3 );
    return FUNC_3( VAR_7, VAR_8, VAR_9 );
}
