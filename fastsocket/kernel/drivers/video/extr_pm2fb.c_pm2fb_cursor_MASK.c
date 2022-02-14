
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct pm2fb_par {scalar_t__ type; } ;
struct TYPE_5__ {int* red; int* green; int* blue; } ;
struct TYPE_4__ {int xoffset; int yoffset; } ;
struct fb_info {TYPE_2__ cmap; TYPE_1__ var; struct pm2fb_par* par; } ;
struct TYPE_6__ {int width; int height; int depth; int dx; int dy; size_t fg_color; size_t bg_color; scalar_t__ data; } ;
struct fb_cursor {int set; scalar_t__ rop; TYPE_3__ image; scalar_t__ mask; scalar_t__ enable; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct pm2fb_par*,int) ;
 int VAR_16 ;
 int FUNC_1 (struct pm2fb_par*,int ,int) ;
 int FUNC_2 (struct pm2fb_par*,int ,int) ;
 int FUNC_3 (struct fb_info*,struct fb_cursor*) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_17, struct fb_cursor *VAR_18)
{
 struct pm2fb_par *VAR_19 = VAR_17->par;
 u8 VAR_20;

 if (!VAR_16)
  return -VAR_0;


 if (VAR_18->image.width > 64 ||
     VAR_18->image.height > 64 ||
     VAR_18->image.depth > 1)
  return -VAR_0;

 if (VAR_19->type == VAR_14)
  return FUNC_3(VAR_17, VAR_18);

 VAR_20 = 0x40;
 if (VAR_18->enable)
   VAR_20 = 0x43;

 FUNC_1(VAR_19, VAR_5, VAR_20);






 if (!VAR_18->set)
  return 0;

 if (VAR_18->set & VAR_3) {
  int VAR_21 = VAR_18->image.dx - VAR_17->var.xoffset + 63;
  int VAR_22 = VAR_18->image.dy - VAR_17->var.yoffset + 63;

  FUNC_0(VAR_19, 4);
  FUNC_2(VAR_19, VAR_9, VAR_21 & 0xff);
  FUNC_2(VAR_19, VAR_10, (VAR_21 >> 8) & 0x7);
  FUNC_2(VAR_19, VAR_11, VAR_22 & 0xff);
  FUNC_2(VAR_19, VAR_12, (VAR_22 >> 8) & 0x7);
 }

 if (VAR_18->set & VAR_1) {
  u32 VAR_23 = VAR_18->image.fg_color;
  u32 VAR_24 = VAR_18->image.bg_color;

  FUNC_0(VAR_19, 7);
  FUNC_2(VAR_19, VAR_6, 1);
  FUNC_2(VAR_19, VAR_7,
   VAR_17->cmap.red[VAR_24] >> 8);
  FUNC_2(VAR_19, VAR_7,
   VAR_17->cmap.green[VAR_24] >> 8);
  FUNC_2(VAR_19, VAR_7,
   VAR_17->cmap.blue[VAR_24] >> 8);

  FUNC_2(VAR_19, VAR_7,
   VAR_17->cmap.red[VAR_23] >> 8);
  FUNC_2(VAR_19, VAR_7,
   VAR_17->cmap.green[VAR_23] >> 8);
  FUNC_2(VAR_19, VAR_7,
   VAR_17->cmap.blue[VAR_23] >> 8);
 }

 if (VAR_18->set & (VAR_4 | VAR_2)) {
  u8 *VAR_25 = (u8 *)VAR_18->image.data;
  u8 *VAR_26 = (u8 *)VAR_18->mask;
  int VAR_27;

  FUNC_0(VAR_19, 1);
  FUNC_2(VAR_19, VAR_13, 0);

  for (VAR_27 = 0; VAR_27 < VAR_18->image.height; VAR_27++) {
   int VAR_28 = (VAR_18->image.width + 7) >> 3;
   int VAR_29 = 8 - VAR_28;

   FUNC_0(VAR_19, 8);
   for (; VAR_28 > 0; VAR_28--) {
    u8 VAR_30 = *VAR_25 ^ *VAR_26;

    if (VAR_18->rop == VAR_15)
     VAR_30 = *VAR_26 & *VAR_25;

    FUNC_2(VAR_19, VAR_8, VAR_30);
    VAR_25++;
    VAR_26++;
   }
   for (; VAR_29 > 0; VAR_29--)
    FUNC_2(VAR_19, VAR_8, 0);
  }
  for (; VAR_27 < 64; VAR_27++) {
   int VAR_31 = 8;
   FUNC_0(VAR_19, 8);
   while (VAR_31-- > 0)
    FUNC_2(VAR_19, VAR_8, 0);
  }

  VAR_26 = (u8 *)VAR_18->mask;
  for (VAR_27 = 0; VAR_27 < VAR_18->image.height; VAR_27++) {
   int VAR_32 = (VAR_18->image.width + 7) >> 3;
   int VAR_33 = 8 - VAR_32;

   FUNC_0(VAR_19, 8);
   for (; VAR_32 > 0; VAR_32--) {

    FUNC_2(VAR_19, VAR_8, *VAR_26);
    VAR_26++;
   }
   for (; VAR_33 > 0; VAR_33--)
    FUNC_2(VAR_19, VAR_8, 0);
  }
  for (; VAR_27 < 64; VAR_27++) {
   int VAR_34 = 8;
   FUNC_0(VAR_19, 8);
   while (VAR_34-- > 0)
    FUNC_2(VAR_19, VAR_8, 0);
  }
 }
 return 0;
}
