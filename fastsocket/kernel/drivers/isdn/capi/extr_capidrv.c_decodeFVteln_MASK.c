
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, unsigned long *VAR_1, int *VAR_2)
{
 unsigned long VAR_3 = 0;
 int VAR_4 = !0;
 char *VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_0, "FV:", 3) != 0)
  return 1;
 VAR_5 = VAR_0 + 3;
 while (*VAR_5 && *VAR_5 == ' ') VAR_5++;
 if (!*VAR_5) return -2;
 if (*VAR_5 == 'p' || *VAR_5 == 'P') {
  VAR_4 = 0;
  VAR_5++;
 }
 if (*VAR_5 == 'a' || *VAR_5 == 'A') {
  VAR_4 = !0;
  VAR_5++;
 }
 while (*VAR_5) {
  int VAR_7 = 0;
  int VAR_8 = 0;
  if (!FUNC_0(*VAR_5)) return -3;
  while (FUNC_0(*VAR_5)) { VAR_7 = VAR_7*10 + (*VAR_5 - '0'); VAR_5++; }
  if (VAR_7 <= 0 || VAR_7 > 30) return -4;
  if (*VAR_5 == 0 || *VAR_5 == ',' || *VAR_5 == ' ') {
   VAR_3 |= (1 << VAR_7);
   VAR_7 = 0;
   if (*VAR_5) VAR_5++;
   continue;
  }
  if (*VAR_5 != '-') return -5;
  VAR_5++;
  if (!FUNC_0(*VAR_5)) return -3;
  while (FUNC_0(*VAR_5)) { VAR_8 = VAR_8*10 + (*VAR_5 - '0'); VAR_5++; }
  if (VAR_8 <= 0 || VAR_8 > 30) return -4;
  if (*VAR_5 == 0 || *VAR_5 == ',' || *VAR_5 == ' ') {
   if (VAR_7 > VAR_8)
    for (VAR_6 = VAR_8; VAR_6 <= VAR_7 ; VAR_6++)
     VAR_3 |= (1 << VAR_6);
   else
    for (VAR_6 = VAR_7; VAR_6 <= VAR_8 ; VAR_6++)
     VAR_3 |= (1 << VAR_6);
   VAR_7 = VAR_8 = 0;
   if (*VAR_5) VAR_5++;
   continue;
  }
  return -6;
 }
 if (VAR_2) *VAR_2 = VAR_4;
 if (VAR_1) *VAR_1 = VAR_3;
 return 0;
}
