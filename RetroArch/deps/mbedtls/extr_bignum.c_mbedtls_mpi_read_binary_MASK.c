
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t mbedtls_mpi_uint ;
struct TYPE_5__ {size_t* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4( mbedtls_mpi *VAR_1, const unsigned char *VAR_2, size_t VAR_3 )
{
    int VAR_4;
    size_t VAR_5, VAR_6, VAR_7;

    for( VAR_7 = 0; VAR_7 < VAR_3; VAR_7++ )
        if( VAR_2[VAR_7] != 0 )
            break;

    FUNC_1( FUNC_2( VAR_1, FUNC_0( VAR_3 - VAR_7 ) ) );
    FUNC_1( FUNC_3( VAR_1, 0 ) );

    for( VAR_5 = VAR_3, VAR_6 = 0; VAR_5 > VAR_7; VAR_5--, VAR_6++ )
        VAR_1->p[VAR_6 / VAR_0] |= ((mbedtls_mpi_uint) VAR_2[VAR_5 - 1]) << ((VAR_6 % VAR_0) << 3);

cleanup:

    return( VAR_4 );
}
