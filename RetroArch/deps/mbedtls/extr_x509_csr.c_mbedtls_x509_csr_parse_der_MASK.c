
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {unsigned char* p; size_t len; } ;
struct TYPE_9__ {unsigned char* p; int len; } ;
struct TYPE_8__ {unsigned char* p; int len; } ;
struct TYPE_11__ {int version; int sig; int sig_opts; int sig_pk; int sig_md; int sig_oid; TYPE_3__ raw; int pk; TYPE_2__ subject_raw; int subject; TYPE_1__ cri; } ;
typedef TYPE_4__ mbedtls_x509_csr ;
typedef int mbedtls_x509_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned char**,unsigned char*,size_t*,int) ;
 unsigned char* FUNC_1 (int,size_t) ;
 int FUNC_2 (unsigned char**,unsigned char*,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (unsigned char**,unsigned char*,int *,int *) ;
 int FUNC_6 (unsigned char**,unsigned char*,int *) ;
 int FUNC_7 (unsigned char**,unsigned char*,int *) ;
 int FUNC_8 (int *,int *,int *,int *,int *) ;
 int FUNC_9 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (unsigned char**,unsigned char*,int*) ;

int FUNC_12( mbedtls_x509_csr *VAR_9,
                        const unsigned char *VAR_10, size_t VAR_11 )
{
    int VAR_12;
    size_t VAR_13;
    unsigned char *VAR_14, *VAR_15;
    mbedtls_x509_buf VAR_16;

    FUNC_10( &VAR_16, 0, sizeof( mbedtls_x509_buf ) );




    if( VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == 0 )
        return( VAR_5 );

    FUNC_4( VAR_9 );




    VAR_14 = FUNC_1( 1, VAR_13 = VAR_11 );

    if( VAR_14 == ((void*)0) )
        return( VAR_4 );

    FUNC_9( VAR_14, VAR_10, VAR_11 );

    VAR_9->raw.p = VAR_14;
    VAR_9->raw.len = VAR_13;
    VAR_15 = VAR_14 + VAR_13;
    if( ( VAR_12 = FUNC_0( &VAR_14, VAR_15, &VAR_13,
            VAR_0 | VAR_2 ) ) != 0 )
    {
        FUNC_3( VAR_9 );
        return( VAR_6 );
    }

    if( VAR_13 != (size_t) ( VAR_15 - VAR_14 ) )
    {
        FUNC_3( VAR_9 );
        return( VAR_6 +
                VAR_3 );
    }




    VAR_9->cri.p = VAR_14;

    if( ( VAR_12 = FUNC_0( &VAR_14, VAR_15, &VAR_13,
            VAR_0 | VAR_2 ) ) != 0 )
    {
        FUNC_3( VAR_9 );
        return( VAR_6 + VAR_12 );
    }

    VAR_15 = VAR_14 + VAR_13;
    VAR_9->cri.len = VAR_15 - VAR_9->cri.p;




    if( ( VAR_12 = FUNC_11( &VAR_14, VAR_15, &VAR_9->version ) ) != 0 )
    {
        FUNC_3( VAR_9 );
        return( VAR_12 );
    }

    VAR_9->version++;

    if( VAR_9->version != 1 )
    {
        FUNC_3( VAR_9 );
        return( VAR_8 );
    }




    VAR_9->subject_raw.p = VAR_14;

    if( ( VAR_12 = FUNC_0( &VAR_14, VAR_15, &VAR_13,
            VAR_0 | VAR_2 ) ) != 0 )
    {
        FUNC_3( VAR_9 );
        return( VAR_6 + VAR_12 );
    }

    if( ( VAR_12 = FUNC_6( &VAR_14, VAR_14 + VAR_13, &VAR_9->subject ) ) != 0 )
    {
        FUNC_3( VAR_9 );
        return( VAR_12 );
    }

    VAR_9->subject_raw.len = VAR_14 - VAR_9->subject_raw.p;




    if( ( VAR_12 = FUNC_2( &VAR_14, VAR_15, &VAR_9->pk ) ) != 0 )
    {
        FUNC_3( VAR_9 );
        return( VAR_12 );
    }
    if( ( VAR_12 = FUNC_0( &VAR_14, VAR_15, &VAR_13,
            VAR_0 | VAR_1 ) ) != 0 )
    {
        FUNC_3( VAR_9 );
        return( VAR_6 + VAR_12 );
    }

    VAR_14 += VAR_13;

    VAR_15 = VAR_9->raw.p + VAR_9->raw.len;





    if( ( VAR_12 = FUNC_5( &VAR_14, VAR_15, &VAR_9->sig_oid, &VAR_16 ) ) != 0 )
    {
        FUNC_3( VAR_9 );
        return( VAR_12 );
    }

    if( ( VAR_12 = FUNC_8( &VAR_9->sig_oid, &VAR_16,
                                  &VAR_9->sig_md, &VAR_9->sig_pk,
                                  &VAR_9->sig_opts ) ) != 0 )
    {
        FUNC_3( VAR_9 );
        return( VAR_7 );
    }

    if( ( VAR_12 = FUNC_7( &VAR_14, VAR_15, &VAR_9->sig ) ) != 0 )
    {
        FUNC_3( VAR_9 );
        return( VAR_12 );
    }

    if( VAR_14 != VAR_15 )
    {
        FUNC_3( VAR_9 );
        return( VAR_6 +
                VAR_3 );
    }

    return( 0 );
}
