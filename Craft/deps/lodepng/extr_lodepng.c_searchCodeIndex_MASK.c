
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t FUNC_0(const unsigned* VAR_0, size_t VAR_1, size_t VAR_2)
{





  size_t VAR_3 = 1;
  size_t VAR_4 = VAR_1 - 1;
  while(VAR_3 <= VAR_4)
  {
    size_t VAR_5 = (VAR_3 + VAR_4) / 2;
    if(VAR_0[VAR_5] <= VAR_2) VAR_3 = VAR_5 + 1;
    else if(VAR_0[VAR_5 - 1] > VAR_2) VAR_4 = VAR_5 - 1;
    else return VAR_5 - 1;
  }
  return VAR_1 - 1;
}
