
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;


 int FUNC_0 (struct gameport*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct gameport *VAR_0)
{
 int VAR_1[] = { 4, -2, -3, 10, -6, -11, -7, -9, 11, 0 };
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++) {
  FUNC_0(VAR_0);
  if (VAR_1[VAR_2] > 0)
   FUNC_2(VAR_1[VAR_2]);
  if (VAR_1[VAR_2] < 0) {
   FUNC_1(-VAR_1[VAR_2]);
   FUNC_3(-VAR_1[VAR_2]*14);
  }
 }
}
