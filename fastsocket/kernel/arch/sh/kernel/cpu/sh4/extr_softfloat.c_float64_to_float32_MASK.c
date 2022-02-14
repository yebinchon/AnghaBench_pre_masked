
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int16 ;
typedef int float64 ;
typedef int float32 ;
typedef int flag ;
typedef int bits64 ;
typedef int bits32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int,int,int*) ;

float32 FUNC_5(float64 VAR_0)
{
    flag VAR_1;
    int16 VAR_2;
    bits64 VAR_3;
    bits32 VAR_4;

    VAR_3 = FUNC_1( VAR_0 );
    VAR_2 = FUNC_0( VAR_0 );
    VAR_1 = FUNC_2( VAR_0 );

    FUNC_4( VAR_3, 22, &VAR_3 );
    VAR_4 = VAR_3;
    if ( VAR_2 || VAR_4 ) {
        VAR_4 |= 0x40000000;
        VAR_2 -= 0x381;
    }
    return FUNC_3(VAR_1, VAR_2, VAR_4);
}
