
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int len; TYPE_4__* p; } ;
struct TYPE_11__ {TYPE_4__* next; } ;
struct TYPE_10__ {TYPE_4__* next; } ;
struct TYPE_13__ {struct TYPE_13__* next; TYPE_3__ raw; TYPE_2__ entry; TYPE_1__ issuer; struct TYPE_13__* sig_opts; } ;
typedef TYPE_4__ mbedtls_x509_name ;
typedef TYPE_4__ mbedtls_x509_crl_entry ;
typedef TYPE_4__ mbedtls_x509_crl ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int) ;

void FUNC_2( mbedtls_x509_crl *VAR_0 )
{
    mbedtls_x509_crl *VAR_1 = VAR_0;
    mbedtls_x509_crl *VAR_2;
    mbedtls_x509_name *VAR_3;
    mbedtls_x509_name *VAR_4;
    mbedtls_x509_crl_entry *VAR_5;
    mbedtls_x509_crl_entry *VAR_6;

    if( VAR_0 == ((void*)0) )
        return;

    do
    {




        VAR_3 = VAR_1->issuer.next;
        while( VAR_3 != ((void*)0) )
        {
            VAR_4 = VAR_3;
            VAR_3 = VAR_3->next;
            FUNC_1( VAR_4, sizeof( mbedtls_x509_name ) );
            FUNC_0( VAR_4 );
        }

        VAR_5 = VAR_1->entry.next;
        while( VAR_5 != ((void*)0) )
        {
            VAR_6 = VAR_5;
            VAR_5 = VAR_5->next;
            FUNC_1( VAR_6, sizeof( mbedtls_x509_crl_entry ) );
            FUNC_0( VAR_6 );
        }

        if( VAR_1->raw.p != ((void*)0) )
        {
            FUNC_1( VAR_1->raw.p, VAR_1->raw.len );
            FUNC_0( VAR_1->raw.p );
        }

        VAR_1 = VAR_1->next;
    }
    while( VAR_1 != ((void*)0) );

    VAR_1 = VAR_0;
    do
    {
        VAR_2 = VAR_1;
        VAR_1 = VAR_1->next;

        FUNC_1( VAR_2, sizeof( mbedtls_x509_crl ) );
        if( VAR_2 != VAR_0 )
            FUNC_0( VAR_2 );
    }
    while( VAR_1 != ((void*)0) );
}
