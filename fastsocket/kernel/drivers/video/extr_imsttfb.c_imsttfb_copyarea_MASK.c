
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int width ;
struct imstt_par {int dc_regs; } ;
struct TYPE_4__ {int line_length; } ;
struct TYPE_3__ {int bits_per_pixel; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; struct imstt_par* par; } ;
struct fb_copyarea {int sx; int sy; int dx; int dy; int height; int width; } ;
typedef int line_pitch ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct fb_info *VAR_7, const struct fb_copyarea *VAR_8)
{
 struct imstt_par *VAR_9 = VAR_7->par;
 __u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  __u32 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

 VAR_10 = VAR_7->var.bits_per_pixel >> 3,

 VAR_18 = VAR_8->sx * VAR_10;
 VAR_19 = VAR_8->sy;
 VAR_20 = VAR_8->dx * VAR_10;
 VAR_21 = VAR_8->dy;
 VAR_22 = VAR_8->height;
 VAR_22--;
 VAR_23 = VAR_8->width * VAR_10;
 VAR_23--;

 VAR_11 = VAR_7->fix.line_length;
 VAR_17 = 0x05;
 VAR_14 = VAR_11 << 16;
 VAR_16 = VAR_22 << 16;

 if (VAR_19 < VAR_21) {
  VAR_19 += VAR_22;
  VAR_21 += VAR_22;
  VAR_14 |= -(VAR_11) & 0xffff;
  VAR_15 = -(VAR_11) & 0xffff;
 } else {
  VAR_14 |= VAR_11;
  VAR_15 = VAR_11;
 }
 if (VAR_18 < VAR_20) {
  VAR_18 += VAR_23;
  VAR_20 += VAR_23;
  VAR_17 |= 0x80;
  VAR_16 |= -(VAR_23) & 0xffff;
 } else {
  VAR_16 |= VAR_23;
 }
 VAR_12 = VAR_19 * VAR_11 + VAR_18;
 VAR_13 = VAR_21 * VAR_11 + VAR_20;

 while(FUNC_0(VAR_9->dc_regs, VAR_6) & 0x80);
 FUNC_1(VAR_9->dc_regs, VAR_4, VAR_12);
 FUNC_1(VAR_9->dc_regs, VAR_5, VAR_14);
 FUNC_1(VAR_9->dc_regs, VAR_3, VAR_13);
 FUNC_1(VAR_9->dc_regs, VAR_1, VAR_16);
 FUNC_1(VAR_9->dc_regs, VAR_2, VAR_15);
 FUNC_1(VAR_9->dc_regs, VAR_0, VAR_17);
 while(FUNC_0(VAR_9->dc_regs, VAR_6) & 0x80);
 while(FUNC_0(VAR_9->dc_regs, VAR_6) & 0x40);
}
