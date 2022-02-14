
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gxt4500_par {int refclk_ps; int pll_m; int pll_n; int pll_pd1; int pll_pd2; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct gxt4500_par *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;


 if (VAR_0 < 3333 || VAR_0 > 200000)
  return -1;

 VAR_8 = 1000000;
 for (VAR_4 = 1; VAR_4 <= 8; ++VAR_4) {
  for (VAR_5 = 1; VAR_5 <= VAR_4; ++VAR_5) {
   VAR_6 = VAR_4 * VAR_5;
   VAR_7 = FUNC_0(VAR_0, VAR_6);

   if (VAR_7 < 1666 || VAR_7 > 2857)
    continue;
   for (VAR_2 = 1; VAR_2 <= 64; ++VAR_2) {
    VAR_10 = VAR_2 * VAR_1->refclk_ps;
    if (VAR_10 > 500000)
     break;
    VAR_3 = VAR_10 * VAR_6 / VAR_0;
    if (VAR_3 < 3 || VAR_3 > 160)
     continue;
    VAR_9 = VAR_1->refclk_ps * VAR_2 * VAR_6 / VAR_3;
    VAR_9 -= VAR_0;
    if (VAR_9 >= 0 && VAR_9 < VAR_8) {
     VAR_1->pll_m = VAR_2;
     VAR_1->pll_n = VAR_3;
     VAR_1->pll_pd1 = VAR_4;
     VAR_1->pll_pd2 = VAR_5;
     VAR_8 = VAR_9;
    }
   }
  }
 }
 if (VAR_8 == 1000000)
  return -1;
 return 0;
}
