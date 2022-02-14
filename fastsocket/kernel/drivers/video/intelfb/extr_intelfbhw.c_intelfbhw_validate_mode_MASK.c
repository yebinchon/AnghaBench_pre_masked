
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct intelfb_info {TYPE_1__ fb; } ;
struct fb_var_screeninfo {int bits_per_pixel; int yres_virtual; int xres_virtual; int xres; int yres; int vmode; int pixclock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,...) ;

int FUNC_3(struct intelfb_info *VAR_6,
       struct fb_var_screeninfo *VAR_7)
{
 int VAR_8;
 int VAR_9;





 VAR_8 = VAR_7->bits_per_pixel / 8;
 if (VAR_8 == 3)
  VAR_8 = 4;


 VAR_9 = VAR_7->yres_virtual * VAR_7->xres_virtual * VAR_8;
 if (VAR_9 > VAR_6->fb.size) {
  FUNC_2("Not enough video ram for mode "
   "(%d KByte vs %d KByte).\n",
   FUNC_0(VAR_9), FUNC_0(VAR_6->fb.size));
  return 1;
 }


 if (VAR_7->xres - 1 > VAR_2) {
  FUNC_2("X resolution too large (%d vs %d).\n",
   VAR_7->xres, VAR_2 + 1);
  return 1;
 }
 if (VAR_7->yres - 1 > VAR_5) {
  FUNC_2("Y resolution too large (%d vs %d).\n",
   VAR_7->yres, VAR_5 + 1);
  return 1;
 }
 if (VAR_7->xres < 4) {
  FUNC_2("X resolution too small (%d vs 4).\n", VAR_7->xres);
  return 1;
 }
 if (VAR_7->yres < 4) {
  FUNC_2("Y resolution too small (%d vs 4).\n", VAR_7->yres);
  return 1;
 }


 if (VAR_7->vmode & VAR_0) {
  FUNC_2("Mode is double-scan.\n");
  return 1;
 }

 if ((VAR_7->vmode & VAR_1) && (VAR_7->yres & 1)) {
  FUNC_2("Odd number of lines in interlaced mode\n");
  return 1;
 }


 VAR_9 = 1000000000 / VAR_7->pixclock;
 if (VAR_9 < VAR_4) {
  FUNC_2("Pixel clock is too low (%d MHz vs %d MHz).\n",
   (VAR_9 + 500) / 1000, VAR_4 / 1000);
  return 1;
 }
 if (VAR_9 > VAR_3) {
  FUNC_2("Pixel clock is too high (%d MHz vs %d MHz).\n",
   (VAR_9 + 500) / 1000, VAR_3 / 1000);
  return 1;
 }

 return 0;
}
