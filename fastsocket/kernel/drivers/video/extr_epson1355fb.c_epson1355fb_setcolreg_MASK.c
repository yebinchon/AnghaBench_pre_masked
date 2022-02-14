
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {int visual; } ;
struct TYPE_3__ {scalar_t__ grayscale; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_2__ fix; TYPE_1__ var; struct epson1355_par* par; } ;
struct epson1355_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct epson1355_par*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_2, unsigned VAR_3, unsigned VAR_4,
     unsigned VAR_5, unsigned VAR_6,
     struct fb_info *VAR_7)
{
 struct epson1355_par *VAR_8 = VAR_7->par;

 if (VAR_7->var.grayscale)
  VAR_3 = VAR_4 = VAR_5 = (19595 * VAR_3 + 38470 * VAR_4 + 7471 * VAR_5) >> 16;

 switch (VAR_7->fix.visual) {
 case 128:
  if (VAR_2 >= 16)
   return -VAR_0;

  ((u32 *) VAR_7->pseudo_palette)[VAR_2] =
      (VAR_3 & 0xf800) | (VAR_4 & 0xfc00) >> 5 | (VAR_5 & 0xf800) >> 11;

  break;
 case 129:
  if (VAR_2 >= 256)
   return -VAR_0;

  FUNC_0(VAR_8, VAR_2, VAR_3 >> 8, VAR_4 >> 8, VAR_5 >> 8);

  break;
 default:
  return -VAR_1;
 }
 return 0;
}
