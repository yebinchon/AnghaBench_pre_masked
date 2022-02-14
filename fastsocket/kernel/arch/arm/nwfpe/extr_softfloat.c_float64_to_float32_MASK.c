
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int dummy; } ;
typedef int int16 ;
typedef int float64 ;
typedef int float32 ;
typedef int flag ;
typedef int bits64 ;
typedef int bits32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct roundingData*,int ,int,int) ;
 int FUNC_7 (int,int,int*) ;

float32 FUNC_8( struct roundingData *VAR_0, float64 VAR_1 )
{
    flag VAR_2;
    int16 VAR_3;
    bits64 VAR_4;
    bits32 VAR_5;

    VAR_4 = FUNC_2( VAR_1 );
    VAR_3 = FUNC_1( VAR_1 );
    VAR_2 = FUNC_3( VAR_1 );
    if ( VAR_3 == 0x7FF ) {
        if ( VAR_4 ) return FUNC_0( FUNC_4( VAR_1 ) );
        return FUNC_5( VAR_2, 0xFF, 0 );
    }
    FUNC_7( VAR_4, 22, &VAR_4 );
    VAR_5 = VAR_4;
    if ( VAR_3 || VAR_5 ) {
        VAR_5 |= 0x40000000;
        VAR_3 -= 0x381;
    }
    return FUNC_6( VAR_0, VAR_2, VAR_3, VAR_5 );

}
