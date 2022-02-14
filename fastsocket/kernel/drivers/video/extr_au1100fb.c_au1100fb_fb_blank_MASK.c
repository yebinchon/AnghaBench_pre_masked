
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct au1100fb_device {TYPE_1__* regs; } ;
struct TYPE_4__ {int panel_idx; } ;
struct TYPE_3__ {int lcd_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_3 (char*,int,struct fb_info*) ;
 struct au1100fb_device* FUNC_4 (struct fb_info*) ;

__attribute__((used)) static int FUNC_5(int VAR_5, struct fb_info *VAR_6)
{
 struct au1100fb_device *VAR_7 = FUNC_4(VAR_6);

 FUNC_3("fb_blank %d %p", VAR_5, VAR_6);

 switch (VAR_5) {

 case 130:

   VAR_7->regs->lcd_control |= VAR_0;







  FUNC_1();
  break;

 case 128:
 case 131:
 case 129:

   VAR_7->regs->lcd_control &= ~VAR_0;







  FUNC_1();
  break;
 default:
  break;

 }
 return 0;
}
