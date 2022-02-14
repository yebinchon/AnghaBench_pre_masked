
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t mbedtls_mpi_uint ;
struct TYPE_5__ {size_t n; size_t* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4( mbedtls_mpi *VAR_1, size_t VAR_2 )
{
    int VAR_3;
    size_t VAR_4, VAR_5, VAR_6;
    mbedtls_mpi_uint VAR_7 = 0, VAR_8;

    VAR_5 = VAR_2 / (VAR_0 );
    VAR_6 = VAR_2 & (VAR_0 - 1);

    VAR_4 = FUNC_2( VAR_1 ) + VAR_2;

    if( VAR_1->n * VAR_0 < VAR_4 )
        FUNC_1( FUNC_3( VAR_1, FUNC_0( VAR_4 ) ) );

    VAR_3 = 0;




    if( VAR_5 > 0 )
    {
        for( VAR_4 = VAR_1->n; VAR_4 > VAR_5; VAR_4-- )
            VAR_1->p[VAR_4 - 1] = VAR_1->p[VAR_4 - VAR_5 - 1];

        for( ; VAR_4 > 0; VAR_4-- )
            VAR_1->p[VAR_4 - 1] = 0;
    }




    if( VAR_6 > 0 )
    {
        for( VAR_4 = VAR_5; VAR_4 < VAR_1->n; VAR_4++ )
        {
            VAR_8 = VAR_1->p[VAR_4] >> (VAR_0 - VAR_6);
            VAR_1->p[VAR_4] <<= VAR_6;
            VAR_1->p[VAR_4] |= VAR_7;
            VAR_7 = VAR_8;
        }
    }

cleanup:

    return( VAR_3 );
}
