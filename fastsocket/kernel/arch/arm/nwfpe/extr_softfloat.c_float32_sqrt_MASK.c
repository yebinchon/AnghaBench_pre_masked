
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int exception; } ;
typedef scalar_t__ sbits64 ;
typedef int int16 ;
typedef int float32 ;
typedef scalar_t__ flag ;
typedef int bits64 ;
typedef int bits32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,int*,int*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct roundingData*,int ,int,int) ;
 int FUNC_7 (int,int,int*) ;

float32 FUNC_8( struct roundingData *VAR_2, float32 VAR_3 )
{
    flag VAR_4;
    int16 VAR_5, VAR_6;
    bits32 VAR_7, VAR_8;
    bits64 VAR_9, VAR_10;

    VAR_7 = FUNC_2( VAR_3 );
    VAR_5 = FUNC_1( VAR_3 );
    VAR_4 = FUNC_3( VAR_3 );
    if ( VAR_5 == 0xFF ) {
        if ( VAR_7 ) return FUNC_5( VAR_3, 0 );
        if ( ! VAR_4 ) return VAR_3;
        VAR_2->exception |= VAR_1;
        return VAR_0;
    }
    if ( VAR_4 ) {
        if ( ( VAR_5 | VAR_7 ) == 0 ) return VAR_3;
        VAR_2->exception |= VAR_1;
        return VAR_0;
    }
    if ( VAR_5 == 0 ) {
        if ( VAR_7 == 0 ) return 0;
        FUNC_4( VAR_7, &VAR_5, &VAR_7 );
    }
    VAR_6 = ( ( VAR_5 - 0x7F )>>1 ) + 0x7E;
    VAR_7 = ( VAR_7 | 0x00800000 )<<8;
    VAR_8 = FUNC_0( VAR_5, VAR_7 ) + 2;
    if ( ( VAR_8 & 0x7F ) <= 5 ) {
        if ( VAR_8 < 2 ) {
            VAR_8 = 0xFFFFFFFF;
        }
        else {
            VAR_7 >>= VAR_5 & 1;
            VAR_10 = ( (bits64) VAR_8 ) * VAR_8;
            VAR_9 = ( ( (bits64) VAR_7 )<<32 ) - VAR_10;
            while ( (sbits64) VAR_9 < 0 ) {
                --VAR_8;
                VAR_9 += ( ( (bits64) VAR_8 )<<1 ) | 1;
            }
            VAR_8 |= ( VAR_9 != 0 );
        }
    }
    FUNC_7( VAR_8, 1, &VAR_8 );
    return FUNC_6( VAR_2, 0, VAR_6, VAR_8 );

}
