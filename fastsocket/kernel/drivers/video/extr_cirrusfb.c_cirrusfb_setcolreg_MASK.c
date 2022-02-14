
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_9__ {int length; unsigned int offset; } ;
struct TYPE_8__ {int length; unsigned int offset; } ;
struct TYPE_7__ {int length; unsigned int offset; } ;
struct TYPE_10__ {int bits_per_pixel; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct TYPE_6__ {scalar_t__ visual; } ;
struct fb_info {TYPE_5__ var; TYPE_1__ fix; struct cirrusfb_info* par; } ;
struct cirrusfb_info {unsigned int* pseudo_palette; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cirrusfb_info*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_2, unsigned VAR_3, unsigned VAR_4,
         unsigned VAR_5, unsigned VAR_6,
         struct fb_info *VAR_7)
{
 struct cirrusfb_info *VAR_8 = VAR_7->par;

 if (VAR_2 > 255)
  return -VAR_0;

 if (VAR_7->fix.visual == VAR_1) {
  u32 VAR_9;
  VAR_3 >>= (16 - VAR_7->var.red.length);
  VAR_4 >>= (16 - VAR_7->var.green.length);
  VAR_5 >>= (16 - VAR_7->var.blue.length);

  if (VAR_2 >= 16)
   return 1;
  VAR_9 = (VAR_3 << VAR_7->var.red.offset) |
      (VAR_4 << VAR_7->var.green.offset) |
      (VAR_5 << VAR_7->var.blue.offset);

  VAR_8->pseudo_palette[VAR_2] = VAR_9;
  return 0;
 }

 if (VAR_7->var.bits_per_pixel == 8)
  FUNC_0(VAR_8, VAR_2, VAR_3 >> 10, VAR_4 >> 10, VAR_5 >> 10);

 return 0;

}
