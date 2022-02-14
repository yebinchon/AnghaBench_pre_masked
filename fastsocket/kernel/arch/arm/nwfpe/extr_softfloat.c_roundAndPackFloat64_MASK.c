
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {scalar_t__ mode; int exception; } ;
typedef scalar_t__ sbits64 ;
typedef scalar_t__ int8 ;
typedef int int16 ;
typedef scalar_t__ float64 ;
typedef int flag ;
typedef int bits64 ;
typedef int bits16 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int*) ;

__attribute__((used)) static float64 FUNC_3( struct roundingData *VAR_9, flag VAR_10, int16 VAR_11, bits64 VAR_12 )
{
    int8 VAR_13;
    flag VAR_14;
    int16 VAR_15, VAR_16;
    flag VAR_17;

    VAR_13 = VAR_9->mode;
    VAR_14 = ( VAR_13 == VAR_5 );
    VAR_15 = 0x200;
    if ( ! VAR_14 ) {
        if ( VAR_13 == VAR_6 ) {
            VAR_15 = 0;
        }
        else {
            VAR_15 = 0x3FF;
            if ( VAR_10 ) {
                if ( VAR_13 == VAR_7 ) VAR_15 = 0;
            }
            else {
                if ( VAR_13 == VAR_4 ) VAR_15 = 0;
            }
        }
    }
    VAR_16 = VAR_12 & 0x3FF;
    if ( 0x7FD <= (bits16) VAR_11 ) {
        if ( ( 0x7FD < VAR_11 )
             || ( ( VAR_11 == 0x7FD )
                  && ( (sbits64) ( VAR_12 + VAR_15 ) < 0 ) )
           ) {


            VAR_9->exception |= VAR_2 | VAR_1;
            return FUNC_1( VAR_10, 0x7FF, 0 ) - ( VAR_15 == 0 );
        }
        if ( VAR_11 < 0 ) {
            VAR_17 =
                   ( VAR_0 == VAR_8 )
                || ( VAR_11 < -1 )
                || ( VAR_12 + VAR_15 < FUNC_0( 0x8000000000000000 ) );
            FUNC_2( VAR_12, - VAR_11, &VAR_12 );
            VAR_11 = 0;
            VAR_16 = VAR_12 & 0x3FF;
            if ( VAR_17 && VAR_16 ) VAR_9->exception |= VAR_3;
        }
    }
    if ( VAR_16 ) VAR_9->exception |= VAR_1;
    VAR_12 = ( VAR_12 + VAR_15 )>>10;
    VAR_12 &= ~ ( ( ( VAR_16 ^ 0x200 ) == 0 ) & VAR_14 );
    if ( VAR_12 == 0 ) VAR_11 = 0;
    return FUNC_1( VAR_10, VAR_11, VAR_12 );

}
