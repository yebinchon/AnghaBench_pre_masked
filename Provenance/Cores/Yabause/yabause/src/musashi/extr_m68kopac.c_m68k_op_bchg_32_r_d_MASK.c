
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(void)
{
 uint* VAR_3 = &VAR_1;
 uint VAR_4 = 1 << (VAR_0 & 0x1f);

 VAR_2 = *VAR_3 & VAR_4;
 *VAR_3 ^= VAR_4;
}
