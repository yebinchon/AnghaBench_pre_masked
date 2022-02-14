
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int UCHAR ;


 int VAR_0 ;

UCHAR
FUNC_0( UCHAR * VAR_1, USHORT VAR_2, UCHAR VAR_3 )
{
    USHORT VAR_4;
    USHORT VAR_5;
    USHORT VAR_6;
    USHORT VAR_7;



    VAR_6 = ( USHORT )( ( VAR_2 ) / VAR_0 );


    VAR_7 = ( USHORT )( VAR_2 - VAR_6 * VAR_0 );


    VAR_5 = ( USHORT )( ( 1 << ( USHORT ) VAR_3 ) - 1 );


    VAR_4 = VAR_1[VAR_6];
    VAR_4 |= VAR_1[VAR_6 + 1] << VAR_0;


    VAR_4 >>= VAR_7;


    VAR_4 &= VAR_5;

    return ( UCHAR ) VAR_4;
}
