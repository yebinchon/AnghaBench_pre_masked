
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; TYPE_3__* p; } ;
struct TYPE_9__ {TYPE_3__* next; } ;
struct TYPE_10__ {TYPE_1__ raw; struct TYPE_10__* next; TYPE_2__ subject; struct TYPE_10__* sig_opts; int pk; } ;
typedef TYPE_3__ mbedtls_x509_name ;
typedef TYPE_3__ mbedtls_x509_csr ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int) ;

void FUNC_3( mbedtls_x509_csr *VAR_0 )
{
    mbedtls_x509_name *VAR_1;
    mbedtls_x509_name *VAR_2;

    if( VAR_0 == ((void*)0) )
        return;

    FUNC_1( &VAR_0->pk );





    VAR_1 = VAR_0->subject.next;
    while( VAR_1 != ((void*)0) )
    {
        VAR_2 = VAR_1;
        VAR_1 = VAR_1->next;
        FUNC_2( VAR_2, sizeof( mbedtls_x509_name ) );
        FUNC_0( VAR_2 );
    }

    if( VAR_0->raw.p != ((void*)0) )
    {
        FUNC_2( VAR_0->raw.p, VAR_0->raw.len );
        FUNC_0( VAR_0->raw.p );
    }

    FUNC_2( VAR_0, sizeof( mbedtls_x509_csr ) );
}
