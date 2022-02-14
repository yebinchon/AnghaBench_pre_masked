
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fb_var_screeninfo {int vmode; int xoffset; int yoffset; } ;
struct TYPE_5__ {int bits_per_pixel; } ;
struct TYPE_4__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct cirrusfb_info* par; } ;
struct cirrusfb_info {size_t btype; int regbase; } ;
struct TYPE_6__ {scalar_t__ scrn_start_bit19; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_1 (struct cirrusfb_info*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,unsigned char) ;
 int FUNC_4 (int ,int ,unsigned char) ;

__attribute__((used)) static int FUNC_5(struct fb_var_screeninfo *VAR_8,
    struct fb_info *VAR_9)
{
 int VAR_10;
 unsigned long VAR_11;
 unsigned char VAR_12, VAR_13;
 struct cirrusfb_info *VAR_14 = VAR_9->par;



 if (VAR_8->vmode & VAR_4)
  return -VAR_3;

 VAR_10 = VAR_8->xoffset * VAR_9->var.bits_per_pixel / 8;

 VAR_11 = VAR_8->yoffset * VAR_9->fix.line_length + VAR_10;

 if (VAR_9->var.bits_per_pixel == 1) {

  VAR_13 = (unsigned char) (VAR_8->xoffset % 8);
 } else {
  VAR_11 /= 4;
  VAR_13 = (unsigned char) ((VAR_10 % 4) * 2);
 }

 if (!FUNC_1(VAR_14))
  FUNC_0(VAR_14->regbase);


 FUNC_4(VAR_14->regbase, VAR_6, VAR_11 & 0xff);
 FUNC_4(VAR_14->regbase, VAR_5, (VAR_11 >> 8) & 0xff);


 VAR_12 = FUNC_2(VAR_14->regbase, VAR_1) & 0xf2;

 if (VAR_11 & 0x10000)
  VAR_12 |= 0x01;
 if (VAR_11 & 0x20000)
  VAR_12 |= 0x04;
 if (VAR_11 & 0x40000)
  VAR_12 |= 0x08;

 FUNC_4(VAR_14->regbase, VAR_1, VAR_12);


 if (VAR_7[VAR_14->btype].scrn_start_bit19) {
  VAR_12 = FUNC_2(VAR_14->regbase, VAR_2);
  if (FUNC_1(VAR_14))
   VAR_12 = (VAR_12 & ~0x18) | ((VAR_11 >> 16) & 0x18);
  else
   VAR_12 = (VAR_12 & ~0x80) | ((VAR_11 >> 12) & 0x80);
  FUNC_4(VAR_14->regbase, VAR_2, VAR_12);
 }





 if (VAR_9->var.bits_per_pixel == 1)
  FUNC_3(VAR_14->regbase, VAR_0, VAR_13);

 return 0;
}
