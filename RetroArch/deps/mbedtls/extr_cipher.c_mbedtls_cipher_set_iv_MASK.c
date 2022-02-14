
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t iv_size; int iv; TYPE_1__* cipher_info; } ;
typedef TYPE_2__ mbedtls_cipher_context_t ;
struct TYPE_4__ {int flags; size_t iv_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,unsigned char const*,size_t) ;

int FUNC_1( mbedtls_cipher_context_t *VAR_4,
                   const unsigned char *VAR_5, size_t VAR_6 )
{
    size_t VAR_7;

    if( ((void*)0) == VAR_4 || ((void*)0) == VAR_4->cipher_info || ((void*)0) == VAR_5 )
        return( VAR_1 );


    if( VAR_6 > VAR_3 )
        return( VAR_2 );

    if( ( VAR_4->cipher_info->flags & VAR_0 ) != 0 )
        VAR_7 = VAR_6;
    else
    {
        VAR_7 = VAR_4->cipher_info->iv_size;


        if( VAR_7 > VAR_6 )
            return( VAR_1 );
    }

    FUNC_0( VAR_4->iv, VAR_5, VAR_7 );
    VAR_4->iv_size = VAR_7;

    return( 0 );
}
