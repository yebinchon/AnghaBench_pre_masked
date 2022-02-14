
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct pvr2fb_par {int dummy; } ;
struct TYPE_4__ {int bits_per_pixel; } ;
struct TYPE_3__ {unsigned int len; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_2__ var; TYPE_1__ cmap; scalar_t__ par; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct pvr2fb_par*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_0, unsigned int VAR_1,
       unsigned int VAR_2, unsigned int VAR_3,
                            unsigned int VAR_4, struct fb_info *VAR_5)
{
 struct pvr2fb_par *VAR_6 = (struct pvr2fb_par *)VAR_5->par;
 unsigned int VAR_7;

 if (VAR_0 > VAR_5->cmap.len)
  return 1;






 switch (VAR_5->var.bits_per_pixel) {
     case 16:
  VAR_7 = (VAR_1 & 0xf800) |
        ((VAR_2 & 0xfc00) >> 5) |
        ((VAR_3 & 0xf800) >> 11);

  FUNC_1(VAR_6, VAR_0, VAR_7);
  break;
     case 24:
  VAR_1 >>= 8; VAR_2 >>= 8; VAR_3 >>= 8;
  VAR_7 = (VAR_1 << 16) | (VAR_2 << 8) | VAR_3;
  break;
     case 32:
  VAR_1 >>= 8; VAR_2 >>= 8; VAR_3 >>= 8;
  VAR_7 = (VAR_4 << 24) | (VAR_1 << 16) | (VAR_2 << 8) | VAR_3;

  FUNC_1(VAR_6, VAR_0, VAR_7);
  break;
     default:
  FUNC_0("Invalid bit depth %d?!?\n", VAR_5->var.bits_per_pixel);
  return 1;
 }

 if (VAR_0 < 16)
  ((u32*)(VAR_5->pseudo_palette))[VAR_0] = VAR_7;

 return 0;
}
