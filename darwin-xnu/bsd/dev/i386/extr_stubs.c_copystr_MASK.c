
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int
FUNC_0(const void *VAR_1, void *VAR_2, size_t VAR_3, size_t *VAR_4)
{
 size_t VAR_5;
 char const *VAR_6 = (char const *) VAR_1;
 char *VAR_7 = (char *) VAR_2;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if ((*VAR_7++ = *VAR_6++) == '\0') {
   if (VAR_4)
    *VAR_4 = VAR_5 + 1;
   return 0;
  }
 }
 if (VAR_4)
  *VAR_4 = VAR_3;
 return VAR_0;
}
