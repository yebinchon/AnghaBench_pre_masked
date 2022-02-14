
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct imstt_par {int* cmap_regs; int* palette; } ;
struct TYPE_3__ {int length; } ;
struct TYPE_4__ {int bits_per_pixel; TYPE_1__ green; } ;
struct fb_info {TYPE_2__ var; struct imstt_par* par; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1 (u_int VAR_2, u_int VAR_3, u_int VAR_4, u_int VAR_5,
     u_int VAR_6, struct fb_info *VAR_7)
{
 struct imstt_par *VAR_8 = VAR_7->par;
 u_int VAR_9 = VAR_7->var.bits_per_pixel;

 if (VAR_2 > 255)
  return 1;

 VAR_3 >>= 8;
 VAR_4 >>= 8;
 VAR_5 >>= 8;


 if (0 && VAR_9 == 16)
  VAR_8->cmap_regs[VAR_0] = VAR_2 << 3;
 else
  VAR_8->cmap_regs[VAR_0] = VAR_2;
 FUNC_0();

 VAR_8->cmap_regs[VAR_1] = VAR_3; FUNC_0();
 VAR_8->cmap_regs[VAR_1] = VAR_4; FUNC_0();
 VAR_8->cmap_regs[VAR_1] = VAR_5; FUNC_0();

 if (VAR_2 < 16)
  switch (VAR_9) {
   case 16:
    VAR_8->palette[VAR_2] =
     (VAR_2 << (VAR_7->var.green.length ==
     5 ? 10 : 11)) | (VAR_2 << 5) | VAR_2;
    break;
   case 24:
    VAR_8->palette[VAR_2] =
     (VAR_2 << 16) | (VAR_2 << 8) | VAR_2;
    break;
   case 32: {
    int VAR_10 = (VAR_2 << 8) | VAR_2;
    VAR_8->palette[VAR_2] = (VAR_10 << 16) |VAR_10;
    break;
   }
  }
 return 0;
}
