
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_2__ mbedtls_cipher_definition_t ;
struct TYPE_4__ {int type; } ;


 TYPE_2__* VAR_0 ;
 int const* VAR_1 ;
 int VAR_2 ;

const int *FUNC_0( void )
{
    const mbedtls_cipher_definition_t *VAR_3;
    int *VAR_4;

    if( ! VAR_2 )
    {
        VAR_3 = VAR_0;
        VAR_4 = VAR_1;

        while( VAR_3->type != 0 )
            *VAR_4++ = (*VAR_3++).type;

        *VAR_4 = 0;

        VAR_2 = 1;
    }

    return( VAR_1 );
}
