
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* HL; int* HH; int cipher_ctx; } ;
typedef TYPE_1__ mbedtls_gcm_context ;


 int FUNC_0 (int,unsigned char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned char*,int,unsigned char*,size_t*) ;
 int FUNC_3 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_4( mbedtls_gcm_context *VAR_1 )
{
    int VAR_2, VAR_3, VAR_4;
    uint64_t VAR_5, VAR_6;
    uint64_t VAR_7, VAR_8;
    unsigned char VAR_9[16];
    size_t VAR_10 = 0;

    FUNC_3( VAR_9, 0, 16 );
    if( ( VAR_2 = FUNC_2( &VAR_1->cipher_ctx, VAR_9, 16, VAR_9, &VAR_10 ) ) != 0 )
        return( VAR_2 );


    FUNC_0( VAR_5, VAR_9, 0 );
    FUNC_0( VAR_6, VAR_9, 4 );
    VAR_8 = (uint64_t) VAR_5 << 32 | VAR_6;

    FUNC_0( VAR_5, VAR_9, 8 );
    FUNC_0( VAR_6, VAR_9, 12 );
    VAR_7 = (uint64_t) VAR_5 << 32 | VAR_6;


    VAR_1->HL[8] = VAR_7;
    VAR_1->HH[8] = VAR_8;
    VAR_1->HH[0] = 0;
    VAR_1->HL[0] = 0;

    for( VAR_3 = 4; VAR_3 > 0; VAR_3 >>= 1 )
    {
        uint32_t VAR_11 = ( VAR_7 & 1 ) * 0xe1000000U;
        VAR_7 = ( VAR_8 << 63 ) | ( VAR_7 >> 1 );
        VAR_8 = ( VAR_8 >> 1 ) ^ ( (uint64_t) VAR_11 << 32);

        VAR_1->HL[VAR_3] = VAR_7;
        VAR_1->HH[VAR_3] = VAR_8;
    }

    for( VAR_3 = 2; VAR_3 <= 8; VAR_3 *= 2 )
    {
        uint64_t *VAR_12 = VAR_1->HL + VAR_3, *VAR_13 = VAR_1->HH + VAR_3;
        VAR_8 = *VAR_13;
        VAR_7 = *VAR_12;
        for( VAR_4 = 1; VAR_4 < VAR_3; VAR_4++ )
        {
            VAR_13[VAR_4] = VAR_8 ^ VAR_1->HH[VAR_4];
            VAR_12[VAR_4] = VAR_7 ^ VAR_1->HL[VAR_4];
        }
    }

    return( 0 );
}
