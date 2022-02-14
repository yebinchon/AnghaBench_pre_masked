
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(void)
{
 if(FUNC_0(VAR_0))
 {

  uint VAR_3 = VAR_2 + FUNC_2();
  uint* VAR_4 = &VAR_1;

  *VAR_4 = FUNC_1(*VAR_4) | ((VAR_3 >> 4) & 0x00f0) | (VAR_3 & 0x000f);
  return;
 }
 FUNC_3();
}
