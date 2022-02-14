
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_min_max {int min_m1; int max_m1; int min_m2; int max_m2; } ;


 struct pll_min_max* VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, unsigned int VAR_2, unsigned int *VAR_3,
    unsigned int *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7;
 struct pll_min_max *VAR_8 = &VAR_0[VAR_1];


 for (VAR_5 = VAR_8->min_m1; VAR_5 < VAR_8->max_m1 + 1; VAR_5++) {
  for (VAR_6 = VAR_8->min_m2; VAR_6 < VAR_8->max_m2 + 1; VAR_6++) {
   VAR_7 = (5 * (VAR_5 + 2)) + (VAR_6 + 2);
   if (VAR_7 == VAR_2) {
    *VAR_3 = (unsigned int)VAR_5;
    *VAR_4 = (unsigned int)VAR_6;
    return 0;
   }
  }
 }
 return 1;
}
