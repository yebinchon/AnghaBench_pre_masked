
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mb862xxfb_par {unsigned long refclk; int dev; int mmio_len; scalar_t__ mmio_base_phys; int mapped_vram; scalar_t__ fb_base_phys; int fb_base; int pseudo_palette; struct mb862xx_gc_mode* gc_mode; } ;
struct mb862xx_gc_mode {int def_bpp; } ;
struct fb_videomode {int dummy; } ;
struct TYPE_7__ {unsigned long pixclock; int xres; unsigned long yres; int xres_virtual; unsigned long yres_virtual; int bits_per_pixel; unsigned long hsync_len; unsigned long vsync_len; int right_margin; unsigned long left_margin; unsigned long lower_margin; unsigned long upper_margin; int height; int width; int activate; int vmode; scalar_t__ accel_flags; scalar_t__ nonstd; scalar_t__ grayscale; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct TYPE_6__ {unsigned long smem_start; unsigned long mmio_start; int xpanstep; int ypanstep; int line_length; int visual; scalar_t__ ywrapstep; scalar_t__ type_aux; int type; int accel; int mmio_len; int smem_len; int id; } ;
struct fb_info {int flags; TYPE_2__ var; TYPE_1__ fix; TYPE_3__* fbops; int screen_size; int screen_base; int pseudo_palette; struct mb862xxfb_par* par; } ;
struct TYPE_8__ {scalar_t__ (* fb_check_var ) (TYPE_2__*,struct fb_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned long VAR_19 ;
 int VAR_20 ;
 unsigned long VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_25 ;
 int FUNC_2 (TYPE_2__*,struct fb_info*,char*,int *,int ,int *,int) ;
 int FUNC_3 (TYPE_2__*,struct fb_videomode*) ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__ VAR_26 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,struct fb_info*) ;

__attribute__((used)) static int FUNC_7(struct fb_info *VAR_27)
{
 struct mb862xxfb_par *VAR_28 = VAR_27->par;
 struct mb862xx_gc_mode *VAR_29 = VAR_28->gc_mode;
 unsigned long VAR_30;

 VAR_27->fbops = &VAR_26;
 VAR_27->pseudo_palette = VAR_28->pseudo_palette;
 VAR_27->screen_base = VAR_28->fb_base;
 VAR_27->screen_size = VAR_28->mapped_vram;

 FUNC_5(VAR_27->fix.id, VAR_0);
 VAR_27->fix.smem_start = (unsigned long)VAR_28->fb_base_phys;
 VAR_27->fix.smem_len = VAR_28->mapped_vram;
 VAR_27->fix.mmio_start = (unsigned long)VAR_28->mmio_base_phys;
 VAR_27->fix.mmio_len = VAR_28->mmio_len;
 VAR_27->fix.accel = VAR_6;
 VAR_27->fix.type = VAR_8;
 VAR_27->fix.type_aux = 0;
 VAR_27->fix.xpanstep = 1;
 VAR_27->fix.ypanstep = 1;
 VAR_27->fix.ywrapstep = 0;

 VAR_30 = FUNC_4(VAR_25, VAR_15);
 if (VAR_30 & VAR_12 && VAR_30 & VAR_13) {

  unsigned long VAR_31 = ((VAR_30 & VAR_14) >> 8) + 1;
  unsigned long VAR_32, VAR_33, VAR_34, VAR_35;

  FUNC_0(VAR_28->dev, "using bootloader's disp. mode\n");
  VAR_27->var.pixclock = (VAR_31 * 1000000) / VAR_28->refclk;
  VAR_27->var.xres = (FUNC_4(VAR_25, VAR_16) & 0x0fff) + 1;
  VAR_30 = FUNC_4(VAR_25, VAR_22);
  VAR_27->var.yres = ((VAR_30 >> 16) & 0x0fff) + 1;
  VAR_33 = (VAR_30 & 0x0fff) + 1;
  VAR_27->var.xres_virtual = VAR_27->var.xres;
  VAR_27->var.yres_virtual = VAR_27->var.yres;
  VAR_30 = FUNC_4(VAR_25, VAR_18);
  if (VAR_30 & VAR_19) {
   VAR_27->var.bits_per_pixel = 32;
  } else {
   VAR_30 = FUNC_4(VAR_25, VAR_20);
   if (VAR_30 & VAR_21)
    VAR_27->var.bits_per_pixel = 16;
   else
    VAR_27->var.bits_per_pixel = 8;
  }
  VAR_30 = FUNC_4(VAR_25, VAR_23);
  VAR_27->var.hsync_len = ((VAR_30 & 0xff0000) >> 16) + 1;
  VAR_27->var.vsync_len = ((VAR_30 & 0x3f000000) >> 24) + 1;
  VAR_32 = (VAR_30 & 0xffff) + 1;
  VAR_34 = ((FUNC_4(VAR_25, VAR_17) & 0xfff0000) >> 16) + 1;
  VAR_27->var.right_margin = VAR_32 - VAR_27->var.xres;
  VAR_27->var.left_margin = VAR_34 - VAR_32 - VAR_27->var.hsync_len;
  VAR_35 = ((FUNC_4(VAR_25, VAR_24) & 0xfff0000) >> 16) + 1;
  VAR_27->var.lower_margin = VAR_33 - VAR_27->var.yres;
  VAR_27->var.upper_margin = VAR_35 - VAR_33 - VAR_27->var.vsync_len;
 } else if (VAR_29) {
  FUNC_0(VAR_28->dev, "using supplied mode\n");
  FUNC_3(&VAR_27->var, (struct fb_videomode *)VAR_29);
  VAR_27->var.bits_per_pixel = VAR_29->def_bpp ? VAR_29->def_bpp : 8;
 } else {
  int VAR_36;

  VAR_36 = FUNC_2(&VAR_27->var, VAR_27, "640x480-16@60",
       ((void*)0), 0, ((void*)0), 16);
  if (VAR_36 == 0 || VAR_36 == 4) {
   FUNC_1(VAR_28->dev,
    "failed to get initial mode\n");
   return -VAR_1;
  }
 }

 VAR_27->var.xoffset = 0;
 VAR_27->var.yoffset = 0;
 VAR_27->var.grayscale = 0;
 VAR_27->var.nonstd = 0;
 VAR_27->var.height = -1;
 VAR_27->var.width = -1;
 VAR_27->var.accel_flags = 0;
 VAR_27->var.vmode = VAR_11;
 VAR_27->var.activate = VAR_7;
 VAR_27->flags = VAR_2 |



       VAR_4 |
       VAR_5;


 if ((VAR_27->fbops->fb_check_var)(&VAR_27->var, VAR_27))
  FUNC_1(VAR_28->dev, "check_var() failed on initial setup?\n");

 VAR_27->fix.visual = VAR_27->var.bits_per_pixel == 8 ?
    VAR_9 : VAR_10;
 VAR_27->fix.line_length = (VAR_27->var.xres_virtual *
    VAR_27->var.bits_per_pixel) / 8;
 return 0;
}
