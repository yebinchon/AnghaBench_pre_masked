
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_timing {int p; int n; int m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(const int VAR_3, int *VAR_4, struct pll_timing *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12 = -1;
 int VAR_13 = -1;

 VAR_10 = VAR_3;
 VAR_9 = 3;

 while (((1 << VAR_9) * VAR_3 > VAR_2) && (VAR_9 >= 0))
  VAR_9--;
 if (VAR_9 == -1)
  return -VAR_1;
 for (VAR_8 = 1; VAR_8 < 32; VAR_8++) {

  VAR_7 = (2 * VAR_3 * (1 << VAR_9) * (VAR_8 + 2) ) / VAR_0 - 4 ;

  VAR_6 = (VAR_7 % 2 ) ? VAR_7/2+1 : VAR_7/2 ;
  if (VAR_6 >= 128)
   break;
  VAR_11 = (VAR_0 * (VAR_6 + 2)) / ((1 << VAR_9) * (VAR_8 + 2));
  if ((FUNC_0(VAR_11 - VAR_3) < VAR_10) && (VAR_6 > 0)) {
   VAR_12 = VAR_8;
   VAR_13 = VAR_6;
   VAR_10 = FUNC_0(VAR_11 - VAR_3);

   if (200*VAR_10 < VAR_3) break;
  }
 }
 if (VAR_12 == -1)
  return -VAR_1;
 VAR_5->p = VAR_9;
 VAR_5->n = VAR_12;
 VAR_5->m = VAR_13;
 *VAR_4 = (VAR_0 * (VAR_5->m + 2)) / ((1 << VAR_5->p) * (VAR_5->n + 2));
 FUNC_1 ("m: %d, n: %d, p: %d, F: %dKhz\n",
    VAR_5->m, VAR_5->n, VAR_5->p, *VAR_4);
 return 0;
}
