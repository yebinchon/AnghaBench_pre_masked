
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct savagefb_par {TYPE_1__* palette; } ;
struct TYPE_4__ {int bits_per_pixel; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_2__ var; struct savagefb_par* par; } ;
struct TYPE_3__ {unsigned int red; unsigned int green; unsigned int blue; unsigned int transp; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,unsigned int,struct savagefb_par*) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_2,
         unsigned VAR_3,
         unsigned VAR_4,
         unsigned VAR_5,
         unsigned VAR_6,
         struct fb_info *VAR_7)
{
 struct savagefb_par *VAR_8 = VAR_7->par;

 if (VAR_2 >= VAR_1)
  return -VAR_0;

 VAR_8->palette[VAR_2].red = VAR_3;
 VAR_8->palette[VAR_2].green = VAR_4;
 VAR_8->palette[VAR_2].blue = VAR_5;
 VAR_8->palette[VAR_2].transp = VAR_6;

 switch (VAR_7->var.bits_per_pixel) {
 case 8:
  FUNC_0(0x3c8, VAR_2, VAR_8);

  FUNC_0(0x3c9, VAR_3 >> 10, VAR_8);
  FUNC_0(0x3c9, VAR_4 >> 10, VAR_8);
  FUNC_0(0x3c9, VAR_5 >> 10, VAR_8);
  break;

 case 16:
  if (VAR_2 < 16)
   ((u32 *)VAR_7->pseudo_palette)[VAR_2] =
    ((VAR_3 & 0xf800) ) |
    ((VAR_4 & 0xfc00) >> 5) |
    ((VAR_5 & 0xf800) >> 11);
  break;

 case 24:
  if (VAR_2 < 16)
   ((u32 *)VAR_7->pseudo_palette)[VAR_2] =
    ((VAR_3 & 0xff00) << 8) |
    ((VAR_4 & 0xff00) ) |
    ((VAR_5 & 0xff00) >> 8);
  break;
 case 32:
  if (VAR_2 < 16)
   ((u32 *)VAR_7->pseudo_palette)[VAR_2] =
    ((VAR_6 & 0xff00) << 16) |
    ((VAR_3 & 0xff00) << 8) |
    ((VAR_4 & 0xff00) ) |
    ((VAR_5 & 0xff00) >> 8);
  break;

 default:
  return 1;
 }

 return 0;
}
