
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const int *VAR_0, int VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < 7; ++VAR_2)
  if (VAR_1 <= (VAR_0[VAR_2] + VAR_0[VAR_2 + 1]) / 2)
   break;
 return VAR_2;
}
