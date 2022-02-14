
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_0)
{
 char VAR_1 = 0, *VAR_2 = VAR_0, *VAR_3 = VAR_0;

 while ((VAR_1 = *VAR_2++) != '\0') {
  if (VAR_1 == '\\' && *VAR_2 == 'x') {
   VAR_2++;
   VAR_1 = FUNC_1(*VAR_2++);
   *VAR_3 = (VAR_1 - (FUNC_0(VAR_1) ? '0' : 'A' - 10)) << 4;
   VAR_1 = FUNC_1(*VAR_2++);
   *VAR_3++ |= VAR_1 - (FUNC_0(VAR_1) ? '0' : 'A' - 10);
   continue;
  }
  *VAR_3++ = VAR_1;
 }
 return VAR_3 - VAR_0;
}
