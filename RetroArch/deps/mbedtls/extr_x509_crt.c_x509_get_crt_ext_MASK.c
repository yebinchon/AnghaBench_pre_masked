
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ext_types; int ns_cert_type; int subject_alt_names; int ext_key_usage; int key_usage; int max_pathlen; int ca_istrue; int v3_ext; } ;
typedef TYPE_1__ mbedtls_x509_crt ;
struct TYPE_6__ {unsigned char tag; size_t len; unsigned char* p; int * member_2; int member_1; int member_0; } ;
typedef TYPE_2__ mbedtls_x509_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int FUNC_0 (unsigned char**,unsigned char*,int*) ;
 int FUNC_1 (unsigned char**,unsigned char const*,size_t*,int) ;
 int FUNC_2 (TYPE_2__*,int*) ;
 int FUNC_3 (unsigned char**,unsigned char const*,int *,int) ;
 int FUNC_4 (unsigned char**,unsigned char*,int *,int *) ;
 int FUNC_5 (unsigned char**,unsigned char*,int *) ;
 int FUNC_6 (unsigned char**,unsigned char*,int *) ;
 int FUNC_7 (unsigned char**,unsigned char*,int *) ;
 int FUNC_8 (unsigned char**,unsigned char*,int *) ;

__attribute__((used)) static int FUNC_9( unsigned char **VAR_9,
                             const unsigned char *VAR_10,
                             mbedtls_x509_crt *VAR_11 )
{
    int VAR_12;
    size_t VAR_13;
    unsigned char *VAR_14, *VAR_15;

    if( ( VAR_12 = FUNC_3( VAR_9, VAR_10, &VAR_11->v3_ext, 3 ) ) != 0 )
    {
        if( VAR_12 == VAR_6 )
            return( 0 );

        return( VAR_12 );
    }

    while( *VAR_9 < VAR_10 )
    {






        mbedtls_x509_buf VAR_16 = {0, 0, ((void*)0)};
        int VAR_17 = 0;
        int VAR_18 = 0;

        if( ( VAR_12 = FUNC_1( VAR_9, VAR_10, &VAR_13,
                VAR_0 | VAR_3 ) ) != 0 )
            return( VAR_8 + VAR_12 );

        VAR_14 = *VAR_9 + VAR_13;


        VAR_16.tag = **VAR_9;

        if( ( VAR_12 = FUNC_1( VAR_9, VAR_10, &VAR_16.len, VAR_2 ) ) != 0 )
            return( VAR_8 + VAR_12 );

        VAR_16.p = *VAR_9;
        *VAR_9 += VAR_16.len;

        if( ( VAR_10 - *VAR_9 ) < 1 )
            return( VAR_8 +
                    VAR_5 );


        if( ( VAR_12 = FUNC_0( VAR_9, VAR_14, &VAR_17 ) ) != 0 &&
            ( VAR_12 != VAR_6 ) )
            return( VAR_8 + VAR_12 );


        if( ( VAR_12 = FUNC_1( VAR_9, VAR_14, &VAR_13,
                VAR_1 ) ) != 0 )
            return( VAR_8 + VAR_12 );

        VAR_15 = *VAR_9 + VAR_13;

        if( VAR_15 != VAR_14 )
            return( VAR_8 +
                    VAR_4 );




        VAR_12 = FUNC_2( &VAR_16, &VAR_18 );

        if( VAR_12 != 0 )
        {

            *VAR_9 = VAR_15;


            if( VAR_17 )
            {

                return( VAR_8 +
                        VAR_6 );
            }

            continue;
        }


        if( ( VAR_11->ext_types & VAR_18 ) != 0 )
            return( VAR_8 );

        VAR_11->ext_types |= VAR_18;

        switch( VAR_18 )
        {
        case 132:

            if( ( VAR_12 = FUNC_4( VAR_9, VAR_15,
                    &VAR_11->ca_istrue, &VAR_11->max_pathlen ) ) != 0 )
                return( VAR_12 );
            break;

        case 130:

            if( ( VAR_12 = FUNC_6( VAR_9, VAR_15,
                    &VAR_11->key_usage ) ) != 0 )
                return( VAR_12 );
            break;

        case 131:

            if( ( VAR_12 = FUNC_5( VAR_9, VAR_15,
                    &VAR_11->ext_key_usage ) ) != 0 )
                return( VAR_12 );
            break;

        case 128:

            if( ( VAR_12 = FUNC_8( VAR_9, VAR_15,
                    &VAR_11->subject_alt_names ) ) != 0 )
                return( VAR_12 );
            break;

        case 129:

            if( ( VAR_12 = FUNC_7( VAR_9, VAR_15,
                    &VAR_11->ns_cert_type ) ) != 0 )
                return( VAR_12 );
            break;

        default:
            return( VAR_7 );
        }
    }

    if( *VAR_9 != VAR_10 )
        return( VAR_8 +
                VAR_4 );

    return( 0 );
}
