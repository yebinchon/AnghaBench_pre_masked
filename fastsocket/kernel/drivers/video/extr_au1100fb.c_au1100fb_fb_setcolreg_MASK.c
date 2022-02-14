
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int length; unsigned int offset; } ;
struct TYPE_10__ {int length; unsigned int offset; } ;
struct TYPE_9__ {int length; unsigned int offset; } ;
struct TYPE_12__ {TYPE_5__ blue; TYPE_4__ green; TYPE_3__ red; scalar_t__ grayscale; } ;
struct TYPE_8__ {scalar_t__ visual; } ;
struct fb_info {TYPE_6__ var; scalar_t__ pseudo_palette; TYPE_2__ fix; } ;
struct au1100fb_device {int panel; TYPE_1__* regs; } ;
struct TYPE_7__ {int* lcd_pallettebase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct au1100fb_device* FUNC_3 (struct fb_info*) ;

int FUNC_4(unsigned VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, struct fb_info *VAR_8)
{
 struct au1100fb_device *VAR_9;
 u32 *VAR_10;
 u32 VAR_11;

 VAR_9 = FUNC_3(VAR_8);
 VAR_10 = VAR_9->regs->lcd_pallettebase;

 if (VAR_3 > (VAR_0 - 1))
  return -VAR_1;

 if (VAR_8->var.grayscale) {

  VAR_4 = VAR_5 = VAR_6 =
   (19595 * VAR_4 + 38470 * VAR_5 + 7471 * VAR_6) >> 16;
 }

 if (VAR_8->fix.visual == VAR_2) {

  if (VAR_3 > 16)
   return -VAR_1;

  VAR_10 = (u32*)VAR_8->pseudo_palette;

  VAR_4 >>= (16 - VAR_8->var.red.length);
  VAR_5 >>= (16 - VAR_8->var.green.length);
  VAR_6 >>= (16 - VAR_8->var.blue.length);

  VAR_11 = (VAR_4 << VAR_8->var.red.offset) |
   (VAR_5 << VAR_8->var.green.offset)|
   (VAR_6 << VAR_8->var.blue.offset);
  VAR_11 &= 0xFFFF;

 } else if (FUNC_0(VAR_9->panel)) {

  VAR_11 = (VAR_4 & 0xF800)|((VAR_5 >> 5) & 0x07E0)|((VAR_6 >> 11) & 0x001F);
  VAR_11 &= 0xFFFF;

 } else if (FUNC_1(VAR_9->panel)) {

  VAR_11 = (((FUNC_2(VAR_9->panel) ? VAR_6 : VAR_4) >> 12) & 0x000F) |
   ((VAR_5 >> 8) & 0x00F0) |
   (((FUNC_2(VAR_9->panel) ? VAR_4 : VAR_6) >> 4) & 0x0F00);
  VAR_11 &= 0xFFF;
 } else {

  VAR_11 = (VAR_5 >> 12) & 0x000F;
  VAR_11 &= 0xF;
 }

 VAR_10[VAR_3] = VAR_11;

 return 0;
}
