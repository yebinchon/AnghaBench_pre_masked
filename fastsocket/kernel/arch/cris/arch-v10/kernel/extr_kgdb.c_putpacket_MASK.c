
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char FUNC_0 () ;
 char FUNC_1 (int) ;
 char FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char) ;

__attribute__((used)) static void
FUNC_4(char *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;

 do {
  char *VAR_6 = VAR_2;
  FUNC_3 ('$');
  VAR_3 = 0;
  while (*VAR_6) {

   FUNC_3 (*VAR_6);
   VAR_3 += *VAR_6;
   VAR_4 = 0;
   while (VAR_4 < VAR_0 && *VAR_6 == VAR_6[VAR_4]) {
    VAR_4++;
   }
   if (VAR_4 > 3) {

    FUNC_3 ('*');
    VAR_3 += '*';
    VAR_5 = VAR_4 + ' ' - 4;
    FUNC_3 (VAR_5);
    VAR_3 += VAR_5;
    VAR_6 += VAR_4;
   }
   else {
    VAR_6++;
   }
  }
  FUNC_3('#');
  FUNC_3(FUNC_1(VAR_3));
  FUNC_3(FUNC_2(VAR_3));
 } while(VAR_1 && (FUNC_0() != '+'));
}
