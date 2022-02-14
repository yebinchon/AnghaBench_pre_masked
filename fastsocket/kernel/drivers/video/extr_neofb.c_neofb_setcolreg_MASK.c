
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
struct TYPE_4__ {int bits_per_pixel; } ;
struct TYPE_3__ {int len; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_2__ var; TYPE_1__ cmap; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
      u_int VAR_5, struct fb_info *VAR_6)
{
 if (VAR_1 >= VAR_6->cmap.len || VAR_1 > 255)
  return -VAR_0;

 if (VAR_6->var.bits_per_pixel <= 8) {
  FUNC_0(VAR_1, 0x3c8);

  FUNC_0(VAR_2 >> 10, 0x3c9);
  FUNC_0(VAR_3 >> 10, 0x3c9);
  FUNC_0(VAR_4 >> 10, 0x3c9);
 } else if (VAR_1 < 16) {
  switch (VAR_6->var.bits_per_pixel) {
  case 16:
   ((u32 *) VAR_6->pseudo_palette)[VAR_1] =
    ((VAR_2 & 0xf800)) | ((VAR_3 & 0xfc00) >> 5) |
    ((VAR_4 & 0xf800) >> 11);
   break;
  case 24:
   ((u32 *) VAR_6->pseudo_palette)[VAR_1] =
    ((VAR_2 & 0xff00) << 8) | ((VAR_3 & 0xff00)) |
    ((VAR_4 & 0xff00) >> 8);
   break;







  default:
   return 1;
  }
 }

 return 0;
}
