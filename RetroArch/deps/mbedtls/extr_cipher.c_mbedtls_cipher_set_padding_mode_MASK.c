
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_cipher_padding_t ;
struct TYPE_5__ {int get_padding; int * add_padding; TYPE_1__* cipher_info; } ;
typedef TYPE_2__ mbedtls_cipher_context_t ;
struct TYPE_4__ {scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;





 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_0( mbedtls_cipher_context_t *VAR_12, mbedtls_cipher_padding_t VAR_13 )
{
    if( ((void*)0) == VAR_12 ||
        VAR_2 != VAR_12->cipher_info->mode )
    {
        return( VAR_0 );
    }

    switch( VAR_13 )
    {
    case 132:
        VAR_12->add_padding = ((void*)0);
        VAR_12->get_padding = VAR_7;
        break;

    default:
        return( VAR_1 );
    }

    return( 0 );
}
