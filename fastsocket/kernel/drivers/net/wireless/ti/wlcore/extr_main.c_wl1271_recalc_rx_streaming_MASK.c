
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int rx_streaming_timer; int flags; } ;
struct TYPE_3__ {int interval; scalar_t__ always; } ;
struct TYPE_4__ {TYPE_1__ rx_streaming; } ;
struct wl1271 {int flags; TYPE_2__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,int) ;

int FUNC_3(struct wl1271 *VAR_3, struct wl12xx_vif *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = VAR_3->conf.rx_streaming.interval;


 if (!FUNC_1(VAR_1, &VAR_4->flags))
  goto out;


 if (VAR_6 &&
     FUNC_1(VAR_2, &VAR_4->flags) &&
     (VAR_3->conf.rx_streaming.always ||
      FUNC_1(VAR_0, &VAR_3->flags)))
  VAR_5 = FUNC_2(VAR_3, VAR_4, 1);
 else {
  VAR_5 = FUNC_2(VAR_3, VAR_4, 0);

  FUNC_0(&VAR_4->rx_streaming_timer);
 }
out:
 return VAR_5;
}
