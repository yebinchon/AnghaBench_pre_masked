
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

__attribute__((used)) static char *FUNC_0(void)
{
 char *VAR_1 = VAR_0;
 while (*VAR_1 == ' ')
  VAR_1++;
 if (*VAR_1 == '\0')
  return ((void*)0);
 VAR_0 = VAR_1;
 do {
  VAR_0++;
  if (*VAR_0 == ' ') {
   *VAR_0++ = '\0';
   break;
  }
 } while (*VAR_0 != '\0');
 return VAR_1;
}
