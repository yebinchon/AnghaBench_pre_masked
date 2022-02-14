
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t entropy_len; scalar_t__ (* f_entropy ) (int ,unsigned char*,size_t) ;int reseed_counter; int p_entropy; } ;
typedef TYPE_1__ mbedtls_hmac_drbg_context ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_3 (int ,unsigned char*,size_t) ;

int FUNC_4( mbedtls_hmac_drbg_context *VAR_4,
                      const unsigned char *VAR_5, size_t VAR_6 )
{
    unsigned char VAR_7[VAR_3];
    size_t VAR_8;


    if( VAR_6 > VAR_2 ||
        VAR_4->entropy_len + VAR_6 > VAR_3 )
    {
        return( VAR_1 );
    }

    FUNC_2( VAR_7, 0, VAR_3 );


    if( VAR_4->f_entropy( VAR_4->p_entropy, VAR_7, VAR_4->entropy_len ) != 0 )
        return( VAR_0 );

    VAR_8 = VAR_4->entropy_len;


    if( VAR_5 != ((void*)0) && VAR_6 != 0 )
    {
        FUNC_1( VAR_7 + VAR_8, VAR_5, VAR_6 );
        VAR_8 += VAR_6;
    }


    FUNC_0( VAR_4, VAR_7, VAR_8 );


    VAR_4->reseed_counter = 1;


    return( 0 );
}
