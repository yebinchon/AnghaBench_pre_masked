
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int* HH; int* HL; } ;
typedef TYPE_1__ mbedtls_gcm_context ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned char*,int) ;
 scalar_t__* VAR_1 ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned char*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3( mbedtls_gcm_context *VAR_2, const unsigned char VAR_3[16],
                      unsigned char VAR_4[16] )
{
    int VAR_5 = 0;
    unsigned char VAR_6, VAR_7, VAR_8;
    uint64_t VAR_9, VAR_10;
    VAR_6 = VAR_3[15] & 0xf;

    VAR_9 = VAR_2->HH[VAR_6];
    VAR_10 = VAR_2->HL[VAR_6];

    for( VAR_5 = 15; VAR_5 >= 0; VAR_5-- )
    {
        VAR_6 = VAR_3[VAR_5] & 0xf;
        VAR_7 = VAR_3[VAR_5] >> 4;

        if( VAR_5 != 15 )
        {
            VAR_8 = (unsigned char) VAR_10 & 0xf;
            VAR_10 = ( VAR_9 << 60 ) | ( VAR_10 >> 4 );
            VAR_9 = ( VAR_9 >> 4 );
            VAR_9 ^= (uint64_t) VAR_1[VAR_8] << 48;
            VAR_9 ^= VAR_2->HH[VAR_6];
            VAR_10 ^= VAR_2->HL[VAR_6];

        }

        VAR_8 = (unsigned char) VAR_10 & 0xf;
        VAR_10 = ( VAR_9 << 60 ) | ( VAR_10 >> 4 );
        VAR_9 = ( VAR_9 >> 4 );
        VAR_9 ^= (uint64_t) VAR_1[VAR_8] << 48;
        VAR_9 ^= VAR_2->HH[VAR_7];
        VAR_10 ^= VAR_2->HL[VAR_7];
    }

    FUNC_0( VAR_9 >> 32, VAR_4, 0 );
    FUNC_0( VAR_9, VAR_4, 4 );
    FUNC_0( VAR_10 >> 32, VAR_4, 8 );
    FUNC_0( VAR_10, VAR_4, 12 );
}
