
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {scalar_t__ mode; int exception; } ;
typedef scalar_t__ int8 ;
typedef int int32 ;
typedef int flag ;
typedef int bits64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int32 FUNC_0( struct roundingData *VAR_6, flag VAR_7, bits64 VAR_8 )
{
    int8 VAR_9;
    flag VAR_10;
    int8 VAR_11, VAR_12;
    int32 VAR_13;

    VAR_9 = VAR_6->mode;
    VAR_10 = ( VAR_9 == VAR_3 );
    VAR_11 = 0x40;
    if ( ! VAR_10 ) {
        if ( VAR_9 == VAR_4 ) {
            VAR_11 = 0;
        }
        else {
            VAR_11 = 0x7F;
            if ( VAR_7 ) {
                if ( VAR_9 == VAR_5 ) VAR_11 = 0;
            }
            else {
                if ( VAR_9 == VAR_2 ) VAR_11 = 0;
            }
        }
    }
    VAR_12 = VAR_8 & 0x7F;
    VAR_8 = ( VAR_8 + VAR_11 )>>7;
    VAR_8 &= ~ ( ( ( VAR_12 ^ 0x40 ) == 0 ) & VAR_10 );
    VAR_13 = VAR_8;
    if ( VAR_7 ) VAR_13 = - VAR_13;
    if ( ( VAR_8>>32 ) || ( VAR_13 && ( ( VAR_13 < 0 ) ^ VAR_7 ) ) ) {
        VAR_6->exception |= VAR_1;
        return VAR_7 ? 0x80000000 : 0x7FFFFFFF;
    }
    if ( VAR_12 ) VAR_6->exception |= VAR_0;
    return VAR_13;

}
