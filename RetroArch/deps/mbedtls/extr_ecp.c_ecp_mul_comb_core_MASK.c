
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int Z; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
typedef int mbedtls_ecp_group ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int const*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int const*,TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_4 (int const*,TYPE_1__*,TYPE_1__ const*,unsigned char,unsigned char const) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8( const mbedtls_ecp_group *VAR_0, mbedtls_ecp_point *VAR_1,
                              const mbedtls_ecp_point VAR_2[], unsigned char VAR_3,
                              const unsigned char VAR_4[], size_t VAR_5,
                              int (*VAR_6)(void *, unsigned char *, size_t),
                              void *VAR_7 )
{
    int VAR_8;
    mbedtls_ecp_point VAR_9;
    size_t VAR_10;

    FUNC_6( &VAR_9 );


    VAR_10 = VAR_5;
    FUNC_0( FUNC_4( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4[VAR_10] ) );
    FUNC_0( FUNC_7( &VAR_1->Z, 1 ) );
    if( VAR_6 != 0 )
        FUNC_0( FUNC_3( VAR_0, VAR_1, VAR_6, VAR_7 ) );

    while( VAR_10-- != 0 )
    {
        FUNC_0( FUNC_2( VAR_0, VAR_1, VAR_1 ) );
        FUNC_0( FUNC_4( VAR_0, &VAR_9, VAR_2, VAR_3, VAR_4[VAR_10] ) );
        FUNC_0( FUNC_1( VAR_0, VAR_1, VAR_1, &VAR_9 ) );
    }

cleanup:

    FUNC_5( &VAR_9 );

    return( VAR_8 );
}
