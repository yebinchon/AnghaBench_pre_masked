
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* f_entropy ) (void*,unsigned char*,size_t) ;size_t entropy_len; int aes_ctx; int reseed_interval; void* p_entropy; } ;
typedef TYPE_1__ mbedtls_ctr_drbg_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,int ) ;
 int FUNC_2 (TYPE_1__*,unsigned char const*,size_t) ;
 int FUNC_3 (unsigned char*,int ,int) ;

int FUNC_4(
                   mbedtls_ctr_drbg_context *VAR_3,
                   int (*VAR_4)(void *, unsigned char *, size_t),
                   void *VAR_5,
                   const unsigned char *VAR_6,
                   size_t VAR_7,
                   size_t VAR_8 )
{
    int VAR_9;
    unsigned char VAR_10[VAR_1];

    FUNC_3( VAR_10, 0, VAR_1 );

    FUNC_0( &VAR_3->aes_ctx );

    VAR_3->f_entropy = VAR_4;
    VAR_3->p_entropy = VAR_5;

    VAR_3->entropy_len = VAR_8;
    VAR_3->reseed_interval = VAR_2;




    FUNC_1( &VAR_3->aes_ctx, VAR_10, VAR_0 );

    if( ( VAR_9 = FUNC_2( VAR_3, VAR_6, VAR_7 ) ) != 0 )
        return( VAR_9 );

    return( 0 );
}
