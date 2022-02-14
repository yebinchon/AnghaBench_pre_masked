
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

int FUNC_1(unsigned char *VAR_0, unsigned VAR_1)
{
 int VAR_2,VAR_3;
 for (VAR_2 = 0; VAR_2 < VAR_1 && VAR_0[VAR_2] != '.'; VAR_2++)
  if (FUNC_0(VAR_0[VAR_2])) return 1;
 if (!VAR_2 || VAR_2 > 8) return 1;
 if (VAR_2 == VAR_1) return 0;
 for (VAR_3 = VAR_2 + 1; VAR_3 < VAR_1; VAR_3++)
  if (VAR_0[VAR_3] == '.' || FUNC_0(VAR_0[VAR_2])) return 1;
 return VAR_3 - VAR_2 > 4;
}
