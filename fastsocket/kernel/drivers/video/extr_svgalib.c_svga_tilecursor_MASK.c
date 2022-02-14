
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct fb_tilecursor {int sx; int sy; int shape; int mode; } ;
struct TYPE_2__ {int xoffset; int yoffset; int xres_virtual; } ;
struct fb_info {TYPE_1__ var; } ;





 int VAR_0 ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,int,int) ;

void FUNC_2(struct fb_info *VAR_1, struct fb_tilecursor *VAR_2)
{
 u8 VAR_3 = 0x0d;
 u8 VAR_4 = 0x0e;
 u16 VAR_5 = VAR_2->sx + (VAR_1->var.xoffset / 8)
  + (VAR_2->sy + (VAR_1->var.yoffset / 16))
     * (VAR_1->var.xres_virtual / 8);

 if (! VAR_2 -> mode)
  return;

 FUNC_0(0x0A, 0x20, 0x20);

 if (VAR_2 -> shape == VAR_0)
  return;

 switch (VAR_2 -> shape) {
 case 128:
  VAR_3 = 0x0d;
  break;
 case 130:
  VAR_3 = 0x09;
  break;
 case 131:
  VAR_3 = 0x07;
  break;
 case 129:
  VAR_3 = 0x05;
  break;
 case 132:
  VAR_3 = 0x01;
  break;
 }


 FUNC_1(((void*)0), 0x0E, VAR_5 >> 8);
 FUNC_1(((void*)0), 0x0F, VAR_5 & 0xFF);

 FUNC_1(((void*)0), 0x0B, VAR_4);
 FUNC_1(((void*)0), 0x0A, VAR_3);
}
