
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp_buf ;
struct TYPE_3__ {int md_alg; int issuer_key; int version; int serial; int issuer; int not_before; int not_after; int subject; int subject_key; int extensions; } ;
typedef TYPE_1__ mbedtls_x509write_cert ;
typedef scalar_t__ mbedtls_pk_type_t ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned char**,unsigned char*,char const*,int ,int ) ;
 int FUNC_2 (unsigned char**,unsigned char*,int ) ;
 int FUNC_3 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_4 (unsigned char**,unsigned char*,int *) ;
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
 int FUNC_16 (char const*) ;
 int FUNC_17 (unsigned char**,unsigned char*,int ,int ) ;

int FUNC_18( mbedtls_x509write_cert *VAR_8, unsigned char *VAR_9, size_t VAR_10,
                       int (*VAR_11)(void *, unsigned char *, size_t),
                       void *VAR_12 )
{
    int VAR_13;
    const char *VAR_14;
    size_t VAR_15 = 0;
    unsigned char *VAR_16, *VAR_17;
    unsigned char VAR_18[64];
    unsigned char VAR_19[VAR_4];
    unsigned char VAR_20[2048];
    size_t VAR_21 = 0, VAR_22 = 0, VAR_23 = 0, VAR_24;
    size_t VAR_25 = 0;
    mbedtls_pk_type_t VAR_26;




    VAR_16 = VAR_20 + sizeof( VAR_20 );


    VAR_26 = FUNC_9( VAR_8->issuer_key );
    if( VAR_26 == VAR_6 )
        VAR_26 = VAR_5;

    if( ( VAR_13 = FUNC_8( VAR_26, VAR_8->md_alg,
                                        &VAR_14, &VAR_15 ) ) != 0 )
    {
        return( VAR_13 );
    }




    FUNC_0( VAR_25, FUNC_12( &VAR_16, VAR_20, VAR_8->extensions ) );
    FUNC_0( VAR_25, FUNC_3( &VAR_16, VAR_20, VAR_25 ) );
    FUNC_0( VAR_25, FUNC_5( &VAR_16, VAR_20, VAR_0 |
                                                    VAR_2 ) );
    FUNC_0( VAR_25, FUNC_3( &VAR_16, VAR_20, VAR_25 ) );
    FUNC_0( VAR_25, FUNC_5( &VAR_16, VAR_20, VAR_1 |
                                                    VAR_0 | 3 ) );




    FUNC_0( VAR_22, FUNC_11( VAR_8->subject_key,
                                                VAR_20, VAR_16 - VAR_20 ) );
    VAR_16 -= VAR_22;
    VAR_25 += VAR_22;




    FUNC_0( VAR_25, FUNC_13( &VAR_16, VAR_20, VAR_8->subject ) );






    VAR_21 = 0;

    FUNC_0( VAR_21, FUNC_17( &VAR_16, VAR_20, VAR_8->not_after,
                                            VAR_7 ) );

    FUNC_0( VAR_21, FUNC_17( &VAR_16, VAR_20, VAR_8->not_before,
                                            VAR_7 ) );

    VAR_25 += VAR_21;
    FUNC_0( VAR_25, FUNC_3( &VAR_16, VAR_20, VAR_21 ) );
    FUNC_0( VAR_25, FUNC_5( &VAR_16, VAR_20, VAR_0 |
                                                    VAR_2 ) );




    FUNC_0( VAR_25, FUNC_13( &VAR_16, VAR_20, VAR_8->issuer ) );




    FUNC_0( VAR_25, FUNC_1( &VAR_16, VAR_20,
                       VAR_14, FUNC_16( VAR_14 ), 0 ) );




    FUNC_0( VAR_25, FUNC_4( &VAR_16, VAR_20, &VAR_8->serial ) );




    VAR_21 = 0;
    FUNC_0( VAR_21, FUNC_2( &VAR_16, VAR_20, VAR_8->version ) );
    VAR_25 += VAR_21;
    FUNC_0( VAR_25, FUNC_3( &VAR_16, VAR_20, VAR_21 ) );
    FUNC_0( VAR_25, FUNC_5( &VAR_16, VAR_20, VAR_1 |
                                                    VAR_0 | 0 ) );

    FUNC_0( VAR_25, FUNC_3( &VAR_16, VAR_20, VAR_25 ) );
    FUNC_0( VAR_25, FUNC_5( &VAR_16, VAR_20, VAR_0 |
                                                    VAR_2 ) );




    FUNC_6( FUNC_7( VAR_8->md_alg ), VAR_16, VAR_25, VAR_18 );

    if( ( VAR_13 = FUNC_10( VAR_8->issuer_key, VAR_8->md_alg, VAR_18, 0, VAR_19, &VAR_24,
                         VAR_11, VAR_12 ) ) != 0 )
    {
        return( VAR_13 );
    }




    VAR_17 = VAR_9 + VAR_10;
    FUNC_0( VAR_23, FUNC_14( &VAR_17, VAR_9,
                                        VAR_14, VAR_15, VAR_19, VAR_24 ) );

    if( VAR_25 > (size_t)( VAR_17 - VAR_9 ) )
        return( VAR_3 );

    VAR_17 -= VAR_25;
    FUNC_15( VAR_17, VAR_16, VAR_25 );

    VAR_25 += VAR_23;
    FUNC_0( VAR_25, FUNC_3( &VAR_17, VAR_9, VAR_25 ) );
    FUNC_0( VAR_25, FUNC_5( &VAR_17, VAR_9, VAR_0 |
                                                 VAR_2 ) );

    return( (int) VAR_25 );
}
