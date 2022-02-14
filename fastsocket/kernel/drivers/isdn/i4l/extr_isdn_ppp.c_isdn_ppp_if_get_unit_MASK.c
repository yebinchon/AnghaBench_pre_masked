
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0)
{
 int VAR_1,
  VAR_2,
  VAR_3 = 0,
  VAR_4;

 VAR_1 = FUNC_0(VAR_0);

 if (FUNC_1("ippp", VAR_0, 4) || VAR_1 > 8)
  return -1;

 for (VAR_2 = 0, VAR_4 = 1; VAR_2 < VAR_1; VAR_2++, VAR_4 *= 10) {
  char VAR_5 = VAR_0[VAR_1 - VAR_2 - 1];
  if (VAR_5 >= '0' && VAR_5 <= '9')
   VAR_3 += (VAR_5 - '0') * VAR_4;
  else
   break;
 }
 if (!VAR_2 || VAR_1 - VAR_2 != 4)
  VAR_3 = -1;

 return VAR_3;
}
