
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int dummy; } ;
typedef int int32 ;
typedef int int16 ;
typedef int float32 ;
typedef scalar_t__ flag ;
typedef int bits64 ;
typedef int bits32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct roundingData*,scalar_t__,int) ;
 int FUNC_4 (int,int,int*) ;

int32 FUNC_5( struct roundingData *VAR_0, float32 VAR_1 )
{
    flag VAR_2;
    int16 VAR_3, VAR_4;
    bits32 VAR_5;
    bits64 VAR_6;

    VAR_5 = FUNC_1( VAR_1 );
    VAR_3 = FUNC_0( VAR_1 );
    VAR_2 = FUNC_2( VAR_1 );
    if ( ( VAR_3 == 0x7FF ) && VAR_5 ) VAR_2 = 0;
    if ( VAR_3 ) VAR_5 |= 0x00800000;
    VAR_4 = 0xAF - VAR_3;
    VAR_6 = VAR_5;
    VAR_6 <<= 32;
    if ( 0 < VAR_4 ) FUNC_4( VAR_6, VAR_4, &VAR_6 );
    return FUNC_3( VAR_0, VAR_2, VAR_6 );

}
