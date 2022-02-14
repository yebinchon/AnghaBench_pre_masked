
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int exception; } ;
typedef int int16 ;
typedef int float32 ;
typedef int flag ;
typedef int bits64 ;
typedef int bits32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,int*,int*) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct roundingData*,int,int,int) ;

float32 FUNC_8( struct roundingData *VAR_3, float32 VAR_4, float32 VAR_5 )
{
    flag VAR_6, VAR_7, VAR_8;
    int16 VAR_9, VAR_10, VAR_11;
    bits32 VAR_12, VAR_13, VAR_14;

    VAR_12 = FUNC_2( VAR_4 );
    VAR_9 = FUNC_1( VAR_4 );
    VAR_6 = FUNC_3( VAR_4 );
    VAR_13 = FUNC_2( VAR_5 );
    VAR_10 = FUNC_1( VAR_5 );
    VAR_7 = FUNC_3( VAR_5 );
    VAR_8 = VAR_6 ^ VAR_7;
    if ( VAR_9 == 0xFF ) {
        if ( VAR_12 ) return FUNC_6( VAR_4, VAR_5 );
        if ( VAR_10 == 0xFF ) {
            if ( VAR_13 ) return FUNC_6( VAR_4, VAR_5 );
            VAR_3->exception |= VAR_2;
            return VAR_0;
        }
        return FUNC_5( VAR_8, 0xFF, 0 );
    }
    if ( VAR_10 == 0xFF ) {
        if ( VAR_13 ) return FUNC_6( VAR_4, VAR_5 );
        return FUNC_5( VAR_8, 0, 0 );
    }
    if ( VAR_10 == 0 ) {
        if ( VAR_13 == 0 ) {
            if ( ( VAR_9 | VAR_12 ) == 0 ) {
                VAR_3->exception |= VAR_2;
                return VAR_0;
            }
            VAR_3->exception |= VAR_1;
            return FUNC_5( VAR_8, 0xFF, 0 );
        }
        FUNC_4( VAR_13, &VAR_10, &VAR_13 );
    }
    if ( VAR_9 == 0 ) {
        if ( VAR_12 == 0 ) return FUNC_5( VAR_8, 0, 0 );
        FUNC_4( VAR_12, &VAR_9, &VAR_12 );
    }
    VAR_11 = VAR_9 - VAR_10 + 0x7D;
    VAR_12 = ( VAR_12 | 0x00800000 )<<7;
    VAR_13 = ( VAR_13 | 0x00800000 )<<8;
    if ( VAR_13 <= ( VAR_12 + VAR_12 ) ) {
        VAR_12 >>= 1;
        ++VAR_11;
    }
    {
        bits64 VAR_15 = ( (bits64) VAR_12 )<<32;
        FUNC_0( VAR_15, VAR_13 );
        VAR_14 = VAR_15;
    }
    if ( ( VAR_14 & 0x3F ) == 0 ) {
        VAR_14 |= ( ( (bits64) VAR_13 ) * VAR_14 != ( (bits64) VAR_12 )<<32 );
    }
    return FUNC_7( VAR_3, VAR_8, VAR_11, VAR_14 );

}
