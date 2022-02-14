
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ unprocessed_len; scalar_t__ operation; int (* get_padding ) (unsigned char*,size_t,size_t*) ;int unprocessed_data; int iv; int cipher_ctx; TYPE_2__* cipher_info; int (* add_padding ) (int ,int ,scalar_t__) ;} ;
typedef TYPE_3__ mbedtls_cipher_context_t ;
struct TYPE_8__ {scalar_t__ mode; TYPE_1__* base; } ;
struct TYPE_7__ {int (* cbc_func ) (int ,scalar_t__,size_t,int ,int ,unsigned char*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,size_t,int ,int ,unsigned char*) ;
 int FUNC_4 (unsigned char*,size_t,size_t*) ;

int FUNC_5( mbedtls_cipher_context_t *VAR_11,
                   unsigned char *VAR_12, size_t *VAR_13 )
{
    if( ((void*)0) == VAR_11 || ((void*)0) == VAR_11->cipher_info || ((void*)0) == VAR_13 )
        return( VAR_2 );

    *VAR_13 = 0;

    if( VAR_6 == VAR_11->cipher_info->mode ||
        VAR_7 == VAR_11->cipher_info->mode ||
        VAR_9 == VAR_11->cipher_info->mode ||
        VAR_10 == VAR_11->cipher_info->mode )
    {
        return( 0 );
    }

    if( VAR_8 == VAR_11->cipher_info->mode )
    {
        if( VAR_11->unprocessed_len != 0 )
            return( VAR_4 );

        return( 0 );
    }
    ((void) VAR_12);


    return( VAR_3 );
}
