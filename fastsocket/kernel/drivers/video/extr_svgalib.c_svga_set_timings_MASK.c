
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct svga_timing_regs {int v_sync_end_regs; int v_sync_start_regs; int v_blank_end_regs; int v_blank_start_regs; int v_display_regs; int v_total_regs; int h_sync_end_regs; int h_sync_start_regs; int h_blank_end_regs; int h_blank_start_regs; int h_display_regs; int h_total_regs; } ;
struct fb_var_screeninfo {int xres; int left_margin; int right_margin; int hsync_len; int yres; int upper_margin; int lower_margin; int vsync_len; int sync; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;

void FUNC_4(const struct svga_timing_regs *VAR_4, struct fb_var_screeninfo *VAR_5,
   u32 VAR_6, u32 VAR_7, u32 VAR_8, u32 VAR_9, u32 VAR_10, int VAR_11)
{
 u8 VAR_12;
 u32 VAR_13;

 VAR_13 = VAR_5->xres + VAR_5->left_margin + VAR_5->right_margin + VAR_5->hsync_len;
 VAR_13 = (VAR_13 * VAR_6) / VAR_7;
 FUNC_0("fb%d: horizontal total      : %d\n", VAR_11, VAR_13);
 FUNC_1(VAR_4->h_total_regs, (VAR_13 / 8) - 5);

 VAR_13 = VAR_5->xres;
 VAR_13 = (VAR_13 * VAR_6) / VAR_7;
 FUNC_0("fb%d: horizontal display    : %d\n", VAR_11, VAR_13);
 FUNC_1(VAR_4->h_display_regs, (VAR_13 / 8) - 1);

 VAR_13 = VAR_5->xres;
 VAR_13 = (VAR_13 * VAR_6) / VAR_7;
 FUNC_0("fb%d: horizontal blank start: %d\n", VAR_11, VAR_13);
 FUNC_1(VAR_4->h_blank_start_regs, (VAR_13 / 8) - 1 + VAR_10);

 VAR_13 = VAR_5->xres + VAR_5->left_margin + VAR_5->right_margin + VAR_5->hsync_len;
 VAR_13 = (VAR_13 * VAR_6) / VAR_7;
 FUNC_0("fb%d: horizontal blank end  : %d\n", VAR_11, VAR_13);
 FUNC_1(VAR_4->h_blank_end_regs, (VAR_13 / 8) - 1 - VAR_10);

 VAR_13 = VAR_5->xres + VAR_5->right_margin;
 VAR_13 = (VAR_13 * VAR_6) / VAR_7;
 FUNC_0("fb%d: horizontal sync start : %d\n", VAR_11, VAR_13);
 FUNC_1(VAR_4->h_sync_start_regs, (VAR_13 / 8));

 VAR_13 = VAR_5->xres + VAR_5->right_margin + VAR_5->hsync_len;
 VAR_13 = (VAR_13 * VAR_6) / VAR_7;
 FUNC_0("fb%d: horizontal sync end   : %d\n", VAR_11, VAR_13);
 FUNC_1(VAR_4->h_sync_end_regs, (VAR_13 / 8));

 VAR_13 = VAR_5->yres + VAR_5->upper_margin + VAR_5->lower_margin + VAR_5->vsync_len;
 VAR_13 = (VAR_13 * VAR_8) / VAR_9;
 FUNC_0("fb%d: vertical total        : %d\n", VAR_11, VAR_13);
 FUNC_1(VAR_4->v_total_regs, VAR_13 - 2);

 VAR_13 = VAR_5->yres;
 VAR_13 = (VAR_13 * VAR_8) / VAR_9;
 FUNC_0("fb%d: vertical display      : %d\n", VAR_11, VAR_13);
 FUNC_1(VAR_4->v_display_regs, VAR_13 - 1);

 VAR_13 = VAR_5->yres;
 VAR_13 = (VAR_13 * VAR_8) / VAR_9;
 FUNC_0("fb%d: vertical blank start  : %d\n", VAR_11, VAR_13);
 FUNC_1(VAR_4->v_blank_start_regs, VAR_13);

 VAR_13 = VAR_5->yres + VAR_5->upper_margin + VAR_5->lower_margin + VAR_5->vsync_len;
 VAR_13 = (VAR_13 * VAR_8) / VAR_9;
 FUNC_0("fb%d: vertical blank end    : %d\n", VAR_11, VAR_13);
 FUNC_1(VAR_4->v_blank_end_regs, VAR_13 - 2);

 VAR_13 = VAR_5->yres + VAR_5->lower_margin;
 VAR_13 = (VAR_13 * VAR_8) / VAR_9;
 FUNC_0("fb%d: vertical sync start   : %d\n", VAR_11, VAR_13);
 FUNC_1(VAR_4->v_sync_start_regs, VAR_13);

 VAR_13 = VAR_5->yres + VAR_5->lower_margin + VAR_5->vsync_len;
 VAR_13 = (VAR_13 * VAR_8) / VAR_9;
 FUNC_0("fb%d: vertical sync end     : %d\n", VAR_11, VAR_13);
 FUNC_1(VAR_4->v_sync_end_regs, VAR_13);



 VAR_12 = FUNC_2(((void*)0), VAR_2);
 if (VAR_5->sync & VAR_0) {
  FUNC_0("fb%d: positive horizontal sync\n", VAR_11);
  VAR_12 = VAR_12 & ~0x80;
 } else {
  FUNC_0("fb%d: negative horizontal sync\n", VAR_11);
  VAR_12 = VAR_12 | 0x80;
 }
 if (VAR_5->sync & VAR_1) {
  FUNC_0("fb%d: positive vertical sync\n", VAR_11);
  VAR_12 = VAR_12 & ~0x40;
 } else {
  FUNC_0("fb%d: negative vertical sync\n\n", VAR_11);
  VAR_12 = VAR_12 | 0x40;
 }
 FUNC_3(((void*)0), VAR_3, VAR_12);
}
