
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {struct ep93xx_fbi* par; } ;
struct ep93xx_fbi {TYPE_1__* mach_info; int clk; } ;
struct TYPE_2__ {int (* blank ) (int,struct fb_info*) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ep93xx_fbi*,unsigned int,int ) ;
 unsigned int FUNC_3 (struct ep93xx_fbi*,int ) ;
 int FUNC_4 (int,struct fb_info*) ;
 int FUNC_5 (int,struct fb_info*) ;

__attribute__((used)) static int FUNC_6(int VAR_2, struct fb_info *VAR_3)
{
 struct ep93xx_fbi *VAR_4 = VAR_3->par;
 unsigned int VAR_5 = FUNC_3(VAR_4, VAR_0);

 if (VAR_2) {
  if (VAR_4->mach_info->blank)
   VAR_4->mach_info->blank(VAR_2, VAR_3);
  FUNC_2(VAR_4, VAR_5 & ~VAR_1,
        VAR_0);
  FUNC_0(VAR_4->clk);
 } else {
  FUNC_1(VAR_4->clk);
  FUNC_2(VAR_4, VAR_5 | VAR_1,
        VAR_0);
  if (VAR_4->mach_info->blank)
   VAR_4->mach_info->blank(VAR_2, VAR_3);
 }

 return 0;
}
