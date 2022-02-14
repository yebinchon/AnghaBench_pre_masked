
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct fb_var_screeninfo {unsigned int xres; unsigned int yres; float pixclock; float upper_margin; float lower_margin; float vsync_len; float left_margin; float right_margin; float hsync_len; } ;
struct TYPE_4__ {unsigned int width; unsigned int height; } ;
struct TYPE_3__ {unsigned int width; unsigned int height; float refresh_rate; TYPE_2__ native_window; int egl; } ;
typedef TYPE_1__ mali_ctx_data_t ;
typedef int EGLint ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int,int ,struct fb_var_screeninfo*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static bool FUNC_9(void *VAR_2,
      video_frame_info_t *VAR_3,
      unsigned VAR_4, unsigned VAR_5,
      bool VAR_6)
{
   struct fb_var_screeninfo VAR_7;
   static const EGLint VAR_8[] = {
      129, 2,
      128
   };
   mali_ctx_data_t *VAR_9 = (mali_ctx_data_t*)VAR_2;
   int VAR_10 = FUNC_8("/dev/fb0", VAR_1);

   if (FUNC_7(VAR_10, VAR_0, &VAR_7) < 0)
   {
      FUNC_0("Error obtaining framebuffer info.\n");
      goto error;
   }

   FUNC_1(VAR_10);
   VAR_10 = -1;

   VAR_4 = VAR_7.xres;
   VAR_5 = VAR_7.yres;

   VAR_9->width = VAR_4;
   VAR_9->height = VAR_5;

   VAR_9->native_window.width = VAR_7.xres;
   VAR_9->native_window.height = VAR_7.yres;

   VAR_9->refresh_rate = 1000000.0f / VAR_7.pixclock * 1000000.0f /
         (VAR_7.yres + VAR_7.upper_margin + VAR_7.lower_margin + VAR_7.vsync_len) /
         (VAR_7.xres + VAR_7.left_margin + VAR_7.right_margin + VAR_7.hsync_len);
   return 1;

error:
   if (VAR_10 >= 0)
      FUNC_1(VAR_10);
   FUNC_0("[Mali fbdev]: EGL error: %d.\n", FUNC_2());
   FUNC_6(VAR_2);
   return 0;
}
