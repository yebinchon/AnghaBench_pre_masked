
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(u32 VAR_5, u32 VAR_6, int VAR_7)
{
 if (FUNC_2(VAR_5) && !(VAR_6 & VAR_2))
  return 0;
 if (FUNC_1(VAR_5) && !(VAR_6 & VAR_1))
  return 0;
 if (FUNC_4(VAR_5) && !(VAR_6 & VAR_4))
  return 0;
 if (FUNC_3(VAR_5) && !(VAR_6 & VAR_3))
  return 0;
 if (!VAR_7 && FUNC_2(VAR_5))
  if (FUNC_0(VAR_5) && !(VAR_6 & VAR_0))
   return 0;
 return 1;
}
