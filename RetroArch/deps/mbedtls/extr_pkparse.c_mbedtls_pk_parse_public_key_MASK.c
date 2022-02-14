
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mbedtls_pk_context ;
struct TYPE_5__ {unsigned char* buf; size_t buflen; } ;
typedef TYPE_1__ mbedtls_pem_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,char*,unsigned char const*,int *,int ,size_t*) ;
 int FUNC_3 (unsigned char**,unsigned char*,int *) ;

int FUNC_4( mbedtls_pk_context *VAR_1,
                         const unsigned char *VAR_2, size_t VAR_3 )
{
    int VAR_4;
    unsigned char *VAR_5;
    VAR_5 = (unsigned char *) VAR_2;

    VAR_4 = FUNC_3( &VAR_5, VAR_5 + VAR_3, VAR_1 );





    return( VAR_4 );
}
