
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int u16 ;


 int* VAR_0 ;

__attribute__((used)) static inline u16 *FUNC_0(wchar_t VAR_1, int *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_0[(VAR_1 >> 12) & 0xf];
 if (VAR_3 == 0 || VAR_3 == 0xffff)
  return ((void*)0);

 VAR_3 = VAR_0[VAR_3 + ((VAR_1 >> 8) & 0xf)];
 if (!VAR_3)
  return ((void*)0);

 VAR_3 = VAR_0[VAR_3 + ((VAR_1 >> 4) & 0xf)];
 if (!VAR_3)
  return ((void*)0);

 VAR_3 = VAR_0[VAR_3 + (VAR_1 & 0xf)];
 *VAR_2 = VAR_3 & 3;
 if (*VAR_2 == 0)
  return ((void*)0);
 return VAR_0 + (VAR_3 / 4);
}
