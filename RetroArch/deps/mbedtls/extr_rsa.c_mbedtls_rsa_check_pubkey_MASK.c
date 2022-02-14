
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int* p; } ;
struct TYPE_6__ {TYPE_3__ N; TYPE_3__ E; } ;
typedef TYPE_1__ mbedtls_rsa_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_3__*) ;

int FUNC_2( const mbedtls_rsa_context *VAR_2 )
{
    if( !VAR_2->N.p || !VAR_2->E.p )
        return( VAR_0 );

    if( ( VAR_2->N.p[0] & 1 ) == 0 ||
        ( VAR_2->E.p[0] & 1 ) == 0 )
        return( VAR_0 );

    if( FUNC_0( &VAR_2->N ) < 128 ||
        FUNC_0( &VAR_2->N ) > VAR_1 )
        return( VAR_0 );

    if( FUNC_0( &VAR_2->E ) < 2 ||
        FUNC_1( &VAR_2->E, &VAR_2->N ) >= 0 )
        return( VAR_0 );

    return( 0 );
}
