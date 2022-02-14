
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int s; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__ const*,TYPE_1__ const*) ;

int FUNC_4( mbedtls_mpi *VAR_0, const mbedtls_mpi *VAR_1, const mbedtls_mpi *VAR_2 )
{
    int VAR_3, VAR_4 = VAR_1->s;

    if( VAR_1->s * VAR_2->s < 0 )
    {
        if( FUNC_2( VAR_1, VAR_2 ) >= 0 )
        {
            FUNC_0( FUNC_3( VAR_0, VAR_1, VAR_2 ) );
            VAR_0->s = VAR_4;
        }
        else
        {
            FUNC_0( FUNC_3( VAR_0, VAR_2, VAR_1 ) );
            VAR_0->s = -VAR_4;
        }
    }
    else
    {
        FUNC_0( FUNC_1( VAR_0, VAR_1, VAR_2 ) );
        VAR_0->s = VAR_4;
    }

cleanup:

    return( VAR_3 );
}
