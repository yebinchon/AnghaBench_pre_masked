
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* rk; int nr; } ;
typedef TYPE_1__ mbedtls_aes_context ;
typedef size_t Y3 ;
typedef size_t Y2 ;
typedef size_t Y1 ;
typedef size_t Y0 ;


 int FUNC_0 (int,int,int,int,int,int,int,int) ;
 int FUNC_1 (int,unsigned char const*,int) ;
 int FUNC_2 (int,unsigned char*,int) ;
 scalar_t__* VAR_0 ;

int FUNC_3( mbedtls_aes_context *VAR_1,
                                  const unsigned char VAR_2[16],
                                  unsigned char VAR_3[16] )
{
    int VAR_4;
    uint32_t *VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_5 = VAR_1->rk;

    FUNC_1( VAR_6, VAR_2, 0 ); VAR_6 ^= *VAR_5++;
    FUNC_1( VAR_7, VAR_2, 4 ); VAR_7 ^= *VAR_5++;
    FUNC_1( VAR_8, VAR_2, 8 ); VAR_8 ^= *VAR_5++;
    FUNC_1( VAR_9, VAR_2, 12 ); VAR_9 ^= *VAR_5++;

    for( VAR_4 = ( VAR_1->nr >> 1 ) - 1; VAR_4 > 0; VAR_4-- )
    {
        FUNC_0( VAR_10, VAR_11, VAR_12, VAR_13, VAR_6, VAR_7, VAR_8, VAR_9 );
        FUNC_0( VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 );
    }

    FUNC_0( VAR_10, VAR_11, VAR_12, VAR_13, VAR_6, VAR_7, VAR_8, VAR_9 );

    VAR_6 = *VAR_5++ ^ ( (uint32_t) VAR_0[ ( VAR_10 ) & 0xFF ] ) ^

            ( (uint32_t) VAR_0[ ( VAR_13 >> 8 ) & 0xFF ] << 8 ) ^
            ( (uint32_t) VAR_0[ ( VAR_12 >> 16 ) & 0xFF ] << 16 ) ^
            ( (uint32_t) VAR_0[ ( VAR_11 >> 24 ) & 0xFF ] << 24 );

    VAR_7 = *VAR_5++ ^ ( (uint32_t) VAR_0[ ( VAR_11 ) & 0xFF ] ) ^

            ( (uint32_t) VAR_0[ ( VAR_10 >> 8 ) & 0xFF ] << 8 ) ^
            ( (uint32_t) VAR_0[ ( VAR_13 >> 16 ) & 0xFF ] << 16 ) ^
            ( (uint32_t) VAR_0[ ( VAR_12 >> 24 ) & 0xFF ] << 24 );

    VAR_8 = *VAR_5++ ^ ( (uint32_t) VAR_0[ ( VAR_12 ) & 0xFF ] ) ^

            ( (uint32_t) VAR_0[ ( VAR_11 >> 8 ) & 0xFF ] << 8 ) ^
            ( (uint32_t) VAR_0[ ( VAR_10 >> 16 ) & 0xFF ] << 16 ) ^
            ( (uint32_t) VAR_0[ ( VAR_13 >> 24 ) & 0xFF ] << 24 );

    VAR_9 = *VAR_5++ ^ ( (uint32_t) VAR_0[ ( VAR_13 ) & 0xFF ] ) ^

            ( (uint32_t) VAR_0[ ( VAR_12 >> 8 ) & 0xFF ] << 8 ) ^
            ( (uint32_t) VAR_0[ ( VAR_11 >> 16 ) & 0xFF ] << 16 ) ^
            ( (uint32_t) VAR_0[ ( VAR_10 >> 24 ) & 0xFF ] << 24 );

    FUNC_2( VAR_6, VAR_3, 0 );
    FUNC_2( VAR_7, VAR_3, 4 );
    FUNC_2( VAR_8, VAR_3, 8 );
    FUNC_2( VAR_9, VAR_3, 12 );

    return( 0 );
}
