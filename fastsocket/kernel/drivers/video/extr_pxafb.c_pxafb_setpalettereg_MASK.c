
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
typedef size_t u32 ;
struct TYPE_3__ {scalar_t__ grayscale; } ;
struct TYPE_4__ {TYPE_1__ var; } ;
struct pxafb_info {size_t palette_size; size_t* palette_cpu; int lccr4; TYPE_2__ fb; } ;
struct fb_info {int dummy; } ;






 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
         u_int VAR_5, struct fb_info *VAR_6)
{
 struct pxafb_info *VAR_7 = (struct pxafb_info *)VAR_6;
 u_int VAR_8;

 if (VAR_1 >= VAR_7->palette_size)
  return 1;

 if (VAR_7->fb.var.grayscale) {
  VAR_7->palette_cpu[VAR_1] = ((VAR_4 >> 8) & 0x00ff);
  return 0;
 }

 switch (VAR_7->lccr4 & VAR_0) {
 case 131:
  VAR_8 = ((VAR_2 >> 0) & 0xf800);
  VAR_8 |= ((VAR_3 >> 5) & 0x07e0);
  VAR_8 |= ((VAR_4 >> 11) & 0x001f);
  VAR_7->palette_cpu[VAR_1] = VAR_8;
  break;
 case 130:
  VAR_8 = ((VAR_2 << 8) & 0x00f80000);
  VAR_8 |= ((VAR_3 >> 0) & 0x0000fc00);
  VAR_8 |= ((VAR_4 >> 8) & 0x000000f8);
  ((u32 *)(VAR_7->palette_cpu))[VAR_1] = VAR_8;
  break;
 case 129:
  VAR_8 = ((VAR_2 << 8) & 0x00fc0000);
  VAR_8 |= ((VAR_3 >> 0) & 0x0000fc00);
  VAR_8 |= ((VAR_4 >> 8) & 0x000000fc);
  ((u32 *)(VAR_7->palette_cpu))[VAR_1] = VAR_8;
  break;
 case 128:
  VAR_8 = ((VAR_2 << 8) & 0x00ff0000);
  VAR_8 |= ((VAR_3 >> 0) & 0x0000ff00);
  VAR_8 |= ((VAR_4 >> 8) & 0x000000ff);
  ((u32 *)(VAR_7->palette_cpu))[VAR_1] = VAR_8;
  break;
 }

 return 0;
}
