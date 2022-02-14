
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mbedtls_mpi ;
struct TYPE_8__ {int Y; int X; int Z; } ;
typedef TYPE_1__ mbedtls_ecp_point ;
struct TYPE_9__ {int pbits; int P; } ;
typedef TYPE_2__ mbedtls_ecp_group ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*,TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,size_t,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11( const mbedtls_ecp_group *VAR_1, mbedtls_ecp_point *VAR_2,
                int (*VAR_3)(void *, unsigned char *, size_t), void *VAR_4 )
{
    int VAR_5;
    mbedtls_mpi VAR_6, VAR_7;
    size_t VAR_8;
    int VAR_9 = 0;
    VAR_8 = ( VAR_1->pbits + 7 ) / 8;
    FUNC_8( &VAR_6 ); FUNC_8( &VAR_7 );


    do
    {
        FUNC_0( FUNC_6( &VAR_6, VAR_8, VAR_3, VAR_4 ) );

        while( FUNC_5( &VAR_6, &VAR_1->P ) >= 0 )
            FUNC_0( FUNC_10( &VAR_6, 1 ) );

        if( VAR_9++ > 10 )
            return( VAR_0 );
    }
    while( FUNC_4( &VAR_6, 1 ) <= 0 );


    FUNC_0( FUNC_9( &VAR_2->Z, &VAR_2->Z, &VAR_6 ) ); FUNC_1( VAR_2->Z );


    FUNC_0( FUNC_9( &VAR_7, &VAR_6, &VAR_6 ) ); FUNC_1( VAR_7 );
    FUNC_0( FUNC_9( &VAR_2->X, &VAR_2->X, &VAR_7 ) ); FUNC_1( VAR_2->X );


    FUNC_0( FUNC_9( &VAR_7, &VAR_7, &VAR_6 ) ); FUNC_1( VAR_7 );
    FUNC_0( FUNC_9( &VAR_2->Y, &VAR_2->Y, &VAR_7 ) ); FUNC_1( VAR_2->Y );

cleanup:
    FUNC_7( &VAR_6 ); FUNC_7( &VAR_7 );

    return( VAR_5 );
}
