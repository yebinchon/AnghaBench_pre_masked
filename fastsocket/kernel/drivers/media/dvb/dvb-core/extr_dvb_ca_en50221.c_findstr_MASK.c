
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_1(char * VAR_0, int VAR_1, char * VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_1 < VAR_3)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 <= VAR_1 - VAR_3; VAR_4++) {
  if (!FUNC_0(VAR_0 + VAR_4, VAR_2, VAR_3))
   return VAR_0 + VAR_4;
 }

 return ((void*)0);
}
