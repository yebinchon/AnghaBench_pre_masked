
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp_buf ;
struct TYPE_3__ {int md_alg; int key; int subject; int extensions; } ;
typedef TYPE_1__ mbedtls_x509write_csr ;
typedef scalar_t__ mbedtls_pk_type_t ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (unsigned char**,unsigned char*,int ) ;
 int FUNC_3 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_4 (unsigned char**,unsigned char*,int ,int ) ;
 int FUNC_5 (unsigned char**,unsigned char*,int) ;
 int FUNC_6 (int ,unsigned char*,size_t,unsigned char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int ,char const**,size_t*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,unsigned char*,int ,unsigned char*,size_t*,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_11 (int ,unsigned char*,int) ;
 int FUNC_12 (unsigned char**,unsigned char*,int ) ;
 int FUNC_13 (unsigned char**,unsigned char*,int ) ;
 int FUNC_14 (unsigned char**,unsigned char*,char const*,size_t,unsigned char*,size_t) ;
 int FUNC_15 (unsigned char*,unsigned char*,size_t) ;

int FUNC_16( mbedtls_x509write_csr *VAR_9, unsigned char *VAR_10, size_t VAR_11,
                       int (*VAR_12)(void *, unsigned char *, size_t),
                       void *VAR_13 )
{
    int VAR_14;
    const char *VAR_15;
    size_t VAR_16 = 0;
    unsigned char *VAR_17, *VAR_18;
    unsigned char VAR_19[64];
    unsigned char VAR_20[VAR_5];
    unsigned char VAR_21[2048];
    size_t VAR_22 = 0, VAR_23 = 0, VAR_24;
    size_t VAR_25 = 0;
    mbedtls_pk_type_t VAR_26;




    VAR_17 = VAR_21 + sizeof( VAR_21 );

    FUNC_0( VAR_25, FUNC_12( &VAR_17, VAR_21, VAR_9->extensions ) );

    if( VAR_25 )
    {
        FUNC_0( VAR_25, FUNC_3( &VAR_17, VAR_21, VAR_25 ) );
        FUNC_0( VAR_25, FUNC_5( &VAR_17, VAR_21, VAR_0 |
                                                        VAR_2 ) );

        FUNC_0( VAR_25, FUNC_3( &VAR_17, VAR_21, VAR_25 ) );
        FUNC_0( VAR_25, FUNC_5( &VAR_17, VAR_21, VAR_0 |
                                                        VAR_3 ) );

        FUNC_0( VAR_25, FUNC_4( &VAR_17, VAR_21, VAR_6,
                                          FUNC_1( VAR_6 ) ) );

        FUNC_0( VAR_25, FUNC_3( &VAR_17, VAR_21, VAR_25 ) );
        FUNC_0( VAR_25, FUNC_5( &VAR_17, VAR_21, VAR_0 |
                                                        VAR_2 ) );
    }

    FUNC_0( VAR_25, FUNC_3( &VAR_17, VAR_21, VAR_25 ) );
    FUNC_0( VAR_25, FUNC_5( &VAR_17, VAR_21, VAR_0 |
                                                    VAR_1 ) );

    FUNC_0( VAR_22, FUNC_11( VAR_9->key,
                                                VAR_21, VAR_17 - VAR_21 ) );
    VAR_17 -= VAR_22;
    VAR_25 += VAR_22;




    FUNC_0( VAR_25, FUNC_13( &VAR_17, VAR_21, VAR_9->subject ) );




    FUNC_0( VAR_25, FUNC_2( &VAR_17, VAR_21, 0 ) );

    FUNC_0( VAR_25, FUNC_3( &VAR_17, VAR_21, VAR_25 ) );
    FUNC_0( VAR_25, FUNC_5( &VAR_17, VAR_21, VAR_0 |
                                                    VAR_2 ) );




    FUNC_6( FUNC_7( VAR_9->md_alg ), VAR_17, VAR_25, VAR_19 );

    VAR_26 = FUNC_9( VAR_9->key );
    if( VAR_26 == VAR_8 )
        VAR_26 = VAR_7;

    if( ( VAR_14 = FUNC_10( VAR_9->key, VAR_9->md_alg, VAR_19, 0, VAR_20, &VAR_24,
                         VAR_12, VAR_13 ) ) != 0 ||
        ( VAR_14 = FUNC_8( VAR_26, VAR_9->md_alg,
                                        &VAR_15, &VAR_16 ) ) != 0 )
    {
        return( VAR_14 );
    }




    VAR_18 = VAR_10 + VAR_11;
    FUNC_0( VAR_23, FUNC_14( &VAR_18, VAR_10,
                                        VAR_15, VAR_16, VAR_20, VAR_24 ) );

    if( VAR_25 > (size_t)( VAR_18 - VAR_10 ) )
        return( VAR_4 );

    VAR_18 -= VAR_25;
    FUNC_15( VAR_18, VAR_17, VAR_25 );

    VAR_25 += VAR_23;
    FUNC_0( VAR_25, FUNC_3( &VAR_18, VAR_10, VAR_25 ) );
    FUNC_0( VAR_25, FUNC_5( &VAR_18, VAR_10, VAR_0 |
                                                 VAR_2 ) );

    return( (int) VAR_25 );
}
