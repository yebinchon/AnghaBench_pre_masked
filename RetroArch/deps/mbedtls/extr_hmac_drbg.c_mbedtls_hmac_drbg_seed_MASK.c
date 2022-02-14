
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mbedtls_md_info_t ;
struct TYPE_4__ {int (* f_entropy ) (void*,unsigned char*,size_t) ;size_t entropy_len; int reseed_interval; void* p_entropy; int V; int md_ctx; } ;
typedef TYPE_1__ mbedtls_hmac_drbg_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char const*,size_t) ;
 size_t FUNC_1 (int const*) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int ,int,size_t) ;

int FUNC_5( mbedtls_hmac_drbg_context *VAR_1,
                    const mbedtls_md_info_t * VAR_2,
                    int (*VAR_3)(void *, unsigned char *, size_t),
                    void *VAR_4,
                    const unsigned char *VAR_5,
                    size_t VAR_6 )
{
    int VAR_7;
    size_t VAR_8, VAR_9;

    if( ( VAR_7 = FUNC_3( &VAR_1->md_ctx, VAR_2, 1 ) ) != 0 )
        return( VAR_7 );

    VAR_9 = FUNC_1( VAR_2 );






    FUNC_2( &VAR_1->md_ctx, VAR_1->V, VAR_9 );
    FUNC_4( VAR_1->V, 0x01, VAR_9 );

    VAR_1->f_entropy = VAR_3;
    VAR_1->p_entropy = VAR_4;

    VAR_1->reseed_interval = VAR_0;
    VAR_8 = VAR_9 <= 20 ? 16 :
                  VAR_9 <= 28 ? 24 :
                                  32;





    VAR_1->entropy_len = VAR_8 * 3 / 2;

    if( ( VAR_7 = FUNC_0( VAR_1, VAR_5, VAR_6 ) ) != 0 )
        return( VAR_7 );

    VAR_1->entropy_len = VAR_8;

    return( 0 );
}
