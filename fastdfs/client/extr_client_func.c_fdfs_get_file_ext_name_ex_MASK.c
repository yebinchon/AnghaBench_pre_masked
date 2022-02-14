
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char) ;

const char *FUNC_3(const char *VAR_1,
 const bool VAR_2)
{
 const char *VAR_3;
 const char *VAR_4;
 const char *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_2(VAR_1, '.');
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_1(VAR_3 + 1);
 if (VAR_6 > VAR_0)
 {
  return ((void*)0);
 }

 if (FUNC_0(VAR_3 + 1, '/') != ((void*)0))
 {
  return ((void*)0);
 }

 if (!VAR_2)
 {
  return VAR_3 + 1;
 }

 VAR_5 = VAR_3 - (VAR_0 - VAR_6) - 1;
 if (VAR_5 < VAR_1)
 {
  VAR_5 = VAR_1;
 }

 VAR_4 = VAR_3 - 1;
 while ((VAR_4 > VAR_5) && (*VAR_4 != '.'))
 {
  VAR_4--;
 }

 if (VAR_4 > VAR_5)
 {
  if (FUNC_0(VAR_4 + 1, '/') == ((void*)0))
  {
   return VAR_4 + 1;
  }
 }

 return VAR_3 + 1;
}
