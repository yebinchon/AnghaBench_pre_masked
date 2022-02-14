
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct console *VAR_0, const char *VAR_1, unsigned VAR_2)
{
 char VAR_3[26];
 int VAR_4;

 VAR_3[0] = 'O';

 while (VAR_2 > 0) {
  VAR_4 = 1;

  while (VAR_2 > 0 && VAR_4 < 20) {
   FUNC_1(VAR_1, VAR_3 + VAR_4, 2, 0);
   VAR_4 += 2;
   if (*VAR_1 == 0x0a) {
    VAR_3[VAR_4++] = '0';
    VAR_3[VAR_4++] = 'd';
   }
   VAR_1++;
   VAR_2--;
  }

  VAR_3[VAR_4] = 0;
  FUNC_0(VAR_3);
 }
}
