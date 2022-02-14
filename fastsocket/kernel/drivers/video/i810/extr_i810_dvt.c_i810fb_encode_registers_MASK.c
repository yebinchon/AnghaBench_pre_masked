
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ cr01; scalar_t__ pixclock; } ;
struct i810fb_par {int ovract; TYPE_1__ regs; } ;
struct fb_var_screeninfo {int right_margin; int hsync_len; int left_margin; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(const struct fb_var_screeninfo *VAR_1,
        struct i810fb_par *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0, VAR_6 = 0xFFFFFFFF, VAR_7 = 0, VAR_8 = 0;
 u8 VAR_9;

 VAR_9 = (u8) ((VAR_3 >> 3) - 1);
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
  if (VAR_0[VAR_7].cr01 == VAR_9) {
   if (VAR_0[VAR_7].pixclock <= VAR_2->regs.pixclock)
    VAR_5 = VAR_2->regs.pixclock -
     VAR_0[VAR_7].pixclock;
   if (VAR_5 < VAR_6) {
        VAR_8 = VAR_7;
        VAR_6 = VAR_5;
   }
  }
 }
 VAR_2->regs = VAR_0[VAR_8];


 VAR_2->ovract = ((VAR_3 + VAR_1->right_margin + VAR_1->hsync_len +
   VAR_1->left_margin - 32) | ((VAR_3 - 32) << 16));
}
