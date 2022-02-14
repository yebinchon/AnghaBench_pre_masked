
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvidia_par {int PRAMDAC; int CURSOR; scalar_t__ cursor_reset; } ;
struct TYPE_5__ {int* red; int* green; int* blue; } ;
struct TYPE_4__ {int yoffset; int xoffset; } ;
struct fb_info {TYPE_2__ cmap; TYPE_1__ var; struct nvidia_par* par; } ;
struct TYPE_6__ {int width; int height; int dy; int dx; int bg_color; int fg_color; scalar_t__ data; } ;
struct fb_cursor {int set; int rop; scalar_t__ enable; TYPE_3__ image; scalar_t__ mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nvidia_par*,int ) ;
 int FUNC_1 (struct nvidia_par*,int) ;
 int FUNC_2 (int ,int,int) ;


 int FUNC_3 (int*,int,int*,int,int) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct nvidia_par*,int*,int,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_9, struct fb_cursor *VAR_10)
{
 struct nvidia_par *VAR_11 = VAR_9->par;
 u8 VAR_12[VAR_8 * VAR_8 / 8];
 int VAR_13, VAR_14 = VAR_10->set;
 u16 VAR_15, VAR_16;

 if (VAR_10->image.width > VAR_8 || VAR_10->image.height > VAR_8)
  return -VAR_0;

 FUNC_1(VAR_11, 0);

 if (VAR_11->cursor_reset) {
  VAR_14 = VAR_1;
  VAR_11->cursor_reset = 0;
 }

 if (VAR_14 & VAR_6)
  FUNC_6(VAR_11->CURSOR, 0, VAR_8 * VAR_8 * 2);

 if (VAR_14 & VAR_4) {
  u32 VAR_17, VAR_18, VAR_19;

  VAR_18 = VAR_10->image.dy - VAR_9->var.yoffset;
  VAR_17 = VAR_10->image.dx - VAR_9->var.xoffset;
  VAR_19 = VAR_17 & 0xFFFF;
  VAR_19 |= VAR_18 << 16;

  FUNC_2(VAR_11->PRAMDAC, 0x0000300, VAR_19);
 }

 if (VAR_14 & (VAR_5 | VAR_2 | VAR_3)) {
  u32 VAR_20 = VAR_10->image.bg_color;
  u32 VAR_21 = VAR_10->image.fg_color;
  u32 VAR_22 = (VAR_10->image.width + 7) >> 3;
  u32 VAR_23 = VAR_8 / 8;
  u8 *VAR_24 = (u8 *) VAR_10->image.data;
  u8 *VAR_25 = (u8 *) VAR_10->mask;
  u8 *VAR_26;

  VAR_26 = FUNC_5(VAR_22 * VAR_10->image.height, VAR_7);

  if (VAR_26) {
   switch (VAR_10->rop) {
   case 128:
    for (VAR_13 = 0; VAR_13 < VAR_22 * VAR_10->image.height; VAR_13++)
     VAR_26[VAR_13] = VAR_24[VAR_13] ^ VAR_25[VAR_13];
    break;
   case 129:
   default:
    for (VAR_13 = 0; VAR_13 < VAR_22 * VAR_10->image.height; VAR_13++)
     VAR_26[VAR_13] = VAR_24[VAR_13] & VAR_25[VAR_13];
    break;
   }

   FUNC_3(VAR_12, VAR_23, VAR_26, VAR_22,
      VAR_10->image.height);

   VAR_16 = ((VAR_9->cmap.red[VAR_20] & 0xf8) << 7) |
       ((VAR_9->cmap.green[VAR_20] & 0xf8) << 2) |
       ((VAR_9->cmap.blue[VAR_20] & 0xf8) >> 3) | 1 << 15;

   VAR_15 = ((VAR_9->cmap.red[VAR_21] & 0xf8) << 7) |
       ((VAR_9->cmap.green[VAR_21] & 0xf8) << 2) |
       ((VAR_9->cmap.blue[VAR_21] & 0xf8) >> 3) | 1 << 15;

   FUNC_0(VAR_11, 0);

   FUNC_7(VAR_11, VAR_12, VAR_16, VAR_15,
         VAR_10->image.width,
         VAR_10->image.height);
   FUNC_4(VAR_26);
  }
 }

 if (VAR_10->enable)
  FUNC_1(VAR_11, 1);

 return 0;
}
