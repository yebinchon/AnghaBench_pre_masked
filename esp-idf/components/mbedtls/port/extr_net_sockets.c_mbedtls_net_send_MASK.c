
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
typedef TYPE_1__ mbedtls_net_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int,unsigned char const*,size_t) ;

int FUNC_2( void *VAR_8, const unsigned char *VAR_9, size_t VAR_10 )
{
    int VAR_11;
    int VAR_12 = ((mbedtls_net_context *) VAR_8)->fd;

    if ( VAR_12 < 0 ) {
        return ( VAR_4 );
    }

    VAR_11 = (int) FUNC_1( VAR_12, VAR_9, VAR_10 );

    if ( VAR_11 < 0 ) {
        if ( FUNC_0( VAR_8 ) != 0 ) {
            return ( VAR_6 );
        }

        if ( VAR_7 == VAR_2 || VAR_7 == VAR_0 ) {
            return ( VAR_3 );
        }

        if ( VAR_7 == VAR_1 ) {
            return ( VAR_6 );
        }

        return ( VAR_5 );
    }

    return ( VAR_11 );
}
