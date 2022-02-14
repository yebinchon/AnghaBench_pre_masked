
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s; int * p; scalar_t__ n; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;

void FUNC_2( mbedtls_mpi *VAR_0 )
{
    if( VAR_0 == ((void*)0) )
        return;

    if( VAR_0->p != ((void*)0) )
    {
        FUNC_1( VAR_0->p, VAR_0->n );
        FUNC_0( VAR_0->p );
    }

    VAR_0->s = 1;
    VAR_0->n = 0;
    VAR_0->p = ((void*)0);
}
