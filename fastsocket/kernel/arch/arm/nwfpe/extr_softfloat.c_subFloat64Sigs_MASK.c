
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {scalar_t__ mode; int exception; } ;
typedef int int16 ;
typedef int float64 ;
typedef int flag ;
typedef int bits64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct roundingData*,int,int,int) ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int,int*) ;

__attribute__((used)) static float64 FUNC_7( struct roundingData *VAR_3, float64 VAR_4, float64 VAR_5, flag VAR_6 )
{
    int16 VAR_7, VAR_8, VAR_9;
    bits64 VAR_10, VAR_11, VAR_12;
    int16 VAR_13;

    VAR_10 = FUNC_2( VAR_4 );
    VAR_7 = FUNC_1( VAR_4 );
    VAR_11 = FUNC_2( VAR_5 );
    VAR_8 = FUNC_1( VAR_5 );
    VAR_13 = VAR_7 - VAR_8;
    VAR_10 <<= 10;
    VAR_11 <<= 10;
    if ( 0 < VAR_13 ) goto aExpBigger;
    if ( VAR_13 < 0 ) goto bExpBigger;
    if ( VAR_7 == 0x7FF ) {
        if ( VAR_10 | VAR_11 ) return FUNC_5( VAR_4, VAR_5 );
        VAR_3->exception |= VAR_1;
        return VAR_0;
    }
    if ( VAR_7 == 0 ) {
        VAR_7 = 1;
        VAR_8 = 1;
    }
    if ( VAR_11 < VAR_10 ) goto aBigger;
    if ( VAR_10 < VAR_11 ) goto bBigger;
    return FUNC_4( VAR_3->mode == VAR_2, 0, 0 );
 bExpBigger:
    if ( VAR_8 == 0x7FF ) {
        if ( VAR_11 ) return FUNC_5( VAR_4, VAR_5 );
        return FUNC_4( VAR_6 ^ 1, 0x7FF, 0 );
    }
    if ( VAR_7 == 0 ) {
        ++VAR_13;
    }
    else {
        VAR_10 |= FUNC_0( 0x4000000000000000 );
    }
    FUNC_6( VAR_10, - VAR_13, &VAR_10 );
    VAR_11 |= FUNC_0( 0x4000000000000000 );
 bBigger:
    VAR_12 = VAR_11 - VAR_10;
    VAR_9 = VAR_8;
    VAR_6 ^= 1;
    goto normalizeRoundAndPack;
 aExpBigger:
    if ( VAR_7 == 0x7FF ) {
        if ( VAR_10 ) return FUNC_5( VAR_4, VAR_5 );
        return VAR_4;
    }
    if ( VAR_8 == 0 ) {
        --VAR_13;
    }
    else {
        VAR_11 |= FUNC_0( 0x4000000000000000 );
    }
    FUNC_6( VAR_11, VAR_13, &VAR_11 );
    VAR_10 |= FUNC_0( 0x4000000000000000 );
 aBigger:
    VAR_12 = VAR_10 - VAR_11;
    VAR_9 = VAR_7;
 normalizeRoundAndPack:
    --VAR_9;
    return FUNC_3( VAR_3, VAR_6, VAR_9, VAR_12 );

}
