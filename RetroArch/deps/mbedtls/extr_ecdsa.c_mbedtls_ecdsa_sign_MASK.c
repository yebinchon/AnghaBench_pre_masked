
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int const mbedtls_mpi ;
struct TYPE_12__ {int const X; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
struct TYPE_14__ {int * p; } ;
struct TYPE_13__ {int nbits; TYPE_3__ N; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int const*,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_2__*,int const*,TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int const*,int const*,int const*) ;
 scalar_t__ FUNC_6 (int const*,int) ;
 scalar_t__ FUNC_7 (int const*,TYPE_3__*) ;
 int FUNC_8 (int const*,size_t,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*,int const*,TYPE_3__*) ;
 int FUNC_12 (int const*,int const*,TYPE_3__*) ;
 int FUNC_13 (int const*,int const*,int const*) ;
 int FUNC_14 (int const*,int) ;

int FUNC_15( mbedtls_ecp_group *VAR_2, mbedtls_mpi *VAR_3, mbedtls_mpi *VAR_4,
                const mbedtls_mpi *VAR_5, const unsigned char *VAR_6, size_t VAR_7,
                int (*VAR_8)(void *, unsigned char *, size_t), void *VAR_9 )
{
    int VAR_10, VAR_11, VAR_12, VAR_13;
    mbedtls_ecp_point VAR_14;
    mbedtls_mpi VAR_15, VAR_16, VAR_17;


    if( VAR_2->N.p == ((void*)0) )
        return( VAR_0 );

    FUNC_4( &VAR_14 );
    FUNC_10( &VAR_15 ); FUNC_10( &VAR_16 ); FUNC_10( &VAR_17 );

    VAR_12 = 0;
    do
    {




        VAR_11 = 0;
        do
        {
            FUNC_0( FUNC_2( VAR_2, &VAR_15, &VAR_14, VAR_8, VAR_9 ) );
            FUNC_0( FUNC_12( VAR_3, &VAR_14.X, &VAR_2->N ) );

            if( VAR_11++ > 10 )
            {
                VAR_10 = VAR_1;
                goto cleanup;
            }
        }
        while( FUNC_6( VAR_3, 0 ) == 0 );




        FUNC_0( FUNC_1( VAR_2, &VAR_16, VAR_6, VAR_7 ) );





        VAR_13 = 0;
        do
        {
            size_t VAR_18 = ( VAR_2->nbits + 7 ) / 8;
            FUNC_0( FUNC_8( &VAR_17, VAR_18, VAR_8, VAR_9 ) );
            FUNC_0( FUNC_14( &VAR_17, 8 * VAR_18 - VAR_2->nbits ) );


            if( ++VAR_13 > 30 )
                return( VAR_1 );
        }
        while( FUNC_6( &VAR_17, 1 ) < 0 ||
               FUNC_7( &VAR_17, &VAR_2->N ) >= 0 );




        FUNC_0( FUNC_13( VAR_4, VAR_3, VAR_5 ) );
        FUNC_0( FUNC_5( &VAR_16, &VAR_16, VAR_4 ) );
        FUNC_0( FUNC_13( &VAR_16, &VAR_16, &VAR_17 ) );
        FUNC_0( FUNC_13( &VAR_15, &VAR_15, &VAR_17 ) );
        FUNC_0( FUNC_11( VAR_4, &VAR_15, &VAR_2->N ) );
        FUNC_0( FUNC_13( VAR_4, VAR_4, &VAR_16 ) );
        FUNC_0( FUNC_12( VAR_4, VAR_4, &VAR_2->N ) );

        if( VAR_12++ > 10 )
        {
            VAR_10 = VAR_1;
            goto cleanup;
        }
    }
    while( FUNC_6( VAR_4, 0 ) == 0 );

cleanup:
    FUNC_3( &VAR_14 );
    FUNC_9( &VAR_15 ); FUNC_9( &VAR_16 ); FUNC_9( &VAR_17 );

    return( VAR_10 );
}
