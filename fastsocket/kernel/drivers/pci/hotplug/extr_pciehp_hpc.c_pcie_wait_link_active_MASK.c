
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int dummy; } ;


 scalar_t__ FUNC_0 (struct controller*) ;
 int FUNC_1 (struct controller*,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct controller *VAR_0)
{
 int VAR_1 = 1000;

 if (FUNC_0(VAR_0))
  return;
 while (VAR_1 > 0) {
  FUNC_2(10);
  VAR_1 -= 10;
  if (FUNC_0(VAR_0))
   return;
 }
 FUNC_1(VAR_0, "Data Link Layer Link Active not set in 1000 msec\n");
}
