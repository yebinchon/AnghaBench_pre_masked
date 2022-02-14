
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ len; int p; } ;
struct TYPE_15__ {unsigned char* p; int len; } ;
struct TYPE_18__ {unsigned char* p; int len; } ;
struct TYPE_17__ {unsigned char* p; int len; } ;
struct TYPE_16__ {int len; unsigned char* p; } ;
struct TYPE_19__ {int version; int sig; TYPE_6__ sig_oid; int subject_id; int issuer_id; int pk; TYPE_1__ subject_raw; int subject; int valid_to; int valid_from; TYPE_4__ issuer_raw; int issuer; int sig_opts; int sig_pk; int sig_md; int serial; TYPE_3__ tbs; TYPE_2__ raw; } ;
typedef TYPE_5__ mbedtls_x509_crt ;
typedef TYPE_6__ mbedtls_x509_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned char**,unsigned char*,size_t*,int) ;
 unsigned char* FUNC_1 (int,int) ;
 int FUNC_2 (unsigned char**,unsigned char*,int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (unsigned char**,unsigned char*,TYPE_6__*,TYPE_6__*) ;
 int FUNC_5 (unsigned char**,unsigned char*,int *) ;
 int FUNC_6 (unsigned char**,unsigned char*,int *) ;
 int FUNC_7 (unsigned char**,unsigned char*,int *) ;
 int FUNC_8 (TYPE_6__*,TYPE_6__*,int *,int *,int *) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (unsigned char*,unsigned char const*,int) ;
 int FUNC_11 (TYPE_6__*,int ,int) ;
 int FUNC_12 (unsigned char**,unsigned char*,TYPE_5__*) ;
 int FUNC_13 (unsigned char**,unsigned char*,int *,int *) ;
 int FUNC_14 (unsigned char**,unsigned char*,int *,int) ;
 int FUNC_15 (unsigned char**,unsigned char*,int*) ;

__attribute__((used)) static int FUNC_16( mbedtls_x509_crt *VAR_8, const unsigned char *VAR_9,
                                    size_t VAR_10 )
{
    int VAR_11;
    size_t VAR_12;
    unsigned char *VAR_13, *VAR_14, *VAR_15;
    mbedtls_x509_buf VAR_16, VAR_17, VAR_18;

    FUNC_11( &VAR_16, 0, sizeof( mbedtls_x509_buf ) );
    FUNC_11( &VAR_17, 0, sizeof( mbedtls_x509_buf ) );
    FUNC_11( &VAR_18, 0, sizeof( mbedtls_x509_buf ) );




    if( VAR_8 == ((void*)0) || VAR_9 == ((void*)0) )
        return( VAR_4 );


    VAR_13 = (unsigned char*) VAR_9;
    VAR_12 = VAR_10;
    VAR_14 = VAR_13 + VAR_12;







    if( ( VAR_11 = FUNC_0( &VAR_13, VAR_14, &VAR_12,
            VAR_0 | VAR_1 ) ) != 0 )
    {
        FUNC_3( VAR_8 );
        return( VAR_5 );
    }

    if( VAR_12 > (size_t) ( VAR_14 - VAR_13 ) )
    {
        FUNC_3( VAR_8 );
        return( VAR_5 +
                VAR_2 );
    }
    VAR_15 = VAR_13 + VAR_12;


    VAR_8->raw.len = VAR_15 - VAR_9;
    VAR_8->raw.p = VAR_13 = FUNC_1( 1, VAR_8->raw.len );
    if( VAR_13 == ((void*)0) )
        return( VAR_3 );

    FUNC_10( VAR_13, VAR_9, VAR_8->raw.len );


    VAR_13 += VAR_8->raw.len - VAR_12;
    VAR_14 = VAR_15 = VAR_13 + VAR_12;




    VAR_8->tbs.p = VAR_13;

    if( ( VAR_11 = FUNC_0( &VAR_13, VAR_14, &VAR_12,
            VAR_0 | VAR_1 ) ) != 0 )
    {
        FUNC_3( VAR_8 );
        return( VAR_5 + VAR_11 );
    }

    VAR_14 = VAR_13 + VAR_12;
    VAR_8->tbs.len = VAR_14 - VAR_8->tbs.p;
    if( ( VAR_11 = FUNC_15( &VAR_13, VAR_14, &VAR_8->version ) ) != 0 ||
        ( VAR_11 = FUNC_6( &VAR_13, VAR_14, &VAR_8->serial ) ) != 0 ||
        ( VAR_11 = FUNC_4( &VAR_13, VAR_14, &VAR_8->sig_oid,
                                            &VAR_16 ) ) != 0 )
    {
        FUNC_3( VAR_8 );
        return( VAR_11 );
    }

    VAR_8->version++;

    if( VAR_8->version > 3 )
    {
        FUNC_3( VAR_8 );
        return( VAR_7 );
    }

    if( ( VAR_11 = FUNC_8( &VAR_8->sig_oid, &VAR_16,
                                  &VAR_8->sig_md, &VAR_8->sig_pk,
                                  &VAR_8->sig_opts ) ) != 0 )
    {
        FUNC_3( VAR_8 );
        return( VAR_11 );
    }




    VAR_8->issuer_raw.p = VAR_13;

    if( ( VAR_11 = FUNC_0( &VAR_13, VAR_14, &VAR_12,
            VAR_0 | VAR_1 ) ) != 0 )
    {
        FUNC_3( VAR_8 );
        return( VAR_5 + VAR_11 );
    }

    if( ( VAR_11 = FUNC_5( &VAR_13, VAR_13 + VAR_12, &VAR_8->issuer ) ) != 0 )
    {
        FUNC_3( VAR_8 );
        return( VAR_11 );
    }

    VAR_8->issuer_raw.len = VAR_13 - VAR_8->issuer_raw.p;







    if( ( VAR_11 = FUNC_13( &VAR_13, VAR_14, &VAR_8->valid_from,
                                         &VAR_8->valid_to ) ) != 0 )
    {
        FUNC_3( VAR_8 );
        return( VAR_11 );
    }




    VAR_8->subject_raw.p = VAR_13;

    if( ( VAR_11 = FUNC_0( &VAR_13, VAR_14, &VAR_12,
            VAR_0 | VAR_1 ) ) != 0 )
    {
        FUNC_3( VAR_8 );
        return( VAR_5 + VAR_11 );
    }

    if( VAR_12 && ( VAR_11 = FUNC_5( &VAR_13, VAR_13 + VAR_12, &VAR_8->subject ) ) != 0 )
    {
        FUNC_3( VAR_8 );
        return( VAR_11 );
    }

    VAR_8->subject_raw.len = VAR_13 - VAR_8->subject_raw.p;




    if( ( VAR_11 = FUNC_2( &VAR_13, VAR_14, &VAR_8->pk ) ) != 0 )
    {
        FUNC_3( VAR_8 );
        return( VAR_11 );
    }
    if( VAR_8->version == 2 || VAR_8->version == 3 )
    {
        VAR_11 = FUNC_14( &VAR_13, VAR_14, &VAR_8->issuer_id, 1 );
        if( VAR_11 != 0 )
        {
            FUNC_3( VAR_8 );
            return( VAR_11 );
        }
    }

    if( VAR_8->version == 2 || VAR_8->version == 3 )
    {
        VAR_11 = FUNC_14( &VAR_13, VAR_14, &VAR_8->subject_id, 2 );
        if( VAR_11 != 0 )
        {
            FUNC_3( VAR_8 );
            return( VAR_11 );
        }
    }


    if( VAR_8->version == 3 )

    {
        VAR_11 = FUNC_12( &VAR_13, VAR_14, VAR_8 );
        if( VAR_11 != 0 )
        {
            FUNC_3( VAR_8 );
            return( VAR_11 );
        }
    }

    if( VAR_13 != VAR_14 )
    {
        FUNC_3( VAR_8 );
        return( VAR_5 +
                VAR_2 );
    }

    VAR_14 = VAR_15;
    if( ( VAR_11 = FUNC_4( &VAR_13, VAR_14, &VAR_18, &VAR_17 ) ) != 0 )
    {
        FUNC_3( VAR_8 );
        return( VAR_11 );
    }

    if( VAR_8->sig_oid.len != VAR_18 ||
        FUNC_9( VAR_8->sig_oid.p, VAR_18, VAR_8->sig_oid.len ) != 0 ||
        VAR_16 != VAR_17 ||
        ( VAR_16 != 0 &&
          FUNC_9( VAR_16, VAR_17, VAR_16 ) != 0 ) )
    {
        FUNC_3( VAR_8 );
        return( VAR_6 );
    }

    if( ( VAR_11 = FUNC_7( &VAR_13, VAR_14, &VAR_8->sig ) ) != 0 )
    {
        FUNC_3( VAR_8 );
        return( VAR_11 );
    }

    if( VAR_13 != VAR_14 )
    {
        FUNC_3( VAR_8 );
        return( VAR_5 +
                VAR_2 );
    }

    return( 0 );
}
