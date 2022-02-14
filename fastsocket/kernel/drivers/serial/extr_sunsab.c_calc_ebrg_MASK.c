
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1, int *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_1 == 0) {
  *VAR_2 = 0;
  *VAR_3 = 0;
  return;
 }






 VAR_4 = (VAR_0 * 10) / VAR_1;
 VAR_5 = 0;
 while (VAR_4 >= 640) {
  VAR_4 = VAR_4 / 2;
  VAR_5++;
 }
 VAR_4 = (VAR_4+5) / 10;




 if ((VAR_5 == 0) && ((VAR_4 & 1) == 0)) {
  VAR_4 = VAR_4 / 2;
  VAR_5++;
 }
 *VAR_2 = VAR_4 - 1;
 *VAR_3 = VAR_5;
}
