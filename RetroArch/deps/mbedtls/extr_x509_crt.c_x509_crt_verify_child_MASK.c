
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mbedtls_x509_crt_profile ;
struct TYPE_17__ {int len; int p; } ;
struct TYPE_16__ {int len; int p; } ;
struct TYPE_18__ {int max_pathlen; struct TYPE_18__* next; TYPE_2__ sig; int sig_md; int pk; int sig_opts; int sig_pk; TYPE_1__ tbs; int valid_from; int valid_to; int subject; int issuer; } ;
typedef TYPE_3__ mbedtls_x509_crt ;
typedef int mbedtls_x509_crl ;
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
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_3__*,int ,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*,int *,int const*,int,int,int *,int (*) (void*,TYPE_3__*,int,int *),void*) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*,int *,int const*) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int const*,int ,int *) ;
 scalar_t__ FUNC_11 (int const*,int ) ;
 scalar_t__ FUNC_12 (int const*,int ) ;

__attribute__((used)) static int FUNC_13(
                mbedtls_x509_crt *VAR_9, mbedtls_x509_crt *VAR_10,
                mbedtls_x509_crt *VAR_11, mbedtls_x509_crl *VAR_12,
                const mbedtls_x509_crt_profile *VAR_13,
                int VAR_14, int VAR_15, uint32_t *VAR_16,
                int (*VAR_17)(void *, mbedtls_x509_crt *, int, uint32_t *),
                void *VAR_18 )
{
    int VAR_19;
    uint32_t VAR_20 = 0;
    unsigned char VAR_21[VAR_1];
    mbedtls_x509_crt *VAR_22;
    const mbedtls_md_info_t *VAR_23;


    if( ( VAR_14 != 0 ) && FUNC_9( &VAR_9->issuer, &VAR_9->subject ) == 0 )
        VAR_15++;


    if( 1 + VAR_14 > VAR_8 )
    {
        *VAR_16 |= VAR_7;
        return( VAR_0 );
    }

    if( FUNC_5( &VAR_9->valid_to ) )
        *VAR_16 |= VAR_5;

    if( FUNC_4( &VAR_9->valid_from ) )
        *VAR_16 |= VAR_6;

    if( FUNC_11( VAR_13, VAR_9->sig_md ) != 0 )
        *VAR_16 |= VAR_3;

    if( FUNC_12( VAR_13, VAR_9->sig_pk ) != 0 )
        *VAR_16 |= VAR_4;

    VAR_23 = FUNC_2( VAR_9->sig_md );
    if( VAR_23 == ((void*)0) )
    {



        *VAR_16 |= VAR_7;
    }
    else
    {
        FUNC_0( VAR_23, VAR_9->tbs.p, VAR_9->tbs.len, VAR_21 );

        if( FUNC_10( VAR_13, VAR_9->sig_pk, &VAR_10->pk ) != 0 )
            *VAR_16 |= VAR_2;

        if( FUNC_3( VAR_9->sig_pk, VAR_9->sig_opts, &VAR_10->pk,
                           VAR_9->sig_md, VAR_21, FUNC_1( VAR_23 ),
                           VAR_9->sig.p, VAR_9->sig.len ) != 0 )
        {
            *VAR_16 |= VAR_7;
        }
    }







    for( VAR_22 = VAR_11;
         VAR_22 != ((void*)0);
         VAR_22 = VAR_22->next )
    {
        if( FUNC_6( VAR_10, VAR_22,
                                   0, VAR_14 == 0 ) == 0 )
            break;
    }

    if( VAR_22 != ((void*)0) )
    {
        VAR_19 = FUNC_7( VAR_10, VAR_22, VAR_12, VAR_13,
                                VAR_14 + 1, VAR_15, &VAR_20, VAR_17, VAR_18 );
        if( VAR_19 != 0 )
            return( VAR_19 );
    }
    else
    {

        for( VAR_22 = VAR_10->next;
             VAR_22 != ((void*)0);
             VAR_22 = VAR_22->next )
        {



            if( VAR_22->max_pathlen > 0 &&
                VAR_22->max_pathlen < 2 + VAR_14 - VAR_15 )
            {
                continue;
            }

            if( FUNC_6( VAR_10, VAR_22,
                                       0, VAR_14 == 0 ) == 0 )
                break;
        }


        if( VAR_22 != ((void*)0) )
        {
            VAR_19 = FUNC_13( VAR_10, VAR_22, VAR_11, VAR_12,
                                         VAR_13, VAR_14 + 1, VAR_15, &VAR_20,
                                         VAR_17, VAR_18 );
            if( VAR_19 != 0 )
                return( VAR_19 );
        }
        else
        {
            VAR_19 = FUNC_7( VAR_10, VAR_11, VAR_12, VAR_13,
                                       VAR_14 + 1, VAR_15, &VAR_20,
                                       VAR_17, VAR_18 );
            if( VAR_19 != 0 )
                return( VAR_19 );
        }
    }


    if( ((void*)0) != VAR_17 )
        if( ( VAR_19 = VAR_17( VAR_18, VAR_9, VAR_14, VAR_16 ) ) != 0 )
            return( VAR_19 );

    *VAR_16 |= VAR_20;

    return( 0 );
}
