
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int s; int p; int n; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int (*) (void*,unsigned char*,size_t),void*) ;

int FUNC_3( const mbedtls_mpi *VAR_1,
                  int (*VAR_2)(void *, unsigned char *, size_t),
                  void *VAR_3 )
{
    int VAR_4;
    mbedtls_mpi VAR_5;

    VAR_5.s = 1;
    VAR_5.n = VAR_1->n;
    VAR_5.p = VAR_1->p;

    if( FUNC_0( &VAR_5, 0 ) == 0 ||
        FUNC_0( &VAR_5, 1 ) == 0 )
        return( VAR_0 );

    if( FUNC_0( &VAR_5, 2 ) == 0 )
        return( 0 );

    if( ( VAR_4 = FUNC_1( &VAR_5 ) ) != 0 )
    {
        if( VAR_4 == 1 )
            return( 0 );

        return( VAR_4 );
    }

    return( FUNC_2( &VAR_5, VAR_2, VAR_3 ) );
}
