
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dvb_gpio; int suspend_gpio; } ;
struct em28xx {int mode; int ctl_input; TYPE_1__ board; } ;
typedef enum em28xx_mode { ____Placeholder_em28xx_mode } em28xx_mode ;
struct TYPE_4__ {int gpio; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct em28xx*,int ) ;

int FUNC_2(struct em28xx *VAR_2, enum em28xx_mode VAR_3)
{
 if (VAR_2->mode == VAR_3)
  return 0;

 if (VAR_3 == VAR_1) {
  VAR_2->mode = VAR_3;



  return FUNC_1(VAR_2, VAR_2->board.suspend_gpio);
 }

 VAR_2->mode = VAR_3;

 if (VAR_2->mode == VAR_0)
  return FUNC_1(VAR_2, VAR_2->board.dvb_gpio);
 else
  return FUNC_1(VAR_2, FUNC_0(VAR_2->ctl_input)->gpio);
}
