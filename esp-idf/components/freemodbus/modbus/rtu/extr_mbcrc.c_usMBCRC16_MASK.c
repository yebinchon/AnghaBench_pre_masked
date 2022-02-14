
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int UCHAR ;


 int* VAR_0 ;
 int* VAR_1 ;

USHORT
FUNC_0( UCHAR * VAR_2, USHORT VAR_3 )
{
    UCHAR VAR_4 = 0xFF;
    UCHAR VAR_5 = 0xFF;
    int VAR_6;

    while( VAR_3-- )
    {
        VAR_6 = VAR_5 ^ *( VAR_2++ );
        VAR_5 = ( UCHAR )( VAR_4 ^ VAR_0[VAR_6] );
        VAR_4 = VAR_1[VAR_6];
    }
    return ( USHORT )( VAR_4 << 8 | VAR_5 );
}
