
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char mfl_code; } ;
typedef TYPE_1__ mbedtls_ssl_config ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__* VAR_3 ;

int FUNC_0( mbedtls_ssl_config *VAR_4, unsigned char VAR_5 )
{
    if( VAR_5 >= VAR_2 ||
        VAR_3[VAR_5] > VAR_1 )
    {
        return( VAR_0 );
    }

    VAR_4->mfl_code = VAR_5;

    return( 0 );
}
