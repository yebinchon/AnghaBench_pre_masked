
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm501_clock {unsigned long mclk; int divider; int shift; } ;


 unsigned long FUNC_0 (unsigned long,int) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_0,
       struct sm501_clock *VAR_1,
       int VAR_2,
       unsigned long VAR_3,
       long *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 int VAR_7;
 long VAR_8;




 for (VAR_6 = 1; VAR_6 <= VAR_2; VAR_6 += 2) {

  for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {

   VAR_8 = FUNC_0(VAR_3, VAR_6 << VAR_7) - VAR_0;
   if (VAR_8 < 0)
    VAR_8 = -VAR_8;


   if (VAR_8 < *VAR_4) {
    *VAR_4 = VAR_8;

    VAR_1->mclk = VAR_3;
    VAR_1->divider = VAR_6;
    VAR_1->shift = VAR_7;
    VAR_5 = 1;
   }
  }
 }

 return VAR_5;
}
