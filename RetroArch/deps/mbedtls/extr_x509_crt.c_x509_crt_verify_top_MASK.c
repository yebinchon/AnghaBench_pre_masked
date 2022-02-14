
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mbedtls_x509_crt_profile ;
struct TYPE_17__ {int len; } ;
struct TYPE_16__ {scalar_t__ len; int p; } ;
struct TYPE_15__ {int len; int p; } ;
struct TYPE_14__ {int len; int p; } ;
struct TYPE_18__ {int max_pathlen; int valid_from; int valid_to; TYPE_4__ issuer_raw; TYPE_3__ subject_raw; int pk; int sig_pk; TYPE_2__ sig; int sig_md; int sig_opts; struct TYPE_18__* next; TYPE_1__ tbs; } ;
typedef TYPE_5__ mbedtls_x509_crt ;
typedef int mbedtls_x509_crl ;
typedef int mbedtls_md_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const*,int ,int ,unsigned char*) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ,unsigned char*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_5__*,TYPE_5__*,int,int) ;
 int FUNC_8 (TYPE_5__*,TYPE_5__*,int *,int const*) ;
 scalar_t__ FUNC_9 (int const*,int ,int *) ;
 scalar_t__ FUNC_10 (int const*,int ) ;
 scalar_t__ FUNC_11 (int const*,int ) ;

__attribute__((used)) static int FUNC_12(
                mbedtls_x509_crt *VAR_7, mbedtls_x509_crt *VAR_8,
                mbedtls_x509_crl *VAR_9,
                const mbedtls_x509_crt_profile *VAR_10,
                int VAR_11, int VAR_12, uint32_t *VAR_13,
                int (*VAR_14)(void *, mbedtls_x509_crt *, int, uint32_t *),
                void *VAR_15 )
{
    int VAR_16;
    uint32_t VAR_17 = 0;
    int VAR_18;
    unsigned char VAR_19[VAR_0];
    const mbedtls_md_info_t *VAR_20;
    mbedtls_x509_crt *VAR_21 = ((void*)0);

    if( FUNC_5( &VAR_7->valid_to ) )
        *VAR_13 |= VAR_4;

    if( FUNC_4( &VAR_7->valid_from ) )
        *VAR_13 |= VAR_5;

    if( FUNC_10( VAR_10, VAR_7->sig_md ) != 0 )
        *VAR_13 |= VAR_2;

    if( FUNC_11( VAR_10, VAR_7->sig_pk ) != 0 )
        *VAR_13 |= VAR_3;




    *VAR_13 |= VAR_6;

    VAR_20 = FUNC_2( VAR_7->sig_md );
    if( VAR_20 == ((void*)0) )
    {



        VAR_8 = ((void*)0);
    }
    else
        FUNC_0( VAR_20, VAR_7->tbs.p, VAR_7->tbs.len, VAR_19 );

    for( ; VAR_8 != ((void*)0); VAR_8 = VAR_8->next )
    {
        if( FUNC_7( VAR_7, VAR_8, 1, VAR_11 == 0 ) != 0 )
            continue;

        VAR_18 = VAR_11 + 1;





        if( VAR_7->subject_raw.len == VAR_8->subject_raw.len &&
            FUNC_6( VAR_7->subject_raw.p, VAR_8->subject_raw.p,
                            VAR_7->issuer_raw.len ) == 0 )
        {
            VAR_18--;
        }


        if( VAR_8->max_pathlen > 0 &&
            VAR_8->max_pathlen < VAR_18 - VAR_12 )
        {
            continue;
        }

        if( FUNC_3( VAR_7->sig_pk, VAR_7->sig_opts, &VAR_8->pk,
                           VAR_7->sig_md, VAR_19, FUNC_1( VAR_20 ),
                           VAR_7->sig.p, VAR_7->sig.len ) != 0 )
        {
            continue;
        }

        if( FUNC_5( &VAR_8->valid_to ) ||
            FUNC_4( &VAR_8->valid_from ) )
        {
            if ( VAR_21 == ((void*)0) )
                VAR_21 = VAR_8;

            continue;
        }

        break;
    }

    if( VAR_8 != ((void*)0) || ( VAR_8 = VAR_21 ) != ((void*)0) )
    {



        *VAR_13 &= ~VAR_6;

        if( FUNC_9( VAR_10, VAR_7->sig_pk, &VAR_8->pk ) != 0 )
            *VAR_13 |= VAR_1;
    }






    if( VAR_8 != ((void*)0) &&
        ( VAR_7->subject_raw.len != VAR_8->subject_raw.len ||
          FUNC_6( VAR_7->subject_raw.p, VAR_8->subject_raw.p,
                            VAR_7->issuer_raw.len ) != 0 ) )
    {




        ((void) VAR_9);


        if( FUNC_5( &VAR_8->valid_to ) )
            VAR_17 |= VAR_4;

        if( FUNC_4( &VAR_8->valid_from ) )
            VAR_17 |= VAR_5;

        if( ((void*)0) != VAR_14 )
        {
            if( ( VAR_16 = VAR_14( VAR_15, VAR_8, VAR_11 + 1,
                                &VAR_17 ) ) != 0 )
            {
                return( VAR_16 );
            }
        }
    }


    if( ((void*)0) != VAR_14 )
    {
        if( ( VAR_16 = VAR_14( VAR_15, VAR_7, VAR_11, VAR_13 ) ) != 0 )
            return( VAR_16 );
    }

    *VAR_13 |= VAR_17;

    return( 0 );
}
