
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(char *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3 = VAR_0;

 while ((unsigned char)*VAR_1 >= ' ' && VAR_2--) {
  if (*VAR_1 == '/')
   *VAR_0++ = '.';
  else
   *VAR_0++ = *VAR_1;
  VAR_1++;
 }
 *VAR_0 = '\0';

 return VAR_0 - VAR_3;
}
