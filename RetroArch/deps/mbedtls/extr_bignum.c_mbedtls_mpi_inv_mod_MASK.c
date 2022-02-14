
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_26__ {int* p; } ;
typedef TYPE_1__ const mbedtls_mpi ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__ const*,int) ;
 int FUNC_9 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_10 (TYPE_1__ const*,int) ;
 int FUNC_11 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;

int FUNC_12( mbedtls_mpi *VAR_2, const mbedtls_mpi *VAR_3, const mbedtls_mpi *VAR_4 )
{
    int VAR_5;
    mbedtls_mpi VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

    if( FUNC_2( VAR_4, 1 ) <= 0 )
        return( VAR_0 );

    FUNC_7( &VAR_7 ); FUNC_7( &VAR_8 ); FUNC_7( &VAR_9 ); FUNC_7( &VAR_10 );
    FUNC_7( &VAR_6 ); FUNC_7( &VAR_11 ); FUNC_7( &VAR_12 );
    FUNC_7( &VAR_13 ); FUNC_7( &VAR_14 );

    FUNC_0( FUNC_6( &VAR_6, VAR_3, VAR_4 ) );

    if( FUNC_2( &VAR_6, 1 ) != 0 )
    {
        VAR_5 = VAR_1;
        goto cleanup;
    }

    FUNC_0( FUNC_9( &VAR_7, VAR_3, VAR_4 ) );
    FUNC_0( FUNC_4( &VAR_8, &VAR_7 ) );
    FUNC_0( FUNC_4( &VAR_11, VAR_4 ) );
    FUNC_0( FUNC_4( &VAR_12, VAR_4 ) );

    FUNC_0( FUNC_8( &VAR_9, 1 ) );
    FUNC_0( FUNC_8( &VAR_10, 0 ) );
    FUNC_0( FUNC_8( &VAR_13, 0 ) );
    FUNC_0( FUNC_8( &VAR_14, 1 ) );

    do
    {
        while( ( VAR_8.p[0] & 1 ) == 0 )
        {
            FUNC_0( FUNC_10( &VAR_8, 1 ) );

            if( ( VAR_9[0] & 1 ) != 0 || ( VAR_10[0] & 1 ) != 0 )
            {
                FUNC_0( FUNC_1( &VAR_9, &VAR_9, &VAR_11 ) );
                FUNC_0( FUNC_11( &VAR_10, &VAR_10, &VAR_7 ) );
            }

            FUNC_0( FUNC_10( &VAR_9, 1 ) );
            FUNC_0( FUNC_10( &VAR_10, 1 ) );
        }

        while( ( VAR_12.p[0] & 1 ) == 0 )
        {
            FUNC_0( FUNC_10( &VAR_12, 1 ) );

            if( ( VAR_13[0] & 1 ) != 0 || ( VAR_14[0] & 1 ) != 0 )
            {
                FUNC_0( FUNC_1( &VAR_13, &VAR_13, &VAR_11 ) );
                FUNC_0( FUNC_11( &VAR_14, &VAR_14, &VAR_7 ) );
            }

            FUNC_0( FUNC_10( &VAR_13, 1 ) );
            FUNC_0( FUNC_10( &VAR_14, 1 ) );
        }

        if( FUNC_3( &VAR_8, &VAR_12 ) >= 0 )
        {
            FUNC_0( FUNC_11( &VAR_8, &VAR_8, &VAR_12 ) );
            FUNC_0( FUNC_11( &VAR_9, &VAR_9, &VAR_13 ) );
            FUNC_0( FUNC_11( &VAR_10, &VAR_10, &VAR_14 ) );
        }
        else
        {
            FUNC_0( FUNC_11( &VAR_12, &VAR_12, &VAR_8 ) );
            FUNC_0( FUNC_11( &VAR_13, &VAR_13, &VAR_9 ) );
            FUNC_0( FUNC_11( &VAR_14, &VAR_14, &VAR_10 ) );
        }
    }
    while( FUNC_2( &VAR_8, 0 ) != 0 );

    while( FUNC_2( &VAR_13, 0 ) < 0 )
        FUNC_0( FUNC_1( &VAR_13, &VAR_13, VAR_4 ) );

    while( FUNC_3( &VAR_13, VAR_4 ) >= 0 )
        FUNC_0( FUNC_11( &VAR_13, &VAR_13, VAR_4 ) );

    FUNC_0( FUNC_4( VAR_2, &VAR_13 ) );

cleanup:

    FUNC_5( &VAR_7 ); FUNC_5( &VAR_8 ); FUNC_5( &VAR_9 ); FUNC_5( &VAR_10 );
    FUNC_5( &VAR_6 ); FUNC_5( &VAR_11 ); FUNC_5( &VAR_12 );
    FUNC_5( &VAR_13 ); FUNC_5( &VAR_14 );

    return( VAR_5 );
}
