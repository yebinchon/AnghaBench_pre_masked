
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_plane_info {scalar_t__ yoffset; scalar_t__ size; scalar_t__ enabled; } ;
struct omapfb_mem_info {scalar_t__ yoffset; scalar_t__ size; scalar_t__ enabled; } ;
struct fb_var_screeninfo {scalar_t__ yoffset; scalar_t__ size; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct omapfb_plane_info* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,struct omapfb_plane_info*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

int FUNC_5()
{
 struct fb_var_screeninfo VAR_9;
 struct omapfb_plane_info VAR_10;
 struct omapfb_mem_info VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_13 = FUNC_2("/dev/fb0", VAR_8);
 if (VAR_13 == -1) {
  FUNC_3("open fb0");
  goto end_fb0;
 }

 VAR_12 = FUNC_1(VAR_13, VAR_0, &VAR_9);
 if (VAR_12 == -1) {
  FUNC_3("FBIOGET_VSCREENINFO ioctl");
  goto end_fb0;
 }

 if (VAR_9.yoffset != 0) {
  FUNC_4("fixing yoffset.. ");
  VAR_9.yoffset = 0;
  VAR_12 = FUNC_1(VAR_13, VAR_1, &VAR_9);
  if (VAR_12 < 0)
   FUNC_3("ioctl FBIOPAN_DISPLAY");
  else
   FUNC_4("ok\n");
 }

end_fb0:
 if (VAR_13 >= 0)
  FUNC_0(VAR_13);

 VAR_13 = FUNC_2("/dev/fb1", VAR_8);
 if (VAR_13 == -1) {
  FUNC_3("open fb1");
  goto end_fb1;
 }

 VAR_12 = FUNC_1(VAR_13, VAR_5, &VAR_10);
 VAR_12 |= FUNC_1(VAR_13, VAR_4, &VAR_11);
 if (VAR_12 != 0)
  FUNC_3("QUERY_*");

 VAR_10.enabled = 0;
 VAR_12 = FUNC_1(VAR_13, VAR_7, &VAR_10);
 if (VAR_12 != 0)
  FUNC_3("SETUP_PLANE");

 VAR_11.size = 0;
 VAR_12 = FUNC_1(VAR_13, VAR_6, &VAR_11);
 if (VAR_12 != 0)
  FUNC_3("SETUP_MEM");

end_fb1:
 if (VAR_13 >= 0)
  FUNC_0(VAR_13);

 VAR_14 = FUNC_2("/dev/tty", VAR_8);
 if (VAR_14 == -1) {
  FUNC_3("open /dev/tty");
  return 1;
 }

 if (FUNC_1(VAR_14, VAR_2, VAR_3) == -1)
  FUNC_3("KDSETMODE KD_TEXT");

 FUNC_0(VAR_14);

 return 0;
}
