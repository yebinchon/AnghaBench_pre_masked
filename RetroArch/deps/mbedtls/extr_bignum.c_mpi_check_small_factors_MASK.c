
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mbedtls_mpi_uint ;
struct TYPE_5__ {int* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,TYPE_1__ const*,scalar_t__) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static int FUNC_3( const mbedtls_mpi *VAR_2 )
{
    int VAR_3 = 0;
    size_t VAR_4;
    mbedtls_mpi_uint VAR_5;

    if( ( VAR_2->p[0] & 1 ) == 0 )
        return( VAR_0 );

    for( VAR_4 = 0; VAR_1[VAR_4] > 0; VAR_4++ )
    {
        if( FUNC_1( VAR_2, VAR_1[VAR_4] ) <= 0 )
            return( 1 );

        FUNC_0( FUNC_2( &VAR_5, VAR_2, VAR_1[VAR_4] ) );

        if( VAR_5 == 0 )
            return( VAR_0 );
    }

cleanup:
    return( VAR_3 );
}
