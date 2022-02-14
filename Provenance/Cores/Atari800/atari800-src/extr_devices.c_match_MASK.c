
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const,char const) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, const char *VAR_3)
{
 if (FUNC_1(VAR_2, "*.*") == 0)
  return VAR_1;

 for (;;) {
  switch (*VAR_2) {
  case '\0':
   return (*VAR_3 == '\0');
  case '?':
   if (*VAR_3 == '\0' || *VAR_3 == '.')
    return VAR_0;
   VAR_2++;
   VAR_3++;
   break;
  case '*':
   if (FUNC_0(*VAR_3, VAR_2[1]))
    VAR_2++;
   else if (*VAR_3 == '\0')
    return VAR_0;
   else
    VAR_3++;
   break;
  default:
   if (!FUNC_0(*VAR_2, *VAR_3))
    return VAR_0;
   VAR_2++;
   VAR_3++;
   break;
  }
 }
}
