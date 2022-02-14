
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ high; scalar_t__ low; } ;
union ull_union {unsigned long long ull; TYPE_1__ ui; } ;



int FUNC_0(unsigned long long VAR_0, unsigned long long VAR_1)
{
 union ull_union VAR_2 = {.ull = VAR_0};
 union ull_union VAR_3 = {.ull = VAR_1};

 if (VAR_2.ui.high < VAR_3.ui.high)
  return 0;
 else if (VAR_2.ui.high > VAR_3.ui.high)
  return 2;
 if (VAR_2.ui.low < VAR_3.ui.low)
  return 0;
 else if (VAR_2.ui.low > VAR_3.ui.low)
  return 2;
 return 1;
}
