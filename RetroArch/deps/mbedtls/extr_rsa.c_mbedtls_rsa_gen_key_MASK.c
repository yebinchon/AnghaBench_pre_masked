
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; int N; int P; int Q; int QP; int D; int DQ; int DP; int E; } ;
typedef TYPE_1__ mbedtls_rsa_context ;
typedef int mbedtls_mpi ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,unsigned int,int ,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (TYPE_1__*) ;

int FUNC_15( mbedtls_rsa_context *VAR_2,
                 int (*VAR_3)(void *, unsigned char *, size_t),
                 void *VAR_4,
                 unsigned int VAR_5, int VAR_6 )
{
    int VAR_7;
    mbedtls_mpi VAR_8, VAR_9, VAR_10, VAR_11;

    if( VAR_3 == ((void*)0) || VAR_5 < 128 || VAR_6 < 3 )
        return( VAR_0 );

    if( VAR_5 % 2 )
        return( VAR_0 );

    FUNC_7( &VAR_8 ); FUNC_7( &VAR_9 );
    FUNC_7( &VAR_10 ); FUNC_7( &VAR_11 );





    FUNC_0( FUNC_9( &VAR_2->E, VAR_6 ) );

    do
    {
        FUNC_0( FUNC_6( &VAR_2->P, VAR_5 >> 1, 0,
                                VAR_3, VAR_4 ) );

        FUNC_0( FUNC_6( &VAR_2->Q, VAR_5 >> 1, 0,
                                VAR_3, VAR_4 ) );

        if( FUNC_3( &VAR_2->P, &VAR_2->Q ) == 0 )
            continue;

        FUNC_0( FUNC_11( &VAR_2->N, &VAR_2->P, &VAR_2->Q ) );
        if( FUNC_1( &VAR_2->N ) != VAR_5 )
            continue;

        if( FUNC_3( &VAR_2->P, &VAR_2->Q ) < 0 )
                                FUNC_13( &VAR_2->P, &VAR_2->Q );

        FUNC_0( FUNC_12( &VAR_8, &VAR_2->P, 1 ) );
        FUNC_0( FUNC_12( &VAR_9, &VAR_2->Q, 1 ) );
        FUNC_0( FUNC_11( &VAR_10, &VAR_8, &VAR_9 ) );
        FUNC_0( FUNC_5( &VAR_11, &VAR_2->E, &VAR_10 ) );
    }
    while( FUNC_2( &VAR_11, 1 ) != 0 );







    FUNC_0( FUNC_8( &VAR_2->D , &VAR_2->E, &VAR_10 ) );
    FUNC_0( FUNC_10( &VAR_2->DP, &VAR_2->D, &VAR_8 ) );
    FUNC_0( FUNC_10( &VAR_2->DQ, &VAR_2->D, &VAR_9 ) );
    FUNC_0( FUNC_8( &VAR_2->QP, &VAR_2->Q, &VAR_2->P ) );

    VAR_2->len = ( FUNC_1( &VAR_2->N ) + 7 ) >> 3;

cleanup:

    FUNC_4( &VAR_8 ); FUNC_4( &VAR_9 ); FUNC_4( &VAR_10 ); FUNC_4( &VAR_11 );

    if( VAR_7 != 0 )
    {
        FUNC_14( VAR_2 );
        return( VAR_1 + VAR_7 );
    }

    return( 0 );
}
