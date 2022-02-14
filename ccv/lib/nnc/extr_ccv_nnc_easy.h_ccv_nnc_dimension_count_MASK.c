
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline size_t FUNC_0(const int VAR_1[VAR_0])
{
 if (VAR_1[0] == 0)
  return 0;
 int VAR_2;
 size_t VAR_3 = 1;
 for (VAR_2 = 0; VAR_2 < VAR_0 && VAR_1[VAR_2] > 0; VAR_2++)
  VAR_3 *= VAR_1[VAR_2];
 return VAR_3;
}
