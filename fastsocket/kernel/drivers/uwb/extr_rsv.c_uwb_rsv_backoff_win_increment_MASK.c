
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct uwb_drp_backoff_win {int window; int can_reserve_extra_mases; int n; int timer; scalar_t__ total_expired; } ;
struct uwb_rc {TYPE_1__ uwb_dev; struct uwb_drp_backoff_win bow; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned int) ;

void FUNC_4(struct uwb_rc *VAR_3)
{
 struct uwb_drp_backoff_win *VAR_4 = &VAR_3->bow;
 struct device *VAR_5 = &VAR_3->uwb_dev.dev;
 unsigned VAR_6;

 FUNC_0(VAR_5, "backoff_win_increment: window=%d\n", VAR_4->window);

 VAR_4->can_reserve_extra_mases = 0;

 if((VAR_4->window << 1) == VAR_0)
  return;

 VAR_4->window <<= 1;
 VAR_4->n = FUNC_2() & (VAR_4->window - 1);
 FUNC_0(VAR_5, "new_window=%d, n=%d\n: ", VAR_4->window, VAR_4->n);


 VAR_6 = VAR_4->n * VAR_1;
 VAR_4->total_expired = 0;
 FUNC_1(&VAR_4->timer, VAR_2 + FUNC_3(VAR_6));
}
