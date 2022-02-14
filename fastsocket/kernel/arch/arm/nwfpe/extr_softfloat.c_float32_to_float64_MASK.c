
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int float64 ;
typedef int float32 ;
typedef int flag ;
typedef int bits64 ;
typedef scalar_t__ bits32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int*,scalar_t__*) ;
 int FUNC_6 (int ,int,int) ;

float64 FUNC_7( float32 VAR_0 )
{
    flag VAR_1;
    int16 VAR_2;
    bits32 VAR_3;

    VAR_3 = FUNC_2( VAR_0 );
    VAR_2 = FUNC_1( VAR_0 );
    VAR_1 = FUNC_3( VAR_0 );
    if ( VAR_2 == 0xFF ) {
        if ( VAR_3 ) return FUNC_0( FUNC_4( VAR_0 ) );
        return FUNC_6( VAR_1, 0x7FF, 0 );
    }
    if ( VAR_2 == 0 ) {
        if ( VAR_3 == 0 ) return FUNC_6( VAR_1, 0, 0 );
        FUNC_5( VAR_3, &VAR_2, &VAR_3 );
        --VAR_2;
    }
    return FUNC_6( VAR_1, VAR_2 + 0x380, ( (bits64) VAR_3 )<<29 );

}
