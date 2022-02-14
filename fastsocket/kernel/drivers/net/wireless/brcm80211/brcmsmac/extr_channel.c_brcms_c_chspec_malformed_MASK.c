
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(u16 VAR_0)
{

 if (!FUNC_3(VAR_0) && !FUNC_1(VAR_0))
  return 1;

 if (!FUNC_2(VAR_0) && !FUNC_0(VAR_0))
  return 1;


 if (FUNC_0(VAR_0)) {
  if (!FUNC_5(VAR_0))
   return 1;
 } else if (!FUNC_6(VAR_0) && !FUNC_4(VAR_0)) {
  return 1;
 }

 return 0;
}
