
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar9170 {int last_reason; int force_usb_reset; int restart_work; int hw; scalar_t__ needs_full_reset; int registered; TYPE_1__* udev; int pending_restarts; } ;
typedef enum carl9170_restart_reasons { ____Placeholder_carl9170_restart_reasons } carl9170_restart_reasons ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (int) ;
 int const VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ar9170*,int ,int ) ;
 int FUNC_4 (int *,char*,int const) ;
 int FUNC_5 (int *,char*,int const) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct ar9170 *VAR_4, const enum carl9170_restart_reasons VAR_5)
{
 FUNC_3(VAR_4, VAR_2, VAR_0);






 if (FUNC_2(&VAR_4->pending_restarts) > 1) {
  FUNC_4(&VAR_4->udev->dev, "ignoring restart (%d)\n", VAR_5);
  return;
 }

 FUNC_7(VAR_4->hw);

 FUNC_5(&VAR_4->udev->dev, "restart device (%d)\n", VAR_5);

 if (!FUNC_1(VAR_5 == VAR_1) ||
     !FUNC_1(VAR_5 >= VAR_3))
  VAR_4->last_reason = VAR_5;

 if (!VAR_4->registered)
  return;

 if (!FUNC_0(VAR_4) || VAR_4->needs_full_reset)
  VAR_4->force_usb_reset = 1;

 FUNC_6(VAR_4->hw, &VAR_4->restart_work);






}
