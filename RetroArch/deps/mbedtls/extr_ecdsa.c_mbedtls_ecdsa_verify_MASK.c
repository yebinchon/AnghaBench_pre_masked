
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;


struct TYPE_34__ {int * p; } ;
typedef TYPE_1__ const mbedtls_mpi ;
struct TYPE_35__ {TYPE_1__ const X; } ;
typedef TYPE_2__ mbedtls_ecp_point ;
struct TYPE_36__ {TYPE_1__ const N; int G; } ;
typedef TYPE_3__ mbedtls_ecp_group ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__ const*,unsigned char const*,size_t) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__ const*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,TYPE_1__ const*,int *,TYPE_1__ const*,TYPE_2__ const*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_1__ const*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_9 (TYPE_1__ const*) ;
 int FUNC_10 (TYPE_1__ const*) ;
 int FUNC_11 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_12 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_13 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;

int FUNC_14( mbedtls_ecp_group *VAR_2,
                  const unsigned char *VAR_3, size_t VAR_4,
                  const mbedtls_ecp_point *VAR_5, const mbedtls_mpi *VAR_6, const mbedtls_mpi *VAR_7)
{
    int VAR_8;
    mbedtls_mpi VAR_9, VAR_10, VAR_11, VAR_12;
    mbedtls_ecp_point VAR_13;

    FUNC_6( &VAR_13 );
    FUNC_10( &VAR_9 ); FUNC_10( &VAR_10 ); FUNC_10( &VAR_11 ); FUNC_10( &VAR_12 );


    if( VAR_2->N.p == ((void*)0) )
        return( VAR_0 );




    if( FUNC_7( VAR_6, 1 ) < 0 || FUNC_8( VAR_6, &VAR_2->N ) >= 0 ||
        FUNC_7( VAR_7, 1 ) < 0 || FUNC_8( VAR_7, &VAR_2->N ) >= 0 )
    {
        VAR_8 = VAR_1;
        goto cleanup;
    }




    FUNC_0( FUNC_2( VAR_2, VAR_5 ) );




    FUNC_0( FUNC_1( VAR_2, &VAR_9, VAR_3, VAR_4 ) );




    FUNC_0( FUNC_11( &VAR_10, VAR_7, &VAR_2->N ) );

    FUNC_0( FUNC_13( &VAR_11, &VAR_9, &VAR_10 ) );
    FUNC_0( FUNC_12( &VAR_11, &VAR_11, &VAR_2->N ) );

    FUNC_0( FUNC_13( &VAR_12, VAR_6, &VAR_10 ) );
    FUNC_0( FUNC_12( &VAR_12, &VAR_12, &VAR_2->N ) );







    FUNC_0( FUNC_4( VAR_2, &VAR_13, &VAR_11, &VAR_2->G, &VAR_12, VAR_5 ) );

    if( FUNC_3( &VAR_13 ) )
    {
        VAR_8 = VAR_1;
        goto cleanup;
    }





    FUNC_0( FUNC_12( &VAR_13.X, &VAR_13.X, &VAR_2->N ) );




    if( FUNC_8( &VAR_13.X, VAR_6 ) != 0 )
    {
        VAR_8 = VAR_1;
        goto cleanup;
    }

cleanup:
    FUNC_5( &VAR_13 );
    FUNC_9( &VAR_9 ); FUNC_9( &VAR_10 ); FUNC_9( &VAR_11 ); FUNC_9( &VAR_12 );

    return( VAR_8 );
}
