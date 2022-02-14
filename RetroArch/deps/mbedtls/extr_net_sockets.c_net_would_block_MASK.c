
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ mbedtls_net_context ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1( const mbedtls_net_context *VAR_3 )
{



    if( ( FUNC_0( VAR_3->fd, VAR_0 ) & VAR_1 ) != VAR_1 )
        return( 0 );

    switch( VAR_2 )
    {

        case 129:


        case 128:

            return( 1 );
    }
    return( 0 );
}
