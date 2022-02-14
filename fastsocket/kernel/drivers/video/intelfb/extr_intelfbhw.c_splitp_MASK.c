
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_min_max {int min_p1; int max_p1; } ;


 int VAR_0 ;
 struct pll_min_max* VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2, unsigned int VAR_3, unsigned int *VAR_4,
    unsigned int *VAR_5)
{
 int VAR_6, VAR_7;
 struct pll_min_max *VAR_8 = &VAR_1[VAR_2];

 if (VAR_2 == VAR_0) {
  VAR_7 = (VAR_3 % 10) ? 1 : 0;

  VAR_6 = VAR_3 / (VAR_7 ? 5 : 10);

  *VAR_4 = (unsigned int)VAR_6;
  *VAR_5 = (unsigned int)VAR_7;
  return 0;
 }

 if (VAR_3 % 4 == 0)
  VAR_7 = 1;
 else
  VAR_7 = 0;
 VAR_6 = (VAR_3 / (1 << (VAR_7 + 1))) - 2;
 if (VAR_3 % 4 == 0 && VAR_6 < VAR_8->min_p1) {
  VAR_7 = 0;
  VAR_6 = (VAR_3 / (1 << (VAR_7 + 1))) - 2;
 }
 if (VAR_6 < VAR_8->min_p1 || VAR_6 > VAR_8->max_p1 ||
     (VAR_6 + 2) * (1 << (VAR_7 + 1)) != VAR_3) {
  return 1;
 } else {
  *VAR_4 = (unsigned int)VAR_6;
  *VAR_5 = (unsigned int)VAR_7;
  return 0;
 }
}
