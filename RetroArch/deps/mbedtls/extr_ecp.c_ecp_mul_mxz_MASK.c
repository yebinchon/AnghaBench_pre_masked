
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_14__ {int Z; int X; int Y; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
typedef int mbedtls_ecp_group ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 size_t FUNC_8 (int const*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 unsigned char FUNC_11 (int const*,size_t) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int *,unsigned char) ;

__attribute__((used)) static int FUNC_15( mbedtls_ecp_group *VAR_0, mbedtls_ecp_point *VAR_1,
                        const mbedtls_mpi *VAR_2, const mbedtls_ecp_point *VAR_3,
                        int (*VAR_4)(void *, unsigned char *, size_t),
                        void *VAR_5 )
{
    int VAR_6;
    size_t VAR_7;
    unsigned char VAR_8;
    mbedtls_ecp_point VAR_9;
    mbedtls_mpi VAR_10;

    FUNC_7( &VAR_9 ); FUNC_12( &VAR_10 );


    FUNC_0( FUNC_9( &VAR_10, &VAR_3->X ) );
    FUNC_0( FUNC_5( &VAR_9, VAR_3 ) );


    FUNC_0( FUNC_13( &VAR_1->X, 1 ) );
    FUNC_0( FUNC_13( &VAR_1->Z, 0 ) );
    FUNC_10( &VAR_1->Y );


    FUNC_1( VAR_9.X );


    if( VAR_4 != ((void*)0) )
        FUNC_0( FUNC_4( VAR_0, &VAR_9, VAR_4, VAR_5 ) );


    VAR_7 = FUNC_8( VAR_2 );
    while( VAR_7-- > 0 )
    {
        VAR_8 = FUNC_11( VAR_2, VAR_7 );







        FUNC_0( FUNC_14( &VAR_1->X, &VAR_9.X, VAR_8 ) );
        FUNC_0( FUNC_14( &VAR_1->Z, &VAR_9.Z, VAR_8 ) );
        FUNC_0( FUNC_2( VAR_0, VAR_1, &VAR_9, VAR_1, &VAR_9, &VAR_10 ) );
        FUNC_0( FUNC_14( &VAR_1->X, &VAR_9.X, VAR_8 ) );
        FUNC_0( FUNC_14( &VAR_1->Z, &VAR_9.Z, VAR_8 ) );
    }

    FUNC_0( FUNC_3( VAR_0, VAR_1 ) );

cleanup:
    FUNC_6( &VAR_9 ); FUNC_10( &VAR_10 );

    return( VAR_6 );
}
