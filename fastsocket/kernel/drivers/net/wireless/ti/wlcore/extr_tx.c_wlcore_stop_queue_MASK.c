
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {int wl_lock; } ;
typedef enum wlcore_queue_stop_reason { ____Placeholder_wlcore_queue_stop_reason } wlcore_queue_stop_reason ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,int ,int) ;

void FUNC_3(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1, u8 VAR_2,
         enum wlcore_queue_stop_reason VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_0->wl_lock, VAR_4);
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->wl_lock, VAR_4);
}
