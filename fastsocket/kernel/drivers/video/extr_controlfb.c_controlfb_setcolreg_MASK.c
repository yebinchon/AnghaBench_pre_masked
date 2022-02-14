
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int cmode; } ;
struct fb_info_control {int* pseudo_palette; TYPE_2__ par; TYPE_1__* cmap_regs; } ;
struct fb_info {int dummy; } ;
typedef int __u8 ;
struct TYPE_3__ {int lut; int addr; } ;




 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(u_int VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
        u_int VAR_4, struct fb_info *VAR_5)
{
 struct fb_info_control *VAR_6 = (struct fb_info_control *) VAR_5;
 __u8 VAR_7, VAR_8, VAR_9;

 if (VAR_0 > 255)
  return 1;

 VAR_7 = VAR_1 >> 8;
 VAR_8 = VAR_2 >> 8;
 VAR_9 = VAR_3 >> 8;

 FUNC_0(&VAR_6->cmap_regs->addr, VAR_0);
 FUNC_0(&VAR_6->cmap_regs->lut, VAR_7);
 FUNC_0(&VAR_6->cmap_regs->lut, VAR_8);
 FUNC_0(&VAR_6->cmap_regs->lut, VAR_9);

 if (VAR_0 < 16) {
  int VAR_10;
  switch (VAR_6->par.cmode) {
  case 129:
   VAR_6->pseudo_palette[VAR_0] =
       (VAR_0 << 10) | (VAR_0 << 5) | VAR_0;
   break;
  case 128:
   VAR_10 = (VAR_0 << 8) | VAR_0;
   VAR_6->pseudo_palette[VAR_0] = (VAR_10 << 16) | VAR_10;
   break;
  }
 }

 return 0;
}
