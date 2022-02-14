
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(const int* const VAR_0, const int VAR_1, const int VAR_2)
{
 if (VAR_2 <= 1)
  return 0;
 int VAR_3 = 0, VAR_4 = VAR_2 - 1;
 int VAR_5;
 do {
  VAR_5 = VAR_3 + ((VAR_4 - VAR_3) >> 1);
  if (VAR_1 == VAR_0[VAR_5])
   return VAR_5;
  else if (VAR_1 < VAR_0[VAR_5])
   VAR_4 = VAR_5 - 1;
  else if (VAR_1 > VAR_0[VAR_5])
   VAR_3 = VAR_5 + 1;
 } while (VAR_3 <= VAR_4);
 FUNC_0(0 && "Shouldn't reach here");
 return -1;
}
