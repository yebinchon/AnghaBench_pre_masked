
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned long VAR_0, unsigned long VAR_1,
      unsigned long VAR_2, unsigned VAR_3)
{
 if (VAR_1 - VAR_0 < VAR_2)
  return 0;

 if (VAR_3) {
  unsigned VAR_4 = VAR_0 % VAR_3;
  if (VAR_4)
   VAR_0 += VAR_3 - VAR_4;
 }

 return VAR_1 >= VAR_0 + VAR_2;
}
