
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*) ;

int FUNC_1(const char *VAR_3)
{
 const char *VAR_4 = VAR_3;
 int VAR_5 = VAR_1;
 while (*VAR_4 != '\0') {
  if (*VAR_4++ == '%') {
   char VAR_6 = *VAR_4++;
   if (VAR_6 == '%')
    continue;
   if (VAR_6 == 's' && !VAR_5) {
    VAR_5 = VAR_2;
    continue;
   }
   return VAR_1;
  }
 }
 FUNC_0(VAR_0, VAR_3);
 return VAR_2;
}
