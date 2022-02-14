
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int yoffset; } ;
struct fb_info {TYPE_1__ var; } ;
struct fb_cursor {int enable; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_2(struct fb_info *VAR_6, struct fb_cursor *VAR_7)
{

 switch (VAR_7->enable) {
 case 129:
  *(unsigned int *) VAR_0 |= VAR_2;
  break;

 case 128:
 case 130:
  *(unsigned int *) VAR_0 &= ~VAR_2;
  *(unsigned int *) VAR_1 =
      ((VAR_4 * FUNC_1(VAR_3)) << 12) | ((VAR_5 * FUNC_0(VAR_3)) -
        VAR_6->var.yoffset);
  break;
 }
 return 0;
}
