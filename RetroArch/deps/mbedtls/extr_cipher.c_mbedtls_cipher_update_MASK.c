
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mbedtls_gcm_context ;
struct TYPE_8__ {scalar_t__ operation; size_t unprocessed_len; unsigned char const* unprocessed_data; scalar_t__ cipher_ctx; TYPE_2__* cipher_info; int iv; } ;
typedef TYPE_3__ mbedtls_cipher_context_t ;
struct TYPE_7__ {scalar_t__ mode; TYPE_1__* base; } ;
struct TYPE_6__ {int (* ecb_func ) (scalar_t__,scalar_t__,unsigned char const*,unsigned char*) ;int (* cbc_func ) (scalar_t__,scalar_t__,size_t,int ,unsigned char const*,unsigned char*) ;int (* cfb_func ) (scalar_t__,scalar_t__,size_t,size_t*,int ,unsigned char const*,unsigned char*) ;int (* ctr_func ) (scalar_t__,size_t,size_t*,int ,unsigned char const*,unsigned char const*,unsigned char*) ;int (* stream_func ) (scalar_t__,size_t,unsigned char const*,unsigned char*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,size_t,unsigned char const*,unsigned char*) ;
 int FUNC_2 (unsigned char const*,unsigned char const*,size_t) ;
 int FUNC_3 (scalar_t__,scalar_t__,unsigned char const*,unsigned char*) ;
 int FUNC_4 (scalar_t__,scalar_t__,size_t,int ,unsigned char const*,unsigned char*) ;
 int FUNC_5 (scalar_t__,scalar_t__,size_t,int ,unsigned char const*,unsigned char*) ;
 int FUNC_6 (scalar_t__,scalar_t__,size_t,size_t*,int ,unsigned char const*,unsigned char*) ;
 int FUNC_7 (scalar_t__,size_t,size_t*,int ,unsigned char const*,unsigned char const*,unsigned char*) ;
 int FUNC_8 (scalar_t__,size_t,unsigned char const*,unsigned char*) ;

int FUNC_9( mbedtls_cipher_context_t *VAR_12, const unsigned char *VAR_13,
                   size_t VAR_14, unsigned char *VAR_15, size_t *VAR_16 )
{
    int VAR_17;
    size_t VAR_18 = 0;

    if( ((void*)0) == VAR_12 || ((void*)0) == VAR_12->cipher_info || ((void*)0) == VAR_16 )
    {
        return( VAR_2 );
    }

    *VAR_16 = 0;
    VAR_18 = FUNC_0( VAR_12 );

    if( VAR_12->cipher_info->mode == VAR_9 )
    {
        if( VAR_14 != VAR_18 )
            return( VAR_4 );

        *VAR_16 = VAR_14;

        if( 0 != ( VAR_17 = VAR_12->cipher_info->base->ecb_func( VAR_12->cipher_ctx,
                    VAR_12->operation, VAR_13, VAR_15 ) ) )
        {
            return( VAR_17 );
        }

        return( 0 );
    }
    if ( 0 == VAR_18 )
    {
        return VAR_5;
    }

    if( VAR_13 == VAR_15 &&
       ( VAR_12->unprocessed_len != 0 || VAR_14 % VAR_18 ) )
    {
        return( VAR_2 );
    }
    return( VAR_3 );
}
