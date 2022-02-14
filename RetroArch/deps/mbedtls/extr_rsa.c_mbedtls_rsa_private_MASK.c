
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_31__ {int * p; } ;
struct TYPE_30__ {size_t len; int mutex; TYPE_2__ N; TYPE_2__ Vf; TYPE_2__ Q; TYPE_2__ P; TYPE_2__ QP; int RQ; int RP; int RN; TYPE_2__ DQ; TYPE_2__ DP; TYPE_2__ D; TYPE_2__ Vi; } ;
typedef TYPE_1__ mbedtls_rsa_context ;
typedef TYPE_2__ mbedtls_mpi ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int ,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,unsigned char const*,size_t) ;
 int FUNC_10 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,unsigned char*,size_t) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*) ;

int FUNC_16( mbedtls_rsa_context *VAR_5,
                 int (*VAR_6)(void *, unsigned char *, size_t),
                 void *VAR_7,
                 const unsigned char *VAR_8,
                 unsigned char *VAR_9 )
{
    int VAR_10;
    size_t VAR_11;
    mbedtls_mpi VAR_12, VAR_13, VAR_14;
    mbedtls_mpi VAR_15, VAR_16, VAR_17;




    mbedtls_mpi VAR_18, VAR_19;
    mbedtls_mpi *VAR_20 = &VAR_5->DP;
    mbedtls_mpi *VAR_21 = &VAR_5->DQ;



    if( VAR_5->P.p == ((void*)0) || VAR_5->Q.p == ((void*)0) || VAR_5->D.p == ((void*)0) )
        return( VAR_1 );

    FUNC_6( &VAR_12 ); FUNC_6( &VAR_13 ); FUNC_6( &VAR_14 );
    FUNC_6( &VAR_15 ); FUNC_6( &VAR_16 ); FUNC_6( &VAR_17 );


    if( VAR_6 != ((void*)0) )
    {



        FUNC_6( &VAR_18 );
        FUNC_6( &VAR_19 );

    }







    FUNC_0( FUNC_9( &VAR_12, VAR_8, VAR_5->len ) );
    if( FUNC_2( &VAR_12, &VAR_5->N ) >= 0 )
    {
        VAR_10 = VAR_0;
        goto cleanup;
    }

    if( VAR_6 != ((void*)0) )
    {




        FUNC_0( FUNC_15( VAR_5, VAR_6, VAR_7 ) );
        FUNC_0( FUNC_8( &VAR_12, &VAR_12, &VAR_5->Vi ) );
        FUNC_0( FUNC_7( &VAR_12, &VAR_12, &VAR_5->N ) );




        FUNC_0( FUNC_10( &VAR_15, &VAR_5->P, 1 ) );
        FUNC_0( FUNC_10( &VAR_16, &VAR_5->Q, 1 ) );
        FUNC_0( FUNC_4( &VAR_17, VAR_4,
                         VAR_6, VAR_7 ) );
        FUNC_0( FUNC_8( &VAR_18, &VAR_15, &VAR_17 ) );
        FUNC_0( FUNC_1( &VAR_18, &VAR_18,
                    &VAR_5->DP ) );

        VAR_20 = &VAR_18;




        FUNC_0( FUNC_4( &VAR_17, VAR_4,
                         VAR_6, VAR_7 ) );
        FUNC_0( FUNC_8( &VAR_19, &VAR_16, &VAR_17 ) );
        FUNC_0( FUNC_1( &VAR_19, &VAR_19,
                    &VAR_5->DQ ) );

        VAR_21 = &VAR_19;

    }
    FUNC_0( FUNC_3( &VAR_13, &VAR_12, VAR_20, &VAR_5->P, &VAR_5->RP ) );
    FUNC_0( FUNC_3( &VAR_14, &VAR_12, VAR_21, &VAR_5->Q, &VAR_5->RQ ) );




    FUNC_0( FUNC_11( &VAR_12, &VAR_13, &VAR_14 ) );
    FUNC_0( FUNC_8( &VAR_13, &VAR_12, &VAR_5->QP ) );
    FUNC_0( FUNC_7( &VAR_12, &VAR_13, &VAR_5->P ) );




    FUNC_0( FUNC_8( &VAR_13, &VAR_12, &VAR_5->Q ) );
    FUNC_0( FUNC_1( &VAR_12, &VAR_14, &VAR_13 ) );


    if( VAR_6 != ((void*)0) )
    {




        FUNC_0( FUNC_8( &VAR_12, &VAR_12, &VAR_5->Vf ) );
        FUNC_0( FUNC_7( &VAR_12, &VAR_12, &VAR_5->N ) );
    }

    VAR_11 = VAR_5->len;
    FUNC_0( FUNC_12( &VAR_12, VAR_9, VAR_11 ) );

cleanup:





    FUNC_5( &VAR_12 ); FUNC_5( &VAR_13 ); FUNC_5( &VAR_14 );
    FUNC_5( &VAR_15 ); FUNC_5( &VAR_16 ); FUNC_5( &VAR_17 );

    if( VAR_6 != ((void*)0) )
    {



        FUNC_5( &VAR_18 );
        FUNC_5( &VAR_19 );

    }

    if( VAR_10 != 0 )
        return( VAR_2 + VAR_10 );

    return( 0 );
}
