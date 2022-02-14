
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u_short ;
struct TYPE_9__ {int length; unsigned int offset; } ;
struct TYPE_8__ {int length; unsigned int offset; } ;
struct TYPE_7__ {int length; unsigned int offset; } ;
struct TYPE_10__ {int bits_per_pixel; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct TYPE_6__ {scalar_t__ visual; } ;
struct fb_info {TYPE_5__ var; TYPE_1__ fix; struct da8xx_fb_par* par; } ;
struct da8xx_fb_par {unsigned int* pseudo_palette; scalar_t__ v_palette_base; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
         unsigned VAR_4, unsigned VAR_5,
         struct fb_info *VAR_6)
{
 struct da8xx_fb_par *VAR_7 = VAR_6->par;
 unsigned short *VAR_8 = (unsigned short *)VAR_7->v_palette_base;
 u_short VAR_9;

 if (VAR_1 > 255)
  return 1;

 if (VAR_6->fix.visual == VAR_0)
  return 1;

 if (VAR_6->var.bits_per_pixel == 8) {
  VAR_2 >>= 4;
  VAR_3 >>= 8;
  VAR_4 >>= 12;

  VAR_9 = (VAR_2 & 0x0f00);
  VAR_9 |= (VAR_3 & 0x00f0);
  VAR_9 |= (VAR_4 & 0x000f);

  VAR_8[VAR_1] = VAR_9;

 } else if ((VAR_6->var.bits_per_pixel == 16) && VAR_1 < 16) {
  VAR_2 >>= (16 - VAR_6->var.red.length);
  VAR_2 <<= VAR_6->var.red.offset;

  VAR_3 >>= (16 - VAR_6->var.green.length);
  VAR_3 <<= VAR_6->var.green.offset;

  VAR_4 >>= (16 - VAR_6->var.blue.length);
  VAR_4 <<= VAR_6->var.blue.offset;

  VAR_7->pseudo_palette[VAR_1] = VAR_2 | VAR_3 | VAR_4;

  VAR_8[0] = 0x4000;
 }

 return 0;
}
