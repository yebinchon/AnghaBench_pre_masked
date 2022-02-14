
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int* const,int* const,int) ;

__attribute__((used)) static inline int FUNC_1(int* const VAR_0, const int VAR_1, const int VAR_2)
{
 if (!VAR_2)
 {
  VAR_0[0] = VAR_1;
  return 1;
 }
 int VAR_3 = 0, VAR_4 = VAR_2 - 1;
 int VAR_5;
 do {
  VAR_5 = VAR_3 + ((VAR_4 - VAR_3) >> 1);
  if (VAR_1 == VAR_0[VAR_5])
   return 0;
  else if (VAR_1 < VAR_0[VAR_5])
   VAR_4 = VAR_5 - 1;
  else if (VAR_1 > VAR_0[VAR_5])
   VAR_3 = VAR_5 + 1;
 } while (VAR_3 <= VAR_4);
 if (VAR_3 < VAR_2)
  FUNC_0(VAR_0 + VAR_3 + 1, VAR_0 + VAR_3, sizeof(int) * (VAR_2 - VAR_3));
 VAR_0[VAR_3] = VAR_1;
 return 1;
}
