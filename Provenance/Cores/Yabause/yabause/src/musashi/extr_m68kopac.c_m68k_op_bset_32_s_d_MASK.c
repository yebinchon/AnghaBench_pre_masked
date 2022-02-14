
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

void FUNC_1(void)
{
 uint* VAR_2 = &VAR_0;
 uint VAR_3 = 1 << (FUNC_0() & 0x1f);

 VAR_1 = *VAR_2 & VAR_3;
 *VAR_2 |= VAR_3;
}
