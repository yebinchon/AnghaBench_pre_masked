
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int UCHAR ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1( UCHAR * VAR_1, USHORT VAR_2, UCHAR VAR_3,
                UCHAR VAR_4 )
{
    USHORT VAR_5;
    USHORT VAR_6;
    USHORT VAR_7;
    USHORT VAR_8;
    USHORT VAR_9 = VAR_4;

    FUNC_0( VAR_3 <= 8 );
    FUNC_0( ( size_t )VAR_0 == sizeof( UCHAR ) * 8 );



    VAR_7 = ( USHORT )( ( VAR_2 ) / VAR_0 );


    VAR_8 = ( USHORT )( VAR_2 - VAR_7 * VAR_0 );


    VAR_9 <<= VAR_8;


    VAR_6 = ( USHORT )( ( 1 << ( USHORT ) VAR_3 ) - 1 );
    VAR_6 <<= VAR_2 - VAR_7 * VAR_0;


    VAR_5 = VAR_1[VAR_7];
    VAR_5 |= VAR_1[VAR_7 + 1] << VAR_0;


    VAR_5 = ( USHORT )( ( VAR_5 & ( ~VAR_6 ) ) | VAR_9 );


    VAR_1[VAR_7] = ( UCHAR )( VAR_5 & 0xFF );
    VAR_1[VAR_7 + 1] = ( UCHAR )( VAR_5 >> VAR_0 );
}
