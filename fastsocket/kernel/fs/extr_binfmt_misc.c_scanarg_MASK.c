
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, char VAR_1)
{
 char VAR_2;

 while ((VAR_2 = *VAR_0++) != VAR_1) {
  if (VAR_2 == '\\' && *VAR_0 == 'x') {
   VAR_0++;
   if (!FUNC_0(*VAR_0++))
    return ((void*)0);
   if (!FUNC_0(*VAR_0++))
    return ((void*)0);
  }
 }
 return VAR_0;
}
