
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int bits_per_pixel; int xres_virtual; } ;
struct TYPE_3__ {int line_length; int visual; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct fb_info *VAR_2)
{
 u32 VAR_3 = VAR_2->var.bits_per_pixel;

 VAR_2->fix.visual =
  VAR_3 == 8 ? VAR_0 : VAR_1;
 VAR_2->fix.line_length =
  ((VAR_2->var.xres_virtual + 7) & ~7) * VAR_3 / 8;
}
