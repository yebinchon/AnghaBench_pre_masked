
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pm3_par {int* palette; } ;
struct TYPE_6__ {int scan_align; } ;
struct TYPE_5__ {int bits_per_pixel; } ;
struct TYPE_4__ {int visual; } ;
struct fb_info {scalar_t__ state; int flags; TYPE_3__ pixmap; TYPE_2__ var; TYPE_1__ fix; struct pm3_par* par; } ;
struct fb_image {int height; int fg_color; int bg_color; int depth; int dy; int dx; int width; scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int const FUNC_0 (int) ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int const FUNC_1 (int) ;
 int const FUNC_2 (int) ;
 int VAR_12 ;
 int const FUNC_3 (int) ;
 int const VAR_13 ;
 int const VAR_14 ;
 int const FUNC_4 (int) ;
 int const VAR_15 ;
 int const VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (struct pm3_par*,int) ;
 int FUNC_6 (struct pm3_par*,int ,int const) ;
 int FUNC_7 (struct fb_info*,struct fb_image const*) ;

__attribute__((used)) static void FUNC_8(struct fb_info *VAR_20, const struct fb_image *VAR_21)
{
 struct pm3_par *VAR_22 = VAR_20->par;
 u32 VAR_23 = VAR_21->height;
 u32 VAR_24, VAR_25;
 const u32 *VAR_26 = (const u32 *)VAR_21->data;

 if (VAR_20->state != VAR_1)
  return;
 if (VAR_20->flags & VAR_0) {
  FUNC_7(VAR_20, VAR_21);
  return;
 }
 switch (VAR_20->fix.visual) {
 case 129:
  VAR_24 = VAR_21->fg_color;
  VAR_25 = VAR_21->bg_color;
  break;
 case 128:
 default:
  VAR_24 = VAR_22->palette[VAR_21->fg_color];
  VAR_25 = VAR_22->palette[VAR_21->bg_color];
  break;
 }
 if (VAR_21->depth != 1) {
  FUNC_7(VAR_20, VAR_21);
  return;
 }

 if (VAR_20->var.bits_per_pixel == 8) {
  VAR_24 |= VAR_24 << 8;
  VAR_25 |= VAR_25 << 8;
 }
 if (VAR_20->var.bits_per_pixel <= 16) {
  VAR_24 |= VAR_24 << 16;
  VAR_25 |= VAR_25 << 16;
 }

 FUNC_5(VAR_22, 7);

 FUNC_6(VAR_22, VAR_10, VAR_24);
 FUNC_6(VAR_22, VAR_2, VAR_25);


 FUNC_6(VAR_22, VAR_4,
   VAR_9 |
   VAR_8 |
   VAR_6 |
   FUNC_0(0x3) |
   VAR_7 |
   VAR_5);
 FUNC_6(VAR_22, VAR_18,
   ((VAR_21->dy & 0x0fff) << 16) | (VAR_21->dx & 0x0fff));
 FUNC_6(VAR_22, VAR_17,
   (((VAR_21->dy + VAR_21->height) & 0x0fff) << 16) |
   ((VAR_21->dx + VAR_21->width) & 0x0fff));
 FUNC_6(VAR_22, VAR_11,
   FUNC_1(VAR_21->dx) |
   FUNC_2(VAR_21->dy));
 FUNC_6(VAR_22, VAR_12,
   VAR_15 |
   VAR_16 |
   VAR_13 |
   VAR_14 |
   FUNC_4(VAR_21->width) |
   FUNC_3(VAR_21->height));


 while (VAR_23--) {
  int VAR_27 = ((VAR_21->width + 7) >> 3)
    + VAR_20->pixmap.scan_align - 1;
  VAR_27 >>= 2;

  while (VAR_27 >= VAR_19) {
   int VAR_28 = VAR_19 - 1;

   FUNC_5(VAR_22, VAR_19);
   while (VAR_28--) {
    FUNC_6(VAR_22, VAR_3, *VAR_26);
    VAR_26++;
   }
   VAR_27 -= VAR_19 - 1;
  }

  FUNC_5(VAR_22, VAR_27 + 1);
  while (VAR_27--) {
   FUNC_6(VAR_22, VAR_3, *VAR_26);
   VAR_26++;
  }
 }
}
