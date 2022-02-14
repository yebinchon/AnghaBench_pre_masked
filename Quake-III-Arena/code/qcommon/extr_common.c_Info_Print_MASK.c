
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (char*,...) ;

void FUNC_2( const char *VAR_0 ) {
 char VAR_1[512];
 char VAR_2[512];
 char *VAR_3;
 int VAR_4;

 if (*VAR_0 == '\\')
  VAR_0++;
 while (*VAR_0)
 {
  VAR_3 = VAR_1;
  while (*VAR_0 && *VAR_0 != '\\')
   *VAR_3++ = *VAR_0++;

  VAR_4 = VAR_3 - VAR_1;
  if (VAR_4 < 20)
  {
   FUNC_0 (VAR_3, ' ', 20-VAR_4);
   VAR_1[20] = 0;
  }
  else
   *VAR_3 = 0;
  FUNC_1 ("%s", VAR_1);

  if (!*VAR_0)
  {
   FUNC_1 ("MISSING VALUE\n");
   return;
  }

  VAR_3 = VAR_2;
  VAR_0++;
  while (*VAR_0 && *VAR_0 != '\\')
   *VAR_3++ = *VAR_0++;
  *VAR_3 = 0;

  if (*VAR_0)
   VAR_0++;
  FUNC_1 ("%s\n", VAR_2);
 }
}
