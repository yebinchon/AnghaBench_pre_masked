
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ len; int p; } ;
struct TYPE_10__ {TYPE_1__ serial; } ;
typedef TYPE_3__ mbedtls_x509_crt ;
struct TYPE_9__ {scalar_t__ len; int p; } ;
struct TYPE_11__ {struct TYPE_11__* next; int revocation_date; TYPE_2__ serial; } ;
typedef TYPE_4__ mbedtls_x509_crl_entry ;
struct TYPE_12__ {TYPE_4__ entry; } ;
typedef TYPE_5__ mbedtls_x509_crl ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

int FUNC_2( const mbedtls_x509_crt *VAR_0, const mbedtls_x509_crl *VAR_1 )
{
    const mbedtls_x509_crl_entry *VAR_2 = &VAR_1->entry;

    while( VAR_2 != ((void*)0) && VAR_2->serial.len != 0 )
    {
        if( VAR_0->serial.len == VAR_2->serial.len &&
            FUNC_1( VAR_0->serial.p, VAR_2->serial.p, VAR_0->serial.len ) == 0 )
        {
            if( FUNC_0( &VAR_2->revocation_date ) )
                return( 1 );
        }

        VAR_2 = VAR_2->next;
    }

    return( 0 );
}
