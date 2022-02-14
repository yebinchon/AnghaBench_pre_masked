
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh7760fb_platdata {int (* blank ) (int) ;} ;
struct sh7760fb_par {scalar_t__ base; struct sh7760fb_platdata* pd; } ;
struct fb_info {struct sh7760fb_par* par; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sh7760fb_par*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_6, struct fb_info *VAR_7)
{
 struct sh7760fb_par *VAR_8 = VAR_7->par;
 struct sh7760fb_platdata *VAR_9 = VAR_8->pd;
 unsigned short VAR_10 = FUNC_0(VAR_8->base + VAR_1);
 unsigned short VAR_11 = FUNC_0(VAR_8->base + VAR_4);
 int VAR_12;

 if (VAR_6 == VAR_0) {
  VAR_11 |= VAR_5;
  VAR_10 = VAR_3 | VAR_2;
  VAR_12 = 3;
 } else {
  VAR_11 &= ~VAR_5;
  VAR_10 = VAR_3;
  VAR_12 = 0;
 }

 if (VAR_9->blank)
  VAR_9->blank(VAR_6);

 FUNC_1(VAR_11, VAR_8->base + VAR_4);
 FUNC_1(VAR_10, VAR_8->base + VAR_1);

 return FUNC_3(VAR_8, VAR_12);
}
