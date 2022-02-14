
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int float32 ;
typedef int flag ;



flag FUNC_0( float32 VAR_0 )
{

    return ( ( ( VAR_0>>22 ) & 0x1FF ) == 0x1FE ) && ( VAR_0 & 0x003FFFFF );

}
