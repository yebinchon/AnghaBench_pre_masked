
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,unsigned char const*,int) ;
 int FUNC_1 (int,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2( unsigned char VAR_0[16],
                                    const unsigned char VAR_1[16] )
{
    uint64_t VAR_2, VAR_3, VAR_4, VAR_5;

    FUNC_0( VAR_2, VAR_1, 0 );
    FUNC_0( VAR_3, VAR_1, 8 );

    VAR_4 = ( VAR_2 << 1 ) ^ 0x0087 >> ( 8 - ( ( VAR_3 >> 63 ) << 3 ) );
    VAR_5 = ( VAR_2 >> 63 ) | ( VAR_3 << 1 );

    FUNC_1( VAR_4, VAR_0, 0 );
    FUNC_1( VAR_5, VAR_0, 8 );
}
