
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int E; int N; } ;
typedef TYPE_1__ mbedtls_rsa_context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;

int FUNC_3( const mbedtls_rsa_context *VAR_1, const mbedtls_rsa_context *VAR_2 )
{
    if( FUNC_2( VAR_1 ) != 0 ||
        FUNC_1( VAR_2 ) != 0 )
    {
        return( VAR_0 );
    }

    if( FUNC_0( &VAR_1->N, &VAR_2->N ) != 0 ||
        FUNC_0( &VAR_1->E, &VAR_2->E ) != 0 )
    {
        return( VAR_0 );
    }

    return( 0 );
}
