
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(char VAR_0)
{
 static int VAR_1 = 0;
 static int VAR_2 = 16;

 if (VAR_0 == '\n') {
  while (VAR_2-- > 0)
   FUNC_0(' ');
  VAR_2 = 16;
  FUNC_1(500);
  VAR_1 = 1;
 } else {
  if (VAR_1) {
   FUNC_0('\r');
   FUNC_0('\n');
  }
  VAR_1 = 0;
  if (VAR_2--) {
   FUNC_0(VAR_0);
   FUNC_2(10000);
  }
 }
}
