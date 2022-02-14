
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fb_var_screeninfo {int yoffset; int xres_virtual; int xoffset; int bits_per_pixel; } ;
struct cfb_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,struct cfb_info*) ;
 int FUNC_1 (int,int,struct cfb_info*) ;

__attribute__((used)) static inline int
FUNC_2(struct cfb_info *VAR_1, struct fb_var_screeninfo *VAR_2)
{
 u_int VAR_3 = VAR_2->yoffset * VAR_2->xres_virtual + VAR_2->xoffset;

 VAR_3 *= VAR_2->bits_per_pixel;





 VAR_3 >>= 5;

 if (VAR_3 >= 1 << 20)
  return -VAR_0;

 FUNC_1(0x10, VAR_3 >> 16 | 0x10, VAR_1);
 FUNC_0(0x0c, VAR_3 >> 8, VAR_1);
 FUNC_0(0x0d, VAR_3, VAR_1);

 return 0;
}
