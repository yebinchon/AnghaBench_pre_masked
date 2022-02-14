
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kyrofb_info {int XRES; unsigned long YRES; int VFREQ; int HCLK; int PIXCLK; int HFP; int HST; int HBP; int HTot; unsigned long VFP; unsigned long VST; unsigned long VBP; unsigned long VTot; int HSP; int VSP; int PIXDEPTH; } ;
struct TYPE_4__ {int visual; int line_length; } ;
struct TYPE_3__ {int xres; unsigned long yres; int pixclock; int right_margin; int hsync_len; int left_margin; unsigned long lower_margin; unsigned long vsync_len; unsigned long upper_margin; int sync; int bits_per_pixel; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; struct kyrofb_info* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct fb_info*) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_3)
{
 struct kyrofb_info *VAR_4 = VAR_3->par;
 unsigned long VAR_5;
 unsigned long VAR_6;


 VAR_4->XRES = VAR_3->var.xres;
 VAR_4->YRES = VAR_3->var.yres;


 VAR_4->PIXDEPTH = VAR_3->var.bits_per_pixel;



 VAR_5 = (VAR_3->var.pixclock * (VAR_3->var.xres +
        VAR_3->var.right_margin +
        VAR_3->var.hsync_len +
        VAR_3->var.left_margin)) / 1000;



 VAR_6 = VAR_5 * (VAR_3->var.yres +
      VAR_3->var.lower_margin +
      VAR_3->var.vsync_len +
      VAR_3->var.upper_margin);


 VAR_4->VFREQ = (1000000000 + (VAR_6 / 2)) / VAR_6;
 VAR_4->HCLK = (1000000000 + (VAR_5 / 2)) / VAR_5;
 VAR_4->PIXCLK = ((1000000000 + (VAR_3->var.pixclock / 2))
     / VAR_3->var.pixclock) * 10;


 VAR_4->HFP = VAR_3->var.right_margin;
 VAR_4->HST = VAR_3->var.hsync_len;
 VAR_4->HBP = VAR_3->var.left_margin;
 VAR_4->HTot = VAR_4->XRES + VAR_4->HBP + VAR_4->HST + VAR_4->HFP;


 VAR_4->VFP = VAR_3->var.lower_margin;
 VAR_4->VST = VAR_3->var.vsync_len;
 VAR_4->VBP = VAR_3->var.upper_margin;
 VAR_4->VTot = VAR_4->YRES + VAR_4->VBP + VAR_4->VST + VAR_4->VFP;

 VAR_4->HSP = (VAR_3->var.sync & VAR_0) ? 1 : 0;
 VAR_4->VSP = (VAR_3->var.sync & VAR_1) ? 1 : 0;

 FUNC_1(VAR_3);


 VAR_3->fix.line_length = FUNC_0(VAR_4->XRES, VAR_4->PIXDEPTH);
 VAR_3->fix.visual = VAR_2;

 return 0;
}
