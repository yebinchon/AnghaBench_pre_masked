
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct fb_info {scalar_t__ pseudo_palette; } ;



__attribute__((used)) static int FUNC_0(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      struct fb_info *VAR_5)
{






    if (VAR_0 > 255)
     return 1;
    VAR_1>>=11;
    VAR_2>>=11;
    VAR_3>>=10;

    if (VAR_0 < 16) {
 ((u32 *)VAR_5->pseudo_palette)[VAR_0] = ((VAR_1 & 31) <<6) |
            ((VAR_2 & 31) << 11) |
            (VAR_3 & 63);
    }
    return 0;
}
