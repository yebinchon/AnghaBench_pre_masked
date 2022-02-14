
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int offset; } ;
struct TYPE_6__ {int bits_per_pixel; int xres; TYPE_1__ red; int pixclock; } ;
struct TYPE_5__ {int line_length; int visual; } ;
struct fb_info {TYPE_3__ var; TYPE_2__ fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int*,int*) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 u8 VAR_5;


 FUNC_0(&VAR_2->var.pixclock, &VAR_3, &VAR_4, &VAR_5);


 if (VAR_2->var.bits_per_pixel == 24) {
  FUNC_2(0x81, 0x16);
  FUNC_2(0x82, 0x00);
  FUNC_2(0x20, 0x20);
 } else if (VAR_2->var.bits_per_pixel == 16) {
  if (VAR_2->var.red.offset == 11)
   FUNC_2(0x81, 0x15);
  else
   FUNC_2(0x81, 0x14);
  FUNC_2(0x82, 0x00);
  FUNC_2(0x20, 0x10);
 } else if (VAR_2->var.bits_per_pixel == 8) {
  FUNC_2(0x0a, 0x02);
  FUNC_2(0x81, 0x12);
  FUNC_2(0x82, 0x00);
  FUNC_2(0x20, 0x00);
 }
 VAR_2->fix.line_length = VAR_2->var.xres * (VAR_2->var.bits_per_pixel >> 3);
 VAR_2->fix.visual = (VAR_2->var.bits_per_pixel == 8) ? VAR_0 : VAR_1;
 FUNC_2(0xc4, VAR_3);
 FUNC_2(0xc5, VAR_4);
 FUNC_2(0xc7, VAR_5);

 FUNC_1(VAR_2);
 return 0;
}
