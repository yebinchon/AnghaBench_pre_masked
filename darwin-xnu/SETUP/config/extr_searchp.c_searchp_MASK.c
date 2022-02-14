
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

int
FUNC_1(const char *VAR_0, char *VAR_1, char *VAR_2, int (*VAR_3)(char *))
{
 const char *VAR_4, *VAR_5, *VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_4 = ((*VAR_1 == '/') ? "" : VAR_0);
 do {
  VAR_7 = VAR_2;
  VAR_5 = VAR_4;
  while (*VAR_5 && (*VAR_5 != ':'))
   *VAR_7++ = *VAR_5++;
  if (VAR_5 != VAR_4 && *VAR_1) *VAR_7++ = '/';
  VAR_6 = VAR_5;
  VAR_4 = ((*VAR_5) ? VAR_5 + 1 : VAR_5);
  VAR_5 = VAR_1;
  while (*VAR_5) *VAR_7++ = *VAR_5++;
  *VAR_7 = '\0';
  VAR_8 = (*VAR_3) (VAR_2);
 }
 while (VAR_8 && (*VAR_6));
 return (VAR_8 ? -1 : 0);
}
