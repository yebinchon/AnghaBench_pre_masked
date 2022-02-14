
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char) ;

__attribute__((used)) static void
FUNC_1(char *VAR_1, char *VAR_2,int VAR_3)
{
 int VAR_4 = 1;
 int VAR_5 = VAR_0 - 1;


 while (FUNC_0(" 0123456789,#.*WPTSR-", *VAR_1) && *VAR_1 && --VAR_3>0) {
  if ((*VAR_1 >= '0' && *VAR_1 <= '9') || ((*VAR_1 == 'S') && VAR_4) ||
      ((*VAR_1 == 'R') && VAR_4) ||
      (*VAR_1 == '*') || (*VAR_1 == '#')) {
   *VAR_2++ = *VAR_1;
   VAR_5--;
  }
  if(!VAR_5)
   break;
  VAR_1++;
  VAR_4 = 0;
 }
 *VAR_2 = 0;
}
