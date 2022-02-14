
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u32 ;
struct TYPE_3__ {int length; } ;
struct TYPE_4__ {int bits_per_pixel; TYPE_1__ green; int nonstd; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_2__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(u_int VAR_4, u_int VAR_5, u_int VAR_6, u_int VAR_7,
    u_int VAR_8, struct fb_info *VAR_9)
{
 switch (VAR_9->var.bits_per_pixel) {
 case 0:
 case 4:
  if (VAR_4 >= 16)
   return -VAR_0;

  if ((VAR_9->var.bits_per_pixel == 4) &&
      (VAR_9->var.nonstd == 0)) {
   FUNC_0(0xF0, VAR_3);
   FUNC_0(VAR_4*16, VAR_2);
  } else {
   FUNC_0(0x0F, VAR_3);
   FUNC_0(VAR_4, VAR_2);
  }
  FUNC_0(VAR_5 >> 10, VAR_1);
  FUNC_0(VAR_6 >> 10, VAR_1);
  FUNC_0(VAR_7 >> 10, VAR_1);
  break;
 case 8:
  if (VAR_4 >= 256)
   return -VAR_0;

  FUNC_0(0xFF, VAR_3);
  FUNC_0(VAR_4, VAR_2);
  FUNC_0(VAR_5 >> 10, VAR_1);
  FUNC_0(VAR_6 >> 10, VAR_1);
  FUNC_0(VAR_7 >> 10, VAR_1);
  break;
 case 16:
  if (VAR_4 >= 16)
   return 0;

  if (VAR_9->var.green.length == 5)
   ((u32*)VAR_9->pseudo_palette)[VAR_4] = ((VAR_5 & 0xF800) >> 1) |
    ((VAR_6 & 0xF800) >> 6) | ((VAR_7 & 0xF800) >> 11);
  else if (VAR_9->var.green.length == 6)
   ((u32*)VAR_9->pseudo_palette)[VAR_4] = (VAR_5 & 0xF800) |
    ((VAR_6 & 0xFC00) >> 5) | ((VAR_7 & 0xF800) >> 11);
  else return -VAR_0;
  break;
 case 24:
 case 32:
  if (VAR_4 >= 16)
   return 0;

  ((u32*)VAR_9->pseudo_palette)[VAR_4] = ((VAR_5 & 0xFF00) << 8) |
   (VAR_6 & 0xFF00) | ((VAR_7 & 0xFF00) >> 8);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
