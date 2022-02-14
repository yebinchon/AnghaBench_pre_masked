
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svga_timing_regs {int v_sync_end_regs; int v_blank_end_regs; int v_sync_start_regs; int v_blank_start_regs; int v_display_regs; int v_total_regs; int h_sync_end_regs; int h_blank_end_regs; int h_sync_start_regs; int h_blank_start_regs; int h_display_regs; int h_total_regs; } ;
struct fb_var_screeninfo {int xres; int left_margin; int right_margin; int hsync_len; int yres; int upper_margin; int lower_margin; int vsync_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(const struct svga_timing_regs *VAR_1, struct fb_var_screeninfo *VAR_2, int VAR_3)
{
 u32 VAR_4;

 VAR_2->xres = (VAR_2->xres+7)&~7;
 VAR_2->left_margin = (VAR_2->left_margin+7)&~7;
 VAR_2->right_margin = (VAR_2->right_margin+7)&~7;
 VAR_2->hsync_len = (VAR_2->hsync_len+7)&~7;


 VAR_4 = VAR_2->xres + VAR_2->left_margin + VAR_2->right_margin + VAR_2->hsync_len;
 if (((VAR_4 / 8) - 5) >= FUNC_0 (VAR_1->h_total_regs))
  return -VAR_0;


 VAR_4 = VAR_2->xres;
 if (((VAR_4 / 8) - 1) >= FUNC_0 (VAR_1->h_display_regs))
  return -VAR_0;
 if (((VAR_4 / 8) - 1) >= FUNC_0 (VAR_1->h_blank_start_regs))
  return -VAR_0;


 VAR_4 = VAR_2->xres + VAR_2->right_margin;
 if (((VAR_4 / 8) - 1) >= FUNC_0 (VAR_1->h_sync_start_regs))
  return -VAR_0;


 VAR_4 = VAR_2->left_margin + VAR_2->right_margin + VAR_2->hsync_len;
 if ((VAR_4 == 0) || ((VAR_4 / 8) >= FUNC_0 (VAR_1->h_blank_end_regs)))
  return -VAR_0;


 VAR_4 = VAR_2->hsync_len;
 if ((VAR_4 == 0) || ((VAR_4 / 8) >= FUNC_0 (VAR_1->h_sync_end_regs)))
  return -VAR_0;


 VAR_4 = VAR_2->yres + VAR_2->upper_margin + VAR_2->lower_margin + VAR_2->vsync_len;
 if ((VAR_4 - 1) >= FUNC_0(VAR_1->v_total_regs))
  return -VAR_0;


 VAR_4 = VAR_2->yres;
 if ((VAR_4 - 1) >= FUNC_0(VAR_1->v_display_regs))
  return -VAR_0;
 if ((VAR_4 - 1) >= FUNC_0(VAR_1->v_blank_start_regs))
  return -VAR_0;


 VAR_4 = VAR_2->yres + VAR_2->lower_margin;
 if ((VAR_4 - 1) >= FUNC_0(VAR_1->v_sync_start_regs))
  return -VAR_0;


 VAR_4 = VAR_2->upper_margin + VAR_2->lower_margin + VAR_2->vsync_len;
 if ((VAR_4 == 0) || (VAR_4 >= FUNC_0 (VAR_1->v_blank_end_regs)))
  return -VAR_0;


 VAR_4 = VAR_2->vsync_len;
 if ((VAR_4 == 0) || (VAR_4 >= FUNC_0 (VAR_1->v_sync_end_regs)))
  return -VAR_0;

 return 0;
}
