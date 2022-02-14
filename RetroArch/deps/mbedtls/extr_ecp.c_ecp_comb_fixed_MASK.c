
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_mpi ;


 size_t FUNC_0 (int const*,size_t) ;
 int FUNC_1 (unsigned char*,int ,size_t) ;

__attribute__((used)) static void FUNC_2( unsigned char VAR_0[], size_t VAR_1,
                            unsigned char VAR_2, const mbedtls_mpi *VAR_3 )
{
    size_t VAR_4, VAR_5;
    unsigned char VAR_6, VAR_7, VAR_8;

    FUNC_1( VAR_0, 0, VAR_1+1 );


    for( VAR_4 = 0; VAR_4 < VAR_1; VAR_4++ )
        for( VAR_5 = 0; VAR_5 < VAR_2; VAR_5++ )
            VAR_0[VAR_4] |= FUNC_0( VAR_3, VAR_4 + VAR_1 * VAR_5 ) << VAR_5;


    VAR_6 = 0;
    for( VAR_4 = 1; VAR_4 <= VAR_1; VAR_4++ )
    {

        VAR_7 = VAR_0[VAR_4] & VAR_6;
        VAR_0[VAR_4] = VAR_0[VAR_4] ^ VAR_6;
        VAR_6 = VAR_7;


        VAR_8 = 1 - ( VAR_0[VAR_4] & 0x01 );
        VAR_6 |= VAR_0[VAR_4] & ( VAR_0[VAR_4-1] * VAR_8 );
        VAR_0[VAR_4] = VAR_0[VAR_4] ^ ( VAR_0[VAR_4-1] * VAR_8 );
        VAR_0[VAR_4-1] |= VAR_8 << 7;
    }
}
