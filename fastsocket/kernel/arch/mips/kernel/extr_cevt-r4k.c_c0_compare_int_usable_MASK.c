
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;

int FUNC_4(void)
{
 unsigned int VAR_0;
 unsigned int VAR_1;




 if (FUNC_0()) {
  FUNC_3(FUNC_2());
  FUNC_1();
  if (FUNC_0())
   return 0;
 }

 for (VAR_0 = 0x10; VAR_0 <= 0x400000; VAR_0 <<= 1) {
  VAR_1 = FUNC_2();
  VAR_1 += VAR_0;
  FUNC_3(VAR_1);
  FUNC_1();
  if ((int)(FUNC_2() - VAR_1) < 0)
      break;

 }

 while ((int)(FUNC_2() - VAR_1) <= 0)
  ;

 FUNC_1();
 if (!FUNC_0())
  return 0;

 FUNC_3(FUNC_2());
 FUNC_1();
 if (FUNC_0())
  return 0;




 return 1;
}
