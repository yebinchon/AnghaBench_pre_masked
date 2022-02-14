
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ mbedtls_net_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (int,unsigned char const*,size_t) ;

int FUNC_3( void *VAR_9, const unsigned char *VAR_10, size_t VAR_11 )
{
    int VAR_12;
    int VAR_13 = ((mbedtls_net_context *) VAR_9)->fd;

    if( VAR_13 < 0 )
        return( VAR_4 );

    VAR_12 = (int) FUNC_2( VAR_13, VAR_10, VAR_11 );

    if( VAR_12 < 0 )
    {
        if( FUNC_1((const mbedtls_net_context*)VAR_9) != 0 )
            return( VAR_6 );






        if( VAR_8 == VAR_2 || VAR_8 == VAR_0 )
            return( VAR_3 );

        if( VAR_8 == VAR_1 )
            return( VAR_6 );


        return( VAR_5 );
    }

    return( VAR_12 );
}
