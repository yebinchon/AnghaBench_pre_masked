
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct par_info {int clock_mult; int clock_div; } ;
struct fb_var_screeninfo {int pixclock; } ;
struct cfb_info {int ref_ps; int* divisors; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct par_info *VAR_2, struct cfb_info *VAR_3,
    struct fb_var_screeninfo *VAR_4)
{
 u_long VAR_5 = VAR_4->pixclock;
 const u_long VAR_6 = VAR_3->ref_ps;
 u_int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;
 int VAR_12;






 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  u_long VAR_13;

  VAR_13 = VAR_5 / VAR_3->divisors[VAR_7];
  if (8696 > VAR_13 && VAR_13 > 3846) {
   VAR_5 = VAR_13;
   break;
  }
 }

 if (VAR_7 == 4)
  return -VAR_0;
 VAR_11 = 0x7fffffff;
 VAR_10 = 32;
 VAR_9 = 255;
 for (VAR_8 = 32; VAR_8 > 1; VAR_8 -= 1) {
  u_int VAR_14, VAR_15, VAR_16;
  int VAR_17;




  VAR_14 = VAR_6 * VAR_8;
  VAR_15 = (VAR_14 + VAR_5 / 2) / VAR_5;




  if (VAR_15 > 256 || VAR_15 < 2)
   continue;





  VAR_16 = (VAR_14 + VAR_15 / 2) / VAR_15;
  VAR_17 = VAR_5 - VAR_16;
  if (VAR_17 < 0)
   VAR_17 = -VAR_17;

  if (VAR_17 < VAR_11) {
   VAR_11 = VAR_17;
   VAR_10 = VAR_15;
   VAR_9 = VAR_8;
  }




  if (VAR_17 == 0)
   break;
 }





 VAR_2->clock_mult = VAR_10 - 1;
 VAR_2->clock_div = VAR_7 << 6 | (VAR_9 - 1);

 VAR_12 = VAR_6 * VAR_9 / VAR_10;
 if ((VAR_6 == 40690) && (VAR_12 < 5556))

  VAR_2->clock_div |= VAR_1;

 return 0;
}
