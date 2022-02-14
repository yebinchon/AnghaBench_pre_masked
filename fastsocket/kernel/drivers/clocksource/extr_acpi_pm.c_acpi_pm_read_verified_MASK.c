
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

u32 FUNC_2(void)
{
 u32 VAR_0 = 0, VAR_1 = 0, VAR_2 = 0;







 do {
  VAR_0 = FUNC_0();
  VAR_1 = FUNC_0();
  VAR_2 = FUNC_0();
 } while (FUNC_1((VAR_0 > VAR_1 && VAR_0 < VAR_2) || (VAR_1 > VAR_2 && VAR_1 < VAR_0)
     || (VAR_2 > VAR_0 && VAR_2 < VAR_1)));

 return VAR_1;
}
