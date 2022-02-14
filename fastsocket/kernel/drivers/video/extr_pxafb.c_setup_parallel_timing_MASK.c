
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxafb_info {int lccr0; int reg_lccr3; int lccr3; scalar_t__ reg_lccr2; scalar_t__ reg_lccr1; } ;
struct fb_var_screeninfo {unsigned int yres; int sync; int lower_margin; int upper_margin; int vsync_len; int right_margin; int left_margin; int hsync_len; int xres; int pixclock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_9 (struct pxafb_info*,int ) ;
 int FUNC_10 (struct pxafb_info*,unsigned int) ;

__attribute__((used)) static void FUNC_11(struct pxafb_info *VAR_8,
      struct fb_var_screeninfo *VAR_9)
{
 unsigned int VAR_10, VAR_11 = FUNC_9(VAR_8, VAR_9->pixclock);

 VAR_8->reg_lccr1 =
  FUNC_1(VAR_9->xres) +
  FUNC_3(VAR_9->hsync_len) +
  FUNC_0(VAR_9->left_margin) +
  FUNC_2(VAR_9->right_margin);





 VAR_10 = VAR_9->yres;
 if ((VAR_8->lccr0 & VAR_3) == VAR_2)
  VAR_10 /= 2;

 VAR_8->reg_lccr2 =
  FUNC_5(VAR_10) +
  FUNC_7(VAR_9->vsync_len) +
  FUNC_4(VAR_9->upper_margin) +
  FUNC_6(VAR_9->lower_margin);

 VAR_8->reg_lccr3 = VAR_8->lccr3 |
  (VAR_9->sync & VAR_0 ?
   VAR_4 : VAR_5) |
  (VAR_9->sync & VAR_1 ?
   VAR_6 : VAR_7);

 if (VAR_11) {
  VAR_8->reg_lccr3 |= FUNC_8(VAR_11);
  FUNC_10(VAR_8, VAR_11);
 }
}
