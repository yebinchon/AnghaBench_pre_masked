
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omapfb_caps {int ctrl; int wnd_color; } ;
struct TYPE_4__ {scalar_t__ te_connected; TYPE_1__* int_ctrl; } ;
struct TYPE_3__ {int (* get_caps ) (int,struct omapfb_caps*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (int,struct omapfb_caps*) ;

__attribute__((used)) static void FUNC_1(int VAR_9, struct omapfb_caps *VAR_10)
{
 VAR_8.int_ctrl->get_caps(VAR_9, VAR_10);
 VAR_10->ctrl |= VAR_0 |
  VAR_3 |
  VAR_5 |
  VAR_2 |
  VAR_4;
 if (VAR_8.te_connected)
  VAR_10->ctrl |= VAR_1;
 VAR_10->wnd_color |= (1 << VAR_6) |
      (1 << VAR_7);
}
