
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ len; int p; } ;
struct TYPE_14__ {unsigned char* p; size_t len; } ;
struct TYPE_16__ {unsigned char* p; int len; } ;
struct TYPE_15__ {unsigned char* p; int len; } ;
struct TYPE_17__ {int version; int sig; TYPE_5__ sig_oid; TYPE_1__ raw; int crl_ext; int entry; int next_update; int this_update; TYPE_3__ issuer_raw; int issuer; int sig_opts; int sig_pk; int sig_md; TYPE_2__ tbs; struct TYPE_17__* next; } ;
typedef TYPE_4__ mbedtls_x509_crl ;
typedef TYPE_5__ mbedtls_x509_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (unsigned char**,unsigned char*,size_t*,int) ;
 void* FUNC_1 (int,size_t) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (unsigned char**,unsigned char*,TYPE_5__*,TYPE_5__*) ;
 int FUNC_5 (unsigned char**,unsigned char*,int *) ;
 int FUNC_6 (unsigned char**,unsigned char*,int *) ;
 int FUNC_7 (TYPE_5__*,TYPE_5__*,int *,int *,int *) ;
 int FUNC_8 (unsigned char**,unsigned char*,int *) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_11 (TYPE_5__*,int ,int) ;
 int FUNC_12 (unsigned char**,unsigned char*,int*) ;
 int FUNC_13 (unsigned char**,unsigned char*,int *) ;
 int FUNC_14 (unsigned char**,unsigned char*,int *) ;

int FUNC_15( mbedtls_x509_crl *VAR_12,
                        const unsigned char *VAR_13, size_t VAR_14 )
{
    int VAR_15;
    size_t VAR_16;
    unsigned char *VAR_17, *VAR_18;
    mbedtls_x509_buf VAR_19, VAR_20, VAR_21;
    mbedtls_x509_crl *VAR_22 = VAR_12;




    if( VAR_22 == ((void*)0) || VAR_13 == ((void*)0) )
        return( VAR_6 );

    FUNC_11( &VAR_19, 0, sizeof( mbedtls_x509_buf ) );
    FUNC_11( &VAR_20, 0, sizeof( mbedtls_x509_buf ) );
    FUNC_11( &VAR_21, 0, sizeof( mbedtls_x509_buf ) );




    while( VAR_22->version != 0 && VAR_22->next != ((void*)0) )
        VAR_22 = VAR_22->next;

    if( VAR_22->version != 0 && VAR_22->next == ((void*)0) )
    {
        VAR_22->next = FUNC_1( 1, sizeof( mbedtls_x509_crl ) );

        if( VAR_22->next == ((void*)0) )
        {
            FUNC_2( VAR_22 );
            return( VAR_5 );
        }

        FUNC_3( VAR_22->next );
        VAR_22 = VAR_22->next;
    }




    if( ( VAR_17 = FUNC_1( 1, VAR_14 ) ) == ((void*)0) )
        return( VAR_5 );

    FUNC_10( VAR_17, VAR_13, VAR_14 );

    VAR_22->raw.p = VAR_17;
    VAR_22->raw.len = VAR_14;

    VAR_18 = VAR_17 + VAR_14;







    if( ( VAR_15 = FUNC_0( &VAR_17, VAR_18, &VAR_16,
            VAR_0 | VAR_1 ) ) != 0 )
    {
        FUNC_2( VAR_22 );
        return( VAR_8 );
    }

    if( VAR_16 != (size_t) ( VAR_18 - VAR_17 ) )
    {
        FUNC_2( VAR_22 );
        return( VAR_8 +
                VAR_2 );
    }




    VAR_22->tbs.p = VAR_17;

    if( ( VAR_15 = FUNC_0( &VAR_17, VAR_18, &VAR_16,
            VAR_0 | VAR_1 ) ) != 0 )
    {
        FUNC_2( VAR_22 );
        return( VAR_8 + VAR_15 );
    }

    VAR_18 = VAR_17 + VAR_16;
    VAR_22->tbs.len = VAR_18 - VAR_22->tbs.p;







    if( ( VAR_15 = FUNC_12( &VAR_17, VAR_18, &VAR_22->version ) ) != 0 ||
        ( VAR_15 = FUNC_4( &VAR_17, VAR_18, &VAR_22->sig_oid, &VAR_19 ) ) != 0 )
    {
        FUNC_2( VAR_22 );
        return( VAR_15 );
    }

    VAR_22->version++;

    if( VAR_22->version > 2 )
    {
        FUNC_2( VAR_22 );
        return( VAR_11 );
    }

    if( ( VAR_15 = FUNC_7( &VAR_22->sig_oid, &VAR_19,
                                  &VAR_22->sig_md, &VAR_22->sig_pk,
                                  &VAR_22->sig_opts ) ) != 0 )
    {
        FUNC_2( VAR_22 );
        return( VAR_10 );
    }




    VAR_22->issuer_raw.p = VAR_17;

    if( ( VAR_15 = FUNC_0( &VAR_17, VAR_18, &VAR_16,
            VAR_0 | VAR_1 ) ) != 0 )
    {
        FUNC_2( VAR_22 );
        return( VAR_8 + VAR_15 );
    }

    if( ( VAR_15 = FUNC_5( &VAR_17, VAR_17 + VAR_16, &VAR_22->issuer ) ) != 0 )
    {
        FUNC_2( VAR_22 );
        return( VAR_15 );
    }

    VAR_22->issuer_raw.len = VAR_17 - VAR_22->issuer_raw.p;





    if( ( VAR_15 = FUNC_8( &VAR_17, VAR_18, &VAR_22->this_update ) ) != 0 )
    {
        FUNC_2( VAR_22 );
        return( VAR_15 );
    }

    if( ( VAR_15 = FUNC_8( &VAR_17, VAR_18, &VAR_22->next_update ) ) != 0 )
    {
        if( VAR_15 != ( VAR_7 +
                        VAR_4 ) &&
            VAR_15 != ( VAR_7 +
                        VAR_3 ) )
        {
            FUNC_2( VAR_22 );
            return( VAR_15 );
        }
    }
    if( ( VAR_15 = FUNC_14( &VAR_17, VAR_18, &VAR_22->entry ) ) != 0 )
    {
        FUNC_2( VAR_22 );
        return( VAR_15 );
    }





    if( VAR_22->version == 2 )
    {
        VAR_15 = FUNC_13( &VAR_17, VAR_18, &VAR_22->crl_ext );

        if( VAR_15 != 0 )
        {
            FUNC_2( VAR_22 );
            return( VAR_15 );
        }
    }

    if( VAR_17 != VAR_18 )
    {
        FUNC_2( VAR_22 );
        return( VAR_8 +
                VAR_2 );
    }

    VAR_18 = VAR_22->raw.p + VAR_22->raw.len;





    if( ( VAR_15 = FUNC_4( &VAR_17, VAR_18, &VAR_21, &VAR_20 ) ) != 0 )
    {
        FUNC_2( VAR_22 );
        return( VAR_15 );
    }

    if( VAR_22->sig_oid.len != VAR_21 ||
        FUNC_9( VAR_22->sig_oid.p, VAR_21, VAR_22->sig_oid.len ) != 0 ||
        VAR_19 != VAR_20 ||
        ( VAR_19 != 0 &&
          FUNC_9( VAR_19, VAR_20, VAR_19 ) != 0 ) )
    {
        FUNC_2( VAR_22 );
        return( VAR_9 );
    }

    if( ( VAR_15 = FUNC_6( &VAR_17, VAR_18, &VAR_22->sig ) ) != 0 )
    {
        FUNC_2( VAR_22 );
        return( VAR_15 );
    }

    if( VAR_17 != VAR_18 )
    {
        FUNC_2( VAR_22 );
        return( VAR_8 +
                VAR_2 );
    }

    return( 0 );
}
