
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct au1100fb_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int lcd_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct fb_info*,int) ;
 struct au1100fb_device* FUNC_1 (struct fb_info*) ;

void FUNC_2(struct fb_info *VAR_3, int VAR_4)
{
 struct au1100fb_device *VAR_5 = FUNC_1(VAR_3);

 FUNC_0("fb_rotate %p %d", VAR_3, VAR_4);

 if (VAR_5 && (VAR_4 > 0) && !(VAR_4 % 90)) {

  VAR_5->regs->lcd_control &= ~VAR_0;

  VAR_5->regs->lcd_control &= ~(VAR_2);
  VAR_5->regs->lcd_control |= ((VAR_4/90) << VAR_1);

  VAR_5->regs->lcd_control |= VAR_0;
 }
}
