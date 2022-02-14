
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int suspend_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

int FUNC_2(u32 VAR_4)
{
 suspend_state_t VAR_5[] = {
  [1] = VAR_3,
  [3] = VAR_2,
  [5] = VAR_1
 };

 if (VAR_4 < 6 && VAR_5[VAR_4])
  return FUNC_1(VAR_5[VAR_4]);
 if (VAR_4 == 4)
  return FUNC_0();
 return -VAR_0;
}
