
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float64 ;
typedef int flag ;


 int FUNC_0 (int) ;

flag FUNC_1( float64 VAR_0 )
{

    return
           ( ( ( VAR_0>>51 ) & 0xFFF ) == 0xFFE )
        && ( VAR_0 & FUNC_0( 0x0007FFFFFFFFFFFF ) );

}
