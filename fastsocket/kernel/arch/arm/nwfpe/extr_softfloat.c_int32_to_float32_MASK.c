
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roundingData {int dummy; } ;
typedef int int32 ;
typedef int float32 ;
typedef int flag ;


 int FUNC_0 (struct roundingData*,int,int,int) ;
 int FUNC_1 (int,int,int ) ;

float32 FUNC_2(struct roundingData *VAR_0, int32 VAR_1)
{
    flag VAR_2;

    if ( VAR_1 == 0 ) return 0;
    if ( VAR_1 == 0x80000000 ) return FUNC_1( 1, 0x9E, 0 );
    VAR_2 = ( VAR_1 < 0 );
    return FUNC_0( VAR_0, VAR_2, 0x9C, VAR_2 ? - VAR_1 : VAR_1 );

}
