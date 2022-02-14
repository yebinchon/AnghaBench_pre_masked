
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int int16 ;
typedef int float32 ;
typedef scalar_t__ flag ;
typedef int bits32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

int32 FUNC_4( float32 VAR_2 )
{
    flag VAR_3;
    int16 VAR_4, VAR_5;
    bits32 VAR_6;
    int32 VAR_7;

    VAR_6 = FUNC_1( VAR_2 );
    VAR_4 = FUNC_0( VAR_2 );
    VAR_3 = FUNC_2( VAR_2 );
    VAR_5 = VAR_4 - 0x9E;
    if ( 0 <= VAR_5 ) {
        if ( VAR_2 == 0xCF000000 ) return 0x80000000;
        FUNC_3( VAR_1 );
        if ( ! VAR_3 || ( ( VAR_4 == 0xFF ) && VAR_6 ) ) return 0x7FFFFFFF;
        return 0x80000000;
    }
    else if ( VAR_4 <= 0x7E ) {
        if ( VAR_4 | VAR_6 ) FUNC_3( VAR_0 );
        return 0;
    }
    VAR_6 = ( VAR_6 | 0x00800000 )<<8;
    VAR_7 = VAR_6>>( - VAR_5 );
    if ( (bits32) ( VAR_6<<( VAR_5 & 31 ) ) ) {
        FUNC_3( VAR_0 );
    }
    return VAR_3 ? - VAR_7 : VAR_7;

}
