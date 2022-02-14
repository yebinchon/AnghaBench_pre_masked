
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(long VAR_0, const int *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_0 < VAR_1[0])
  return 0;

 if (VAR_0 > VAR_1[VAR_2 - 1])
  return VAR_2 - 1;

 for (VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++) {
  int VAR_4, VAR_5;

  if (VAR_0 > VAR_1[VAR_3 + 1])
   continue;

  VAR_4 = VAR_0 - VAR_1[VAR_3];
  VAR_5 = VAR_1[VAR_3 + 1] - VAR_0;

  return (VAR_4 <= VAR_5) ? VAR_3 : VAR_3 + 1;
 }

 return 0;
}
