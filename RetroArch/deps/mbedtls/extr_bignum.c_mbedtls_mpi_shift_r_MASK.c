
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t mbedtls_mpi_uint ;
struct TYPE_4__ {size_t n; size_t* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1( mbedtls_mpi *VAR_1, size_t VAR_2 )
{
    size_t VAR_3, VAR_4, VAR_5;
    mbedtls_mpi_uint VAR_6 = 0, VAR_7;

    VAR_4 = VAR_2 / VAR_0;
    VAR_5 = VAR_2 & (VAR_0 - 1);

    if( VAR_4 > VAR_1->n || ( VAR_4 == VAR_1->n && VAR_5 > 0 ) )
        return FUNC_0( VAR_1, 0 );




    if( VAR_4 > 0 )
    {
        for( VAR_3 = 0; VAR_3 < VAR_1->n - VAR_4; VAR_3++ )
            VAR_1->p[VAR_3] = VAR_1->p[VAR_3 + VAR_4];

        for( ; VAR_3 < VAR_1->n; VAR_3++ )
            VAR_1->p[VAR_3] = 0;
    }




    if( VAR_5 > 0 )
    {
        for( VAR_3 = VAR_1->n; VAR_3 > 0; VAR_3-- )
        {
            VAR_7 = VAR_1->p[VAR_3 - 1] << (VAR_0 - VAR_5);
            VAR_1->p[VAR_3 - 1] >>= VAR_5;
            VAR_1->p[VAR_3 - 1] |= VAR_6;
            VAR_6 = VAR_7;
        }
    }

    return( 0 );
}
