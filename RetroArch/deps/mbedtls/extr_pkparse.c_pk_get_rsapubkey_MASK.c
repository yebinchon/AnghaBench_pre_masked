
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int N; int len; int E; } ;
typedef TYPE_1__ mbedtls_rsa_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char**,unsigned char const*,int *) ;
 int FUNC_1 (unsigned char**,unsigned char const*,size_t*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4( unsigned char **VAR_4,
                             const unsigned char *VAR_5,
                             mbedtls_rsa_context *VAR_6 )
{
    int VAR_7;
    size_t VAR_8;

    if( ( VAR_7 = FUNC_1( VAR_4, VAR_5, &VAR_8,
            VAR_0 | VAR_1 ) ) != 0 )
        return( VAR_3 + VAR_7 );

    if( *VAR_4 + VAR_8 != VAR_5 )
        return( VAR_3 +
                VAR_2 );

    if( ( VAR_7 = FUNC_0( VAR_4, VAR_5, &VAR_6->N ) ) != 0 ||
        ( VAR_7 = FUNC_0( VAR_4, VAR_5, &VAR_6->E ) ) != 0 )
        return( VAR_3 + VAR_7 );

    if( *VAR_4 != VAR_5 )
        return( VAR_3 +
                VAR_2 );

    if( ( VAR_7 = FUNC_3( VAR_6 ) ) != 0 )
        return( VAR_3 );

    VAR_6->len = FUNC_2( &VAR_6->N );

    return( 0 );
}
