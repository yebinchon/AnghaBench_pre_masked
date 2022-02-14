
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef int uint32_t ;
struct TYPE_18__ {size_t len; char const* p; } ;
struct TYPE_19__ {struct TYPE_19__* next; TYPE_14__ buf; } ;
typedef TYPE_1__ mbedtls_x509_sequence ;
struct TYPE_20__ {struct TYPE_20__* next; TYPE_14__ val; int oid; } ;
typedef TYPE_2__ mbedtls_x509_name ;
typedef int mbedtls_x509_crt_profile ;
struct TYPE_21__ {int ext_types; struct TYPE_21__* next; int pk; TYPE_1__ subject_alt_names; TYPE_2__ subject; } ;
typedef TYPE_3__ mbedtls_x509_crt ;
typedef int mbedtls_x509_crl ;
typedef int mbedtls_pk_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 size_t FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,TYPE_14__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,TYPE_3__*,int ,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*,TYPE_3__*,int *,int const*,int,int,int *,int (*) (void*,TYPE_3__*,int,int *),void*) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*,int *,int const*,int,int,int *,int (*) (void*,TYPE_3__*,int,int *),void*) ;
 scalar_t__ FUNC_8 (char const*,char const*,size_t) ;
 scalar_t__ FUNC_9 (int const*,int ,int *) ;
 scalar_t__ FUNC_10 (int const*,int ) ;

int FUNC_11( mbedtls_x509_crt *VAR_7,
                     mbedtls_x509_crt *VAR_8,
                     mbedtls_x509_crl *VAR_9,
                     const mbedtls_x509_crt_profile *VAR_10,
                     const char *VAR_11, uint32_t *VAR_12,
                     int (*VAR_13)(void *, mbedtls_x509_crt *, int, uint32_t *),
                     void *VAR_14 )
{
    size_t VAR_15;
    int VAR_16;
    int VAR_17 = 0, VAR_18 = 0;
    mbedtls_x509_crt *VAR_19;
    mbedtls_x509_name *VAR_20;
    mbedtls_x509_sequence *VAR_21 = ((void*)0);
    mbedtls_pk_type_t VAR_22;

    if( VAR_10 == ((void*)0) )
        return( VAR_0 );

    *VAR_12 = 0;

    if( VAR_11 != ((void*)0) )
    {
        VAR_20 = &VAR_7->subject;
        VAR_15 = FUNC_3( VAR_11 );

        if( VAR_7->ext_types & VAR_6 )
        {
            VAR_21 = &VAR_7->subject_alt_names;

            while( VAR_21 != ((void*)0) )
            {
                if( VAR_21->buf.len == VAR_15 &&
                    FUNC_8( VAR_11, VAR_21->buf.p, VAR_15 ) == 0 )
                    break;

                if( VAR_21->buf.len > 2 &&
                    FUNC_2( VAR_21->buf.p, "*.", 2 ) == 0 &&
                    FUNC_4( VAR_11, &VAR_21->buf ) == 0 )
                {
                    break;
                }

                VAR_21 = VAR_21->next;
            }

            if( VAR_21 == ((void*)0) )
                *VAR_12 |= VAR_5;
        }
        else
        {
            while( VAR_20 != ((void*)0) )
            {
                if( FUNC_0( VAR_2, &VAR_20->oid ) == 0 )
                {
                    if( VAR_20->val.len == VAR_15 &&
                        FUNC_8( VAR_20->val.p, VAR_11, VAR_15 ) == 0 )
                        break;

                    if( VAR_20->val.len > 2 &&
                        FUNC_2( VAR_20->val.p, "*.", 2 ) == 0 &&
                        FUNC_4( VAR_11, &VAR_20->val ) == 0 )
                        break;
                }

                VAR_20 = VAR_20->next;
            }

            if( VAR_20 == ((void*)0) )
                *VAR_12 |= VAR_5;
        }
    }


    VAR_22 = FUNC_1( &VAR_7->pk );

    if( FUNC_10( VAR_10, VAR_22 ) != 0 )
        *VAR_12 |= VAR_4;

    if( FUNC_9( VAR_10, VAR_22, &VAR_7->pk ) != 0 )
        *VAR_12 |= VAR_3;


    for( VAR_19 = VAR_8; VAR_19 != ((void*)0); VAR_19 = VAR_19->next )
    {
        if( FUNC_5( VAR_7, VAR_19, 0, VAR_17 == 0 ) == 0 )
            break;
    }

    if( VAR_19 != ((void*)0) )
    {
        VAR_16 = FUNC_7( VAR_7, VAR_19, VAR_9, VAR_10,
                                   VAR_17, VAR_18, VAR_12, VAR_13, VAR_14 );
        if( VAR_16 != 0 )
            return( VAR_16 );
    }
    else
    {

        for( VAR_19 = VAR_7->next; VAR_19 != ((void*)0); VAR_19 = VAR_19->next )
            if( FUNC_5( VAR_7, VAR_19, 0, VAR_17 == 0 ) == 0 )
                break;


        if( VAR_19 != ((void*)0) )
        {
            VAR_16 = FUNC_6( VAR_7, VAR_19, VAR_8, VAR_9, VAR_10,
                                         VAR_17, VAR_18, VAR_12, VAR_13, VAR_14 );
            if( VAR_16 != 0 )
                return( VAR_16 );
        }
        else
        {
            VAR_16 = FUNC_7( VAR_7, VAR_8, VAR_9, VAR_10,
                                       VAR_17, VAR_18, VAR_12, VAR_13, VAR_14 );
            if( VAR_16 != 0 )
                return( VAR_16 );
        }
    }

    if( *VAR_12 != 0 )
        return( VAR_1 );

    return( 0 );
}
