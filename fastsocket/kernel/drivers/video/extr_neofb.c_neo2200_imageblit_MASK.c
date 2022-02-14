
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct neofb_par {scalar_t__ mmio_vbase; TYPE_4__* neo2200; } ;
struct TYPE_7__ {int line_length; } ;
struct TYPE_6__ {int bits_per_pixel; } ;
struct TYPE_5__ {int scan_align; int buf_align; } ;
struct fb_info {TYPE_3__ fix; TYPE_2__ var; scalar_t__ pseudo_palette; TYPE_1__ pixmap; struct neofb_par* par; } ;
struct fb_image {int width; int depth; int height; int fg_color; int bg_color; int dx; int dy; int data; } ;
struct TYPE_8__ {int xyExt; int dstStart; int srcStart; int bltCntl; int bgColor; int fgColor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void
FUNC_4(struct fb_info *VAR_3, const struct fb_image *VAR_4)
{
 struct neofb_par *VAR_5 = VAR_3->par;
 int VAR_6 = (VAR_4->width * VAR_4->depth + 7) >> 3;
 int VAR_7 = VAR_3->pixmap.scan_align - 1;
 int VAR_8 = VAR_3->pixmap.buf_align - 1;
 int VAR_9, VAR_10, VAR_11;


 VAR_10 = (VAR_6 + VAR_7) & ~VAR_7;
 VAR_11 = ((VAR_10 * VAR_4->height) + VAR_8) & ~VAR_8;

 FUNC_2(VAR_3);

 if (VAR_4->depth == 1) {
  if (VAR_3->var.bits_per_pixel == 24 && VAR_4->width < 16) {





   FUNC_0(VAR_3, VAR_4);
   return;
  }
  VAR_9 = VAR_0;
 } else if (VAR_4->depth == VAR_3->var.bits_per_pixel) {
  VAR_9 = 0;
 } else {


  FUNC_0(VAR_3, VAR_4);
  return;
 }

 switch (VAR_3->var.bits_per_pixel) {
 case 8:
  FUNC_3(VAR_4->fg_color, &VAR_5->neo2200->fgColor);
  FUNC_3(VAR_4->bg_color, &VAR_5->neo2200->bgColor);
  break;
 case 16:
 case 24:
  FUNC_3(((u32 *) (VAR_3->pseudo_palette))[VAR_4->fg_color],
         &VAR_5->neo2200->fgColor);
  FUNC_3(((u32 *) (VAR_3->pseudo_palette))[VAR_4->bg_color],
         &VAR_5->neo2200->bgColor);
  break;
 }

 FUNC_3(VAR_1 |
  VAR_2 | VAR_9 |

  0x0c0000, &VAR_5->neo2200->bltCntl);

 FUNC_3(0, &VAR_5->neo2200->srcStart);

 FUNC_3(((VAR_4->dx & 0xffff) * (VAR_3->var.bits_per_pixel >> 3) +
  VAR_4->dy * VAR_3->fix.line_length), &VAR_5->neo2200->dstStart);
 FUNC_3((VAR_4->height << 16) | (VAR_4->width & 0xffff),
        &VAR_5->neo2200->xyExt);

 FUNC_1(VAR_5->mmio_vbase + 0x100000, VAR_4->data, VAR_11);
}
