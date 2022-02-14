
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int dummy; } ;
struct wl1271 {TYPE_2__* hw; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {int rts_threshold; } ;


 int VAR_0 ;
 int FUNC_0 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,int ) ;

__attribute__((used)) static int FUNC_3(struct wl1271 *VAR_1,
         struct wl12xx_vif *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_1->hw->wiphy->rts_threshold);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
