
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;

__attribute__((used)) static VOID FUNC_2 (BYTE VAR_4)
{

    VAR_1 |= VAR_4 << (8*VAR_3);
    VAR_3++;

    if( VAR_3 >= 4 )
    {
        VAR_0 ^= VAR_1;
        VAR_2 ^= FUNC_0( VAR_0, 17 );
        VAR_0 += VAR_2;
        VAR_2 ^= ((VAR_0 & 0xff00ff00) >> 8) | ((VAR_0 & 0x00ff00ff) << 8);
        VAR_0 += VAR_2;
        VAR_2 ^= FUNC_0( VAR_0, 3 );
        VAR_0 += VAR_2;
        VAR_2 ^= FUNC_1( VAR_0, 2 );
        VAR_0 += VAR_2;

        VAR_1 = 0;
        VAR_3 = 0;
    }
}
