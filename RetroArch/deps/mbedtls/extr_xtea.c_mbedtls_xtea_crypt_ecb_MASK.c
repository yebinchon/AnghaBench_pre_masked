
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* k; } ;
typedef TYPE_1__ mbedtls_xtea_context ;


 int FUNC_0 (int,unsigned char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (int,unsigned char*,int) ;

int FUNC_2( mbedtls_xtea_context *VAR_1, int VAR_2,
                    const unsigned char VAR_3[8], unsigned char VAR_4[8])
{
    uint32_t *VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_5 = VAR_1->k;

    FUNC_0( VAR_6, VAR_3, 0 );
    FUNC_0( VAR_7, VAR_3, 4 );

    if( VAR_2 == VAR_0 )
    {
        uint32_t VAR_9 = 0, VAR_10 = 0x9E3779B9;

        for( VAR_8 = 0; VAR_8 < 32; VAR_8++ )
        {
            VAR_6 += (((VAR_7 << 4) ^ (VAR_7 >> 5)) + VAR_7) ^ (VAR_9 + VAR_5[VAR_9 & 3]);
            VAR_9 += VAR_10;
            VAR_7 += (((VAR_6 << 4) ^ (VAR_6 >> 5)) + VAR_6) ^ (VAR_9 + VAR_5[(VAR_9>>11) & 3]);
        }
    }
    else
    {
        uint32_t VAR_11 = 0x9E3779B9, VAR_12 = VAR_11 * 32;

        for( VAR_8 = 0; VAR_8 < 32; VAR_8++ )
        {
            VAR_7 -= (((VAR_6 << 4) ^ (VAR_6 >> 5)) + VAR_6) ^ (VAR_12 + VAR_5[(VAR_12>>11) & 3]);
            VAR_12 -= VAR_11;
            VAR_6 -= (((VAR_7 << 4) ^ (VAR_7 >> 5)) + VAR_7) ^ (VAR_12 + VAR_5[VAR_12 & 3]);
        }
    }

    FUNC_1( VAR_6, VAR_4, 0 );
    FUNC_1( VAR_7, VAR_4, 4 );

    return( 0 );
}
