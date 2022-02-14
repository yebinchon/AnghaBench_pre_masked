
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int mbedtls_x509_crt_profile ;
struct TYPE_13__ {scalar_t__ len; int p; } ;
struct TYPE_17__ {int pk; TYPE_1__ subject_raw; } ;
typedef TYPE_5__ mbedtls_x509_crt ;
struct TYPE_16__ {int len; int p; } ;
struct TYPE_15__ {int len; int p; } ;
struct TYPE_14__ {scalar_t__ len; int p; } ;
struct TYPE_18__ {scalar_t__ version; struct TYPE_18__* next; int this_update; int next_update; TYPE_4__ sig; int sig_md; int sig_opts; int sig_pk; TYPE_3__ tbs; TYPE_2__ issuer_raw; } ;
typedef TYPE_6__ mbedtls_x509_crl ;
typedef int mbedtls_md_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int const*,int ,int ,unsigned char*) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,unsigned char*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int const*,int ,int *) ;
 scalar_t__ FUNC_10 (int const*,int ) ;
 scalar_t__ FUNC_11 (int const*,int ) ;

__attribute__((used)) static int FUNC_12( mbedtls_x509_crt *VAR_9, mbedtls_x509_crt *VAR_10,
                               mbedtls_x509_crl *VAR_11,
                               const mbedtls_x509_crt_profile *VAR_12 )
{
    int VAR_13 = 0;
    unsigned char VAR_14[VAR_0];
    const mbedtls_md_info_t *VAR_15;

    if( VAR_10 == ((void*)0) )
        return( VAR_13 );

    while( VAR_11 != ((void*)0) )
    {
        if( VAR_11->version == 0 ||
            VAR_11->issuer_raw.len != VAR_10->subject_raw.len ||
            FUNC_8( VAR_11->issuer_raw.p, VAR_10->subject_raw.p,
                    VAR_11->issuer_raw.len ) != 0 )
        {
            VAR_11 = VAR_11->next;
            continue;
        }
        if( FUNC_10( VAR_12, VAR_11->sig_md ) != 0 )
            VAR_13 |= VAR_3;

        if( FUNC_11( VAR_12, VAR_11->sig_pk ) != 0 )
            VAR_13 |= VAR_4;

        VAR_15 = FUNC_2( VAR_11->sig_md );
        if( VAR_15 == ((void*)0) )
        {



            VAR_13 |= VAR_7;
            break;
        }

        FUNC_0( VAR_15, VAR_11->tbs.p, VAR_11->tbs.len, VAR_14 );

        if( FUNC_9( VAR_12, VAR_11->sig_pk, &VAR_10->pk ) != 0 )
            VAR_13 |= VAR_1;

        if( FUNC_3( VAR_11->sig_pk, VAR_11->sig_opts, &VAR_10->pk,
                           VAR_11->sig_md, VAR_14, FUNC_1( VAR_15 ),
                           VAR_11->sig.p, VAR_11->sig.len ) != 0 )
        {
            VAR_13 |= VAR_7;
            break;
        }




        if( FUNC_7( &VAR_11->next_update ) )
            VAR_13 |= VAR_5;

        if( FUNC_6( &VAR_11->this_update ) )
            VAR_13 |= VAR_6;




        if( FUNC_5( VAR_9, VAR_11 ) )
        {
            VAR_13 |= VAR_2;
            break;
        }

        VAR_11 = VAR_11->next;
    }

    return( VAR_13 );
}
