
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int len; TYPE_6__* p; } ;
struct TYPE_15__ {TYPE_6__* next; } ;
struct TYPE_14__ {TYPE_6__* next; } ;
struct TYPE_13__ {TYPE_6__* next; } ;
struct TYPE_12__ {TYPE_6__* next; } ;
struct TYPE_17__ {struct TYPE_17__* next; TYPE_5__ raw; TYPE_4__ subject_alt_names; TYPE_3__ ext_key_usage; TYPE_2__ subject; TYPE_1__ issuer; struct TYPE_17__* sig_opts; int pk; } ;
typedef TYPE_6__ mbedtls_x509_sequence ;
typedef TYPE_6__ mbedtls_x509_name ;
typedef TYPE_6__ mbedtls_x509_crt ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__*,int) ;

void FUNC_3( mbedtls_x509_crt *VAR_0 )
{
    mbedtls_x509_crt *VAR_1 = VAR_0;
    mbedtls_x509_crt *VAR_2;
    mbedtls_x509_name *VAR_3;
    mbedtls_x509_name *VAR_4;
    mbedtls_x509_sequence *VAR_5;
    mbedtls_x509_sequence *VAR_6;

    if( VAR_0 == ((void*)0) )
        return;

    do
    {
        FUNC_1( &VAR_1->pk );





        VAR_3 = VAR_1->issuer.next;
        while( VAR_3 != ((void*)0) )
        {
            VAR_4 = VAR_3;
            VAR_3 = VAR_3->next;
            FUNC_2( VAR_4, sizeof( mbedtls_x509_name ) );
            FUNC_0( VAR_4 );
        }

        VAR_3 = VAR_1->subject.next;
        while( VAR_3 != ((void*)0) )
        {
            VAR_4 = VAR_3;
            VAR_3 = VAR_3->next;
            FUNC_2( VAR_4, sizeof( mbedtls_x509_name ) );
            FUNC_0( VAR_4 );
        }

        VAR_5 = VAR_1->ext_key_usage.next;
        while( VAR_5 != ((void*)0) )
        {
            VAR_6 = VAR_5;
            VAR_5 = VAR_5->next;
            FUNC_2( VAR_6, sizeof( mbedtls_x509_sequence ) );
            FUNC_0( VAR_6 );
        }

        VAR_5 = VAR_1->subject_alt_names.next;
        while( VAR_5 != ((void*)0) )
        {
            VAR_6 = VAR_5;
            VAR_5 = VAR_5->next;
            FUNC_2( VAR_6, sizeof( mbedtls_x509_sequence ) );
            FUNC_0( VAR_6 );
        }

        if( VAR_1->raw.p != ((void*)0) )
        {
            FUNC_2( VAR_1->raw.p, VAR_1->raw.len );
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

        FUNC_2( VAR_2, sizeof( mbedtls_x509_crt ) );
        if( VAR_2 != VAR_0 )
            FUNC_0( VAR_2 );
    }
    while( VAR_1 != ((void*)0) );
}
