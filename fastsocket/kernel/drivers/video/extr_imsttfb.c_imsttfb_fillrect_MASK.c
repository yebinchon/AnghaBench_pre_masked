
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imstt_par {int dc_regs; } ;
struct TYPE_4__ {int line_length; } ;
struct TYPE_3__ {int bits_per_pixel; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; struct imstt_par* par; } ;
struct fb_fillrect {int color; int dy; int dx; int height; int width; scalar_t__ rop; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct fb_info *VAR_11, const struct fb_fillrect *VAR_12)
{
 struct imstt_par *VAR_13 = VAR_11->par;
 __u32 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_16 = VAR_12->color;
 VAR_16 |= (VAR_16 << 8);
 VAR_16 |= (VAR_16 << 16);

 VAR_14 = VAR_11->var.bits_per_pixel >> 3,
 VAR_15 = VAR_11->fix.line_length;

 VAR_18 = VAR_12->dy * VAR_15;
 VAR_17 = VAR_12->dx * VAR_14;
 VAR_20 = VAR_12->height;
 VAR_20--;
 VAR_19 = VAR_12->width * VAR_14;
 VAR_19--;

 if (VAR_12->rop == VAR_7) {
  while(FUNC_0(VAR_13->dc_regs, VAR_10) & 0x80);
  FUNC_1(VAR_13->dc_regs, VAR_5, VAR_18 + VAR_17);
  FUNC_1(VAR_13->dc_regs, VAR_3, (VAR_20 << 16) | VAR_19);
  FUNC_1(VAR_13->dc_regs, VAR_4, VAR_15);
  FUNC_1(VAR_13->dc_regs, VAR_0, 0xffffffff);
  FUNC_1(VAR_13->dc_regs, VAR_6, 0xffffffff);
  FUNC_1(VAR_13->dc_regs, VAR_2, VAR_16);
  FUNC_1(VAR_13->dc_regs, VAR_1, 0x840);
  while(FUNC_0(VAR_13->dc_regs, VAR_10) & 0x80);
  while(FUNC_0(VAR_13->dc_regs, VAR_10) & 0x40);
 } else {
  while(FUNC_0(VAR_13->dc_regs, VAR_10) & 0x80);
  FUNC_1(VAR_13->dc_regs, VAR_5, VAR_18 + VAR_17);
  FUNC_1(VAR_13->dc_regs, VAR_8, VAR_18 + VAR_17);
  FUNC_1(VAR_13->dc_regs, VAR_3, (VAR_20 << 16) | VAR_19);
  FUNC_1(VAR_13->dc_regs, VAR_4, VAR_15);
  FUNC_1(VAR_13->dc_regs, VAR_9, VAR_15);
  FUNC_1(VAR_13->dc_regs, VAR_1, 0x40005);
  while(FUNC_0(VAR_13->dc_regs, VAR_10) & 0x80);
  while(FUNC_0(VAR_13->dc_regs, VAR_10) & 0x40);
 }
}
