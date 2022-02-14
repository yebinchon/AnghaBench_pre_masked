
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h; size_t T_size; int * T; int N; int G; int B; int A; int P; } ;
typedef TYPE_1__ mbedtls_ecp_group ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4( mbedtls_ecp_group *VAR_0 )
{
    size_t VAR_1;

    if( VAR_0 == ((void*)0) )
        return;

    if( VAR_0->h != 1 )
    {
        FUNC_2( &VAR_0->P );
        FUNC_2( &VAR_0->A );
        FUNC_2( &VAR_0->B );
        FUNC_0( &VAR_0->G );
        FUNC_2( &VAR_0->N );
    }

    if( VAR_0->T != ((void*)0) )
    {
        for( VAR_1 = 0; VAR_1 < VAR_0->T_size; VAR_1++ )
            FUNC_0( &VAR_0->T[VAR_1] );
        FUNC_1( VAR_0->T );
    }

    FUNC_3( VAR_0, sizeof( mbedtls_ecp_group ) );
}
