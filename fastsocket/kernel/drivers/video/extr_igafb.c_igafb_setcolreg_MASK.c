
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned int u16 ;
struct iga_par {int dummy; } ;
struct TYPE_4__ {int bits_per_pixel; } ;
struct TYPE_3__ {unsigned int len; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_2__ var; TYPE_1__ cmap; scalar_t__ par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iga_par*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_2, unsigned VAR_3, unsigned VAR_4,
                           unsigned VAR_5, unsigned VAR_6,
                           struct fb_info *VAR_7)
{






 struct iga_par *VAR_8 = (struct iga_par *)VAR_7->par;

        if (VAR_2 >= VAR_7->cmap.len)
                return 1;

 FUNC_0(VAR_8, VAR_2, VAR_1);
 FUNC_0(VAR_8, VAR_3, VAR_0);
 FUNC_0(VAR_8, VAR_4, VAR_0);
 FUNC_0(VAR_8, VAR_5, VAR_0);

 if (VAR_2 < 16) {
  switch (VAR_7->var.bits_per_pixel) {
  case 16:
   ((u16*)(VAR_7->pseudo_palette))[VAR_2] =
    (VAR_2 << 10) | (VAR_2 << 5) | VAR_2;
   break;
  case 24:
   ((u32*)(VAR_7->pseudo_palette))[VAR_2] =
    (VAR_2 << 16) | (VAR_2 << 8) | VAR_2;
  break;
  case 32:
   { int VAR_9;
   VAR_9 = (VAR_2 << 8) | VAR_2;
   ((u32*)(VAR_7->pseudo_palette))[VAR_2] = (VAR_9 << 16) | VAR_9;
   }
   break;
  }
 }
 return 0;
}
