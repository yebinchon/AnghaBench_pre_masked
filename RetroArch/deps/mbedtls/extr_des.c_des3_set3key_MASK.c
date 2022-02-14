
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int *,unsigned char const*) ;

__attribute__((used)) static void FUNC_1( uint32_t VAR_0[96],
                          uint32_t VAR_1[96],
                          const unsigned char VAR_2[24] )
{
    int VAR_3;

    FUNC_0( VAR_0, VAR_2 );
    FUNC_0( VAR_1 + 32, VAR_2 + 8 );
    FUNC_0( VAR_0 + 64, VAR_2 + 16 );

    for( VAR_3 = 0; VAR_3 < 32; VAR_3 += 2 )
    {
        VAR_1[VAR_3 ] = VAR_0[94 - VAR_3];
        VAR_1[VAR_3 + 1] = VAR_0[95 - VAR_3];

        VAR_0[VAR_3 + 32] = VAR_1[62 - VAR_3];
        VAR_0[VAR_3 + 33] = VAR_1[63 - VAR_3];

        VAR_1[VAR_3 + 64] = VAR_0[30 - VAR_3];
        VAR_1[VAR_3 + 65] = VAR_0[31 - VAR_3];
    }
}
