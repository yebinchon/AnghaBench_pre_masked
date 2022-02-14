
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int line_length; } ;
struct TYPE_3__ {int bits_per_pixel; } ;
struct fb_info {scalar_t__ state; int flags; int screen_base; TYPE_2__ fix; TYPE_1__ var; scalar_t__ pseudo_palette; struct cirrusfb_info* par; } ;
struct fb_image {int depth; int width; int height; size_t fg_color; size_t bg_color; int dx; int data; int dy; } ;
struct cirrusfb_info {scalar_t__ btype; int regbase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (int ,int,int,int ,int,int,size_t,size_t,int ,unsigned char) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_4,
          const struct fb_image *VAR_5)
{
 struct cirrusfb_info *VAR_6 = VAR_4->par;
 unsigned char VAR_7 = (VAR_4->var.bits_per_pixel == 24) ? 0xc : 0x4;

 if (VAR_4->state != VAR_3)
  return;

 if (VAR_4->flags & VAR_2 || VAR_5->depth != 1)
  FUNC_0(VAR_4, VAR_5);
 else if ((VAR_6->btype == VAR_0 || VAR_6->btype == VAR_1) &&
    VAR_7 == 0xc)
  FUNC_0(VAR_4, VAR_5);
 else {
  unsigned VAR_8 = ((VAR_5->width + 7) >> 3) * VAR_5->height;
  int VAR_9 = VAR_4->var.bits_per_pixel;
  u32 VAR_10, VAR_11;

  if (VAR_4->var.bits_per_pixel == 8) {
   VAR_10 = VAR_5->fg_color;
   VAR_11 = VAR_5->bg_color;
  } else {
   VAR_10 = ((u32 *)(VAR_4->pseudo_palette))[VAR_5->fg_color];
   VAR_11 = ((u32 *)(VAR_4->pseudo_palette))[VAR_5->bg_color];
  }
  if (VAR_4->var.bits_per_pixel == 24) {

   FUNC_1(VAR_6->regbase,
       VAR_4->var.bits_per_pixel,
       (VAR_5->dx * VAR_9) / 8, VAR_5->dy,
       (VAR_5->width * VAR_9) / 8,
       VAR_5->height,
       VAR_11, VAR_11,
       VAR_4->fix.line_length, 0x40);
  }
  FUNC_1(VAR_6->regbase,
      VAR_4->var.bits_per_pixel,
      (VAR_5->dx * VAR_9) / 8, VAR_5->dy,
      (VAR_5->width * VAR_9) / 8, VAR_5->height,
      VAR_10, VAR_11,
      VAR_4->fix.line_length, VAR_7);
  FUNC_2(VAR_4->screen_base, VAR_5->data, VAR_8);
 }
}
