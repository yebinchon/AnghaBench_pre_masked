
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

void FUNC_1 (char *VAR_0, char *VAR_1)
{
 char *VAR_2;

 VAR_2 = VAR_0 + FUNC_0(VAR_0) - 1;




 while (VAR_2 != VAR_0 && *(VAR_2-1) != '\\' && *(VAR_2-1) != '/')
  VAR_2--;

 while (*VAR_2 && *VAR_2 != '.')
 {
  *VAR_1++ = *VAR_2++;
 }
 *VAR_1 = 0;
}
