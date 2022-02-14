
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int dummy; } ;


 unsigned int FUNC_0 (struct carlu**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct carlu*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct carlu*) ;
 struct carlu* FUNC_5 () ;
 int FUNC_6 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_7(void)
{
 struct carlu *VAR_2[32] = { 0 };
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3();
 if (VAR_4)
  return VAR_0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  VAR_2[VAR_3] = FUNC_5();
  if (FUNC_1(VAR_2[VAR_3]))
   break;
 }

 FUNC_6("Found %d devices\n", VAR_3);

 for (; VAR_3 > 0; VAR_3--)
  FUNC_4(VAR_2[VAR_3 - 1]);

 FUNC_2();
 return VAR_1;
}
