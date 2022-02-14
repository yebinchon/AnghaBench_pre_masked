
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (unsigned char) ;
 char FUNC_4 () ;
 int FUNC_5 (char*,char*) ;

int FUNC_6(int VAR_1, char *VAR_2[])
{
 unsigned char VAR_3;

 if (VAR_1 != 2) {
  FUNC_5(
   "Sintax:  %s fbdev\n"
   "Usually: /dev/fb0, /dev/fb1...\n", VAR_2[0]);
  return -1;
 }

 if (FUNC_2(VAR_2[1])) {
  FUNC_5("Can't init %s fbdev\n", VAR_2[1]);
  return -2;
 }

 for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {
  FUNC_3(VAR_3);
  FUNC_0();
  while (FUNC_4() != '\n');
 }

 FUNC_1();

 return 0;
}
