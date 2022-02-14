
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* counter; int aes_ctx; } ;
typedef TYPE_1__ mbedtls_ctr_drbg_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,scalar_t__*,unsigned char*) ;
 int FUNC_1 (int *,unsigned char*,int ) ;
 int FUNC_2 (scalar_t__*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_4( mbedtls_ctr_drbg_context *VAR_5,
                              const unsigned char VAR_6[VAR_4] )
{
    unsigned char VAR_7[VAR_4];
    unsigned char *VAR_8 = VAR_7;
    int VAR_9, VAR_10;

    FUNC_3( VAR_7, 0, VAR_4 );

    for( VAR_10 = 0; VAR_10 < VAR_4; VAR_10 += VAR_1 )
    {



        for( VAR_9 = VAR_1; VAR_9 > 0; VAR_9-- )
            if( ++VAR_5->counter[VAR_9 - 1] != 0 )
                break;




        FUNC_0( &VAR_5->aes_ctx, VAR_0, VAR_5->counter, VAR_8 );

        VAR_8 += VAR_1;
    }

    for( VAR_9 = 0; VAR_9 < VAR_4; VAR_9++ )
        VAR_7[VAR_9] ^= VAR_6[VAR_9];




    FUNC_1( &VAR_5->aes_ctx, VAR_7, VAR_2 );
    FUNC_2( VAR_5->counter, VAR_7 + VAR_3, VAR_1 );

    return( 0 );
}
