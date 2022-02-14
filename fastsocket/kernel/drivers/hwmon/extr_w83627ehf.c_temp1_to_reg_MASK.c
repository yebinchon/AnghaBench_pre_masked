
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s8 ;



__attribute__((used)) static inline s8
FUNC_0(long VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0 <= VAR_1)
  return VAR_1 / 1000;
 if (VAR_0 >= VAR_2)
  return VAR_2 / 1000;
 if (VAR_0 < 0)
  return (VAR_0 - 500) / 1000;
 return (VAR_0 + 500) / 1000;
}
