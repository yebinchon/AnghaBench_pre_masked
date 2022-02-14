
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct kyrofb_info {int* palette; } ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; struct kyrofb_info* par; } ;



__attribute__((used)) static int FUNC_0(u_int VAR_0, u_int VAR_1, u_int VAR_2,
       u_int VAR_3, u_int VAR_4, struct fb_info *VAR_5)
{
 struct kyrofb_info *VAR_6 = VAR_5->par;

 if (VAR_0 > 255)
  return 1;

 if (VAR_0 < 16) {
  switch (VAR_5->var.bits_per_pixel) {
  case 16:
   VAR_6->palette[VAR_0] =
        (VAR_1 & 0xf800) |
       ((VAR_2 & 0xfc00) >> 5) |
       ((VAR_3 & 0xf800) >> 11);
   break;
  case 32:
   VAR_1 >>= 8; VAR_2 >>= 8; VAR_3 >>= 8; VAR_4 >>= 8;
   VAR_6->palette[VAR_0] =
       (VAR_4 << 24) | (VAR_1 << 16) | (VAR_2 << 8) | VAR_3;
   break;
  }
 }

 return 0;
}
