
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static uint16_t FUNC_1( uint8_t * VAR_2, uint16_t VAR_3 )
{
    FUNC_0( VAR_2 != ((void*)0));

    uint8_t VAR_4 = 0xFF;
    uint8_t VAR_5 = 0xFF;
    int VAR_6;

    while ( VAR_3-- )
    {
        VAR_6 = VAR_5 ^ *(VAR_2++);
        VAR_5 = VAR_4 ^ VAR_0[VAR_6];
        VAR_4 = VAR_1[VAR_6];
    }
    return ((VAR_4 << 8) | VAR_5);
}
