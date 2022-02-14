
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2)
{
 int VAR_3;

 if (VAR_2[1] == 0 && 'A' <= VAR_2[0] && VAR_2[0] <= 'Z')
  return VAR_2[0];

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  const char *VAR_4 = VAR_1[VAR_3];
  if (VAR_4 != ((void*)0) && FUNC_0(VAR_4, VAR_2) == 0)
   return VAR_3;
 }

 return -1;
}
