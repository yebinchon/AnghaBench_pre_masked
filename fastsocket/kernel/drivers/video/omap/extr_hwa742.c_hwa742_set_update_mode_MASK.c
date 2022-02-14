
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum omapfb_update_mode { ____Placeholder_omapfb_update_mode } omapfb_update_mode ;
struct TYPE_4__ {int update_mode; int stop_auto_update; TYPE_1__* fbdev; int auto_update_timer; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(enum omapfb_update_mode VAR_4)
{
 if (VAR_4 != 129 && VAR_4 != 130 &&
     VAR_4 != 128)
  return -VAR_0;

 if (VAR_4 == VAR_3)
  return 0;

 FUNC_1(VAR_3->dev, "HWA742: setting update mode to %s\n",
   VAR_4 == 128 ? "disabled" :
   (VAR_4 == 130 ? "auto" : "manual"));

 switch (VAR_3) {
 case 129:
  FUNC_4(VAR_3, VAR_1);
  break;
 case 130:
  VAR_3 = 1;
  FUNC_0(&VAR_3);
  break;
 case 128:
  break;
 }

 VAR_3 = VAR_4;
 FUNC_2();
 VAR_3 = 0;

 switch (VAR_4) {
 case 129:
  FUNC_4(VAR_3, VAR_2);
  break;
 case 130:
  FUNC_3(0);
  break;
 case 128:
  break;
 }

 return 0;
}
